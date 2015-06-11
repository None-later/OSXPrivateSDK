/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSXPCListenerDelegate-Protocol.h"
#import "iCloudUserNotifierRemoteObjectProtocol-Protocol.h"

@class NSLock, NSString, NSXPCConnection, NSXPCListener;

@interface iCloudUserNotifier : NSObject <iCloudUserNotifierRemoteObjectProtocol, NSXPCListenerDelegate>
{
    NSXPCConnection *_conn;
    NSLock *_connLock;
    NSXPCListener *_listener;
    NSString *_identifier;
    NSString *_serviceName;
    id <iCloudUserNotificationDelegate> _delegate;
}

@property(retain) id <iCloudUserNotificationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void)didClearNotification:(id)arg1;
- (void)didDismissNotification:(id)arg1;
- (void)didActivateNotification:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_agentConnectionFailedToBootstrap;
- (void)_agentConnectionWasInvalidated;
- (void)_agentConnectionWasInterrupted;
- (id)agentConnection;
- (id)_pendingNotificationsForAllClients;
- (id)pendingNotifications;
- (id)_pendingNotificationsWithClientIdentifier:(id)arg1;
- (void)removeAllNotifications;
- (void)removeNotificationWithIdentifier:(id)arg1;
- (void)deliverNotification:(id)arg1;
- (id)initWithIdentifier:(id)arg1 machServiceName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
