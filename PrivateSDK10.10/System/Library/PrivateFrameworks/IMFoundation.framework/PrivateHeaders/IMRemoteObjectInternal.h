/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSRecursiveLock, NSString, Protocol;

@interface IMRemoteObjectInternal : NSObject
{
    NSRecursiveLock *_lock;
    struct _xpc_connection_s *_connection;
    struct dispatch_queue_s *_queue;
    long long _deathPostPredicate;
    Protocol *_protocol;
    NSString *_portName;
    BOOL _willBeTerminated;
    int _pid;
}

@end
