//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKInstallServiceClient.h"

@class NSXPCConnection;

@interface _PKInstallClientConnection : NSObject <PKInstallServiceClient>
{
    NSXPCConnection *_connection;
    id <PKInstallService> _proxy;
    id <PKInstallService> _blockingProxy;
    struct dispatch_semaphore_s *_sema;
}

- (void)deferredReplyForToken:(id)arg1 installError:(id)arg2 registrationPaths:(id)arg3;
- (void)installDidEndForToken:(id)arg1;
- (void)installDidBeginCommitForToken:(id)arg1;
- (void)installDidBeginForToken:(id)arg1;
- (void)invalidate;
- (BOOL)waitUntilDoneOrTimedOut;
- (BOOL)waitUntilDone;
- (void)signal;
- (id)blockingProxy;
- (id)proxy;
- (BOOL)isServiceRemote;
- (BOOL)connectToDaemon:(BOOL)arg1 clientObject:(id)arg2;
- (void)dealloc;
- (id)init;

@end
