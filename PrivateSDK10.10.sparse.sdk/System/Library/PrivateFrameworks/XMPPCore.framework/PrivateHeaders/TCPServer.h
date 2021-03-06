/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface TCPServer : NSObject
{
    struct __CFSocket *_serverSocket;
    unsigned long long _port;
}

- (unsigned long long)port;
- (BOOL)acceptConnectionWithSocketHandle:(int)arg1 fromAddress:(id)arg2;
- (void)stop;
- (BOOL)startOnPort:(unsigned long long)arg1;
- (BOOL)isStarted;
- (void)dealloc;

@end

