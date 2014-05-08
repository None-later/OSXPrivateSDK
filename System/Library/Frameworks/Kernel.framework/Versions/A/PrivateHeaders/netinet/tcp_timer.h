/*
 * Copyright (c) 2000-2010 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/*
 * Copyright (c) 1982, 1986, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)tcp_timer.h	8.1 (Berkeley) 6/10/93
 * $FreeBSD: src/sys/netinet/tcp_timer.h,v 1.18 1999/12/29 04:41:03 peter Exp $
 */

#ifndef _NETINET_TCP_TIMER_H_
#define _NETINET_TCP_TIMER_H_
#include <sys/appleapiopts.h>

#include <kern/thread_call.h>

/*
 * Definitions of the TCP timers.
 */
#define	TCPT_NTIMERS	(TCPT_MAX + 1)	

/* Keep the external definition the same for binary compatibility */
#define TCPT_NTIMERS_EXT	4

#define	TCPT_REXMT	0		/* retransmit */
#define	TCPT_PERSIST	1		/* retransmit persistence */
#define	TCPT_KEEP	2		/* keep alive */
#define	TCPT_2MSL	3		/* 2*msl quiet time timer */
#define	TCPT_DELACK	4		/* delayed ack timer */
#if MPTCP
#define TCPT_JACK_RXMT	5		/* retransmit timer for join ack */
#define TCPT_MAX	5
#else /* MPTCP */
#define	TCPT_MAX	4
#endif /* !MPTCP */
#define	TCPT_NONE	(TCPT_MAX + 1)	

/*
 * The TCPT_REXMT timer is used to force retransmissions.
 * The TCP has the TCPT_REXMT timer set whenever segments
 * have been sent for which ACKs are expected but not yet
 * received.  If an ACK is received which advances tp->snd_una,
 * then the retransmit timer is cleared (if there are no more
 * outstanding segments) or reset to the base value (if there
 * are more ACKs expected).  Whenever the retransmit timer goes off,
 * we retransmit one unacknowledged segment, and do a backoff
 * on the retransmit timer.
 *
 * The TCPT_PERSIST timer is used to keep window size information
 * flowing even if the window goes shut.  If all previous transmissions
 * have been acknowledged (so that there are no retransmissions in progress),
 * and the window is too small to bother sending anything, then we start
 * the TCPT_PERSIST timer.  When it expires, if the window is nonzero,
 * we go to transmit state.  Otherwise, at intervals send a single byte
 * into the peer's window to force him to update our window information.
 * We do this at most as often as TCPT_PERSMIN time intervals,
 * but no more frequently than the current estimate of round-trip
 * packet time.  The TCPT_PERSIST timer is cleared whenever we receive
 * a window update from the peer.
 *
 * The TCPT_KEEP timer is used to keep connections alive.  If an
 * connection is idle (no segments received) for TCPTV_KEEP_INIT amount of time,
 * but not yet established, then we drop the connection.  Once the connection
 * is established, if the connection is idle for TCPTV_KEEP_IDLE time
 * (and keepalives have been enabled on the socket), we begin to probe
 * the connection.  We force the peer to send us a segment by sending:
 *	<SEQ=SND.UNA-1><ACK=RCV.NXT><CTL=ACK>
 * This segment is (deliberately) outside the window, and should elicit
 * an ack segment in response from the peer.  If, despite the TCPT_KEEP
 * initiated segments we cannot elicit a response from a peer in TCPT_MAXIDLE
 * amount of time probing, then we drop the connection.
 */


/*
 * Time constants.
 */
#define	TCPTV_MSL	( 15*TCP_RETRANSHZ)		/* max seg lifetime (hah!) */
#define	TCPTV_SRTTBASE	0			/* base roundtrip time;
						   if  0, no idea yet */
#define	TCPTV_RTOBASE	(  1*TCP_RETRANSHZ)		/* assumed RTO if no info */
#define	TCPTV_SRTTDFLT	(  1*TCP_RETRANSHZ)		/* assumed RTT if no info */

#define	TCPTV_PERSMIN	(  5*TCP_RETRANSHZ)		/* retransmit persistence */
#define	TCPTV_PERSMAX	( 60*TCP_RETRANSHZ)		/* maximum persist interval */

#define	TCPTV_KEEP_INIT	( 75*TCP_RETRANSHZ)		/* initial connect keep alive */
#define	TCPTV_KEEP_IDLE	(120*60*TCP_RETRANSHZ)	/* dflt time before probing */
#define	TCPTV_KEEPINTVL	( 75*TCP_RETRANSHZ)		/* default probe interval */
#define	TCPTV_KEEPCNT	8			/* max probes before drop */

#define	TCPTV_REXMTMAX	( 64*TCP_RETRANSHZ )	/* max allowable REXMT value */
#define	TCPTV_REXMTMIN	( TCP_RETRANSHZ/33 )	/* min REXMT for non-local connections */
#define TCPTV_UNACKWIN	( TCP_RETRANSHZ/10 )	/* Window for counting rcv bytes to see if 
						   ack-stretching can start (default 100 ms) */
#define TCPTV_MAXRCVIDLE (TCP_RETRANSHZ/5 ) 	/* Receiver idle time, avoid ack-stretching after that*/
#define TCPTV_RCVBUFIDLE (TCP_RETRANSHZ/2) 	/* Receiver idle time, for rcv socket buffer resizing */

/* No ack stretching during slow-start, until we see some packets.
 * By the time the receiver gets 512 packets, the senders cwnd 
 * should open by a few hundred packets consdering the 
 * slow-start progression.
 */
#define TCP_RCV_SS_PKTCOUNT     512

#define TCPTV_TWTRUNC	8			/* RTO factor to truncate TW */

#define	TCP_LINGERTIME	120			/* linger at most 2 minutes */

#define	TCP_MAXRXTSHIFT	12			/* maximum retransmits */

#ifdef	TCPTIMERS
static char *tcptimers[] =
    { "REXMT", "PERSIST", "KEEP", "2MSL" , "DELACK"};
#endif


/* We consider persist, keep and 2msl as slow timers which can be coalesced
 * at a higher granularity (500 ms). Rexmt and delayed ack are considered fast
 * timers which fire in the order of 100ms.
 *
 * The following conditional is to check if a timer is one of the slow timers. This 
 * is fast and works well for now. If we add more slow timers for any reason, 
 * we may need to change this.
 */
#define IS_TIMER_SLOW(ind) ((ind & 0x3) != 0)

struct tcptimerlist;

struct tcptimerentry {
        LIST_ENTRY(tcptimerentry) le;	/* links for timer list */ 
        uint32_t timer_start;		/* tcp clock when the timer was started */
	uint16_t index;			/* index of lowest timer that needs to run first */
	uint32_t runtime;		/* deadline at which the first timer has to fire */
};

LIST_HEAD(timerlisthead, tcptimerentry);

struct tcptimerlist {
	struct timerlisthead lhead;	/* head of the list of timer entries */
	lck_mtx_t *mtx;			/* lock to protect the list */
	lck_attr_t *mtx_attr;		/* mutex attributes */
	lck_grp_t *mtx_grp;		/* mutex group definition */
	lck_grp_attr_t *mtx_grp_attr;	/* mutex group attributes */
	uint32_t fast_quantum;		/* minimum time quantum to coalesce fast timers */
	uint32_t slow_quantum;		/* minimum time quantum to coalesce slow timers */
	thread_call_t call;		/* call entry */
	uint32_t runtime;		/* time at which this list is going to run */
	uint32_t entries;		/* Number of entries on the list */
	uint32_t maxentries;		/* Max number of entries at any time */

	/* Set desired mode when timer list running */
	boolean_t running;		/* Set when timer list is being processed */
#define TCP_TIMERLIST_FASTMODE 0x1
#define TCP_TIMERLIST_SLOWMODE 0x2
	uint32_t mode;			/* Current mode, fast or slow */
	uint32_t pref_mode;		/* Preferred mode set by a connection, fast or slow */
	uint32_t pref_offset;		/* Preferred offset set by a connection */
	uint32_t idlegen;		/* Number of times the list has been idle in fast mode */
	struct tcptimerentry *next_te;	/* Store the next timer entry pointer to process */

};

#define TCP_FASTMODE_IDLEGEN_MAX 20	/* Approximately 2 seconds */

/*
 * Minimum retransmit timeout is set to 30ms. We add a slop of 
 * 200 ms to the retransmit value to account for processing 
 * variance and delayed ack. This extra 200ms will help to avoid 
 * spurious retransmits by taking into consideration the receivers 
 * that wait for delayed ack timer instead of generating an ack 
 * for every two packets.
 *
 * On a local link, the minimum retransmit timeout is 100ms and
 * variance is set to 0. This will make the sender a little bit more
 * aggressive on local link. When the connection is not established yet,
 * there is no need to add an extra 200ms to retransmit timeout because
 * the initial value is high (1s) and delayed ack is not a problem in 
 * that case.
 */
#define TCPTV_REXMTSLOP ( TCP_RETRANSHZ/5 )	/* rexmt slop allowed (200 ms) */

/* macro to decide when retransmit slop (described above) should be added */
#define TCP_ADD_REXMTSLOP(tp) (tp->t_state >= TCPS_ESTABLISHED) 

#define	TCPT_RANGESET(tv, value, tvmin, tvmax, addslop) do { \
	(tv) = ((addslop) ? tcp_rexmt_slop : 0) + (value); \
	if ((uint32_t)(tv) < (uint32_t)(tvmin)) \
		(tv) = (tvmin); \
	else if ((uint32_t)(tv) > (uint32_t)(tvmax)) \
		(tv) = (tvmax); \
} while(0)

#define TCP_CONN_KEEPIDLE(tp) \
	((tp)->t_keepidle && \
	((tp)->t_inpcb->inp_socket->so_options & SO_KEEPALIVE) ? \
		(tp)->t_keepidle : tcp_keepidle)
#define TCP_CONN_KEEPINIT(tp) \
	(((tp)->t_keepinit > 0) ? (tp)->t_keepinit : tcp_keepinit)
#define TCP_CONN_KEEPCNT(tp) \
	(((tp)->t_keepcnt > 0) ? (tp)->t_keepcnt : tcp_keepcnt)
#define TCP_CONN_KEEPINTVL(tp) \
	(((tp)->t_keepintvl > 0) ? (tp)->t_keepintvl : tcp_keepintvl)
#define TCP_CONN_MAXIDLE(tp) \
	(TCP_CONN_KEEPCNT(tp) * TCP_CONN_KEEPINTVL(tp))

/* Since we did not add rexmt slop for local connections, we should add
 * it to idle timeout. Otherwise local connections will reach idle state
 * quickly
 */
#define TCP_IDLETIMEOUT(tp) \
	(((TCP_ADD_REXMTSLOP(tp)) ? 0 : tcp_rexmt_slop) + tp->t_rxtcur)

TAILQ_HEAD(tcptailq, tcpcb);

extern int tcp_keepinit;		/* time to establish connection */
extern int tcp_keepidle;		/* time before keepalive probes begin */
extern int tcp_keepintvl;		/* time between keepalive probes */
extern int tcp_keepcnt;			/* number of keepalives */
extern int tcp_delack;			/* delayed ack timer */
extern int tcp_maxpersistidle;
extern int tcp_msl;
extern int tcp_ttl;			/* time to live for TCP segs */
extern int tcp_backoff[];
extern int tcp_rexmt_slop;
extern u_int32_t tcp_max_persist_timeout;	/* Maximum persistence for Zero Window Probes */

#define OFFSET_FROM_START(tp, off) ((tcp_now + (off)) - (tp)->tentry.timer_start)

#endif /* !_NETINET_TCP_TIMER_H_ */

