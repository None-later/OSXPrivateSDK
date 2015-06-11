//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSViewServiceMarshal.h"

@class NSAccessibilityRemoteUIElement, NSColor, NSMutableArray, NSResponder, NSString, NSViewBridge, NSViewService, NSXPCConnection;

@interface NSViewServiceMarshal : NSView <NSViewServiceMarshal>
{
    struct CGSize _size;
    NSViewBridge *_bridge;
    unsigned int _keyFocusTheftID;
    NSViewService *_service;
    NSXPCConnection *_xpcConnection;
    unsigned char _bridgePhase;
    unsigned int _invalid:1;
    unsigned int _notificationsRegistered:1;
    unsigned int _mayBecomeKey:1;
    unsigned int _remoteViewIsFirstResponder:1;
    unsigned int _accessoryViewContainsFirstResponder:1;
    unsigned int _isAssociatedWithRemoteWindow:1;
    unsigned int _remoteGeometryChangeInProgress:1;
    unsigned int _remoteFirstResponderChangeInProgress:1;
    unsigned int _remoteAccessoryViewCanBecomeKeyView:1;
    unsigned int _transactionBegun:1;
    unsigned int _didOverrideStyleMask:1;
    unsigned int _willUpdateAccessibilityChildren:1;
    unsigned int _serviceOwnsWindowEventShape:1;
    unsigned int _serviceWantsWindowEventShapeForClickability:1;
    unsigned int _windowWasOpaque:1;
    unsigned int _settingFirstResponderForRemoteView:1;
    unsigned int _grantedPresenterRightToRemote:1;
    unsigned int _applicationHiding:1;
    unsigned int _applicationUnhiding:1;
    unsigned long long _serviceFlags;
    NSAccessibilityRemoteUIElement *_remoteAccessibilityParent;
    NSMutableArray *_accessoryAccessibilityChildren;
    unsigned int _remoteConnectionID;
    NSString *_windowRightsToken;
    NSResponder *_suspendedFirstResponder;
    unsigned int _setViewCount;
    unsigned long long _styleMask;
    NSColor *_fontSmoothingBackgroundColor;
    struct CGSRegionObject *_windowResizingRegion;
}

+ (BOOL)allowSetObjectForKey:(id)arg1 bridge:(id)arg2 bridgePhase:(unsigned char)arg3 withReply:(CDUnknownBlockType)arg4;
+ (BOOL)haveStolenKeyFocus;
+ (id)_findFirstKeyViewInDirection:(unsigned long long)arg1 forKeyLoopGroupingView:(id)arg2;
+ (void)lostKeyFocus;
+ (void)windowDying:(id)arg1;
+ (id)serviceMarshalForWindow:(id)arg1;
+ (id)serviceMarshalForKeyForwarding;
+ (id)serviceMarshalForModalSession;
@property(retain) NSMutableArray *accessoryAccessibilityChildren; // @synthesize accessoryAccessibilityChildren=_accessoryAccessibilityChildren;
@property(retain) NSAccessibilityRemoteUIElement *remoteAccessibilityParent; // @synthesize remoteAccessibilityParent=_remoteAccessibilityParent;
@property unsigned char bridgePhase; // @synthesize bridgePhase=_bridgePhase;
@property(retain) NSViewService *service; // @synthesize service=_service;
- (void)applicationHideUnhide:(unsigned long long)arg1;
- (void)applicationHideUnhideMainThread:(unsigned long long)arg1;
- (void)accessibilityTokenForFocusedUIElement:(CDUnknownBlockType)arg1;
- (id)accessibilityTokenForFocusedUIElement;
- (BOOL)eventResizingRegionContainsPoint:(struct CGPoint)arg1;
- (void)ensureWindowEventShape;
- (void)retreatToConfigPhase;
- (void)setFontSmoothingBackgroundColor:(id)arg1;
- (void)setFontSmoothingBackgroundColorIfNeeded:(id)arg1;
- (void)setFontSmoothingBackgroundColorIfNeeded;
- (void)windowReceivedLeftMouseDown:(id)arg1;
- (void)discloseAccessoryView:(BOOL)arg1 withOffset:(struct CGPoint)arg2 andAnimationState:(int)arg3 andDuration:(double)arg4;
- (BOOL)forwardKeyEventFromAccessoryView:(id)arg1;
- (void)orderOutChildWindows:(CDUnknownBlockType)arg1;
- (int)orderOutChildWindows;
- (void)remoteWindowReceivedMouseEventType:(unsigned long long)arg1;
- (void)remoteWindowReceivedEventType:(unsigned long long)arg1;
- (void)addWindow:(unsigned int)arg1 toOrderingGroup:(unsigned int)arg2 op:(int)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)hierarchyDidChangeInView:(id)arg1;
- (void)endRemoteModalSession:(id)arg1;
- (void)beginRemoteModalSession:(id)arg1 title:(id)arg2 size:(struct CGSize)arg3 styleMask:(unsigned long long)arg4 serviceTrustsRemoteKeyEvents:(BOOL)arg5 withReply:(CDUnknownBlockType)arg6;
- (void)accessoryViewOriginMayHaveChanged:(struct CGPoint)arg1;
- (void)serviceAccessoryViewBecameFirstResponder:(BOOL)arg1;
- (void)setAccessoryViewSize:(struct CGSize)arg1 withReply:(CDUnknownBlockType)arg2;
- (BOOL)accessoryViewCanBecomeKeyView;
- (void)setRemoteAccessoryViewCanBecomeKeyView:(BOOL)arg1;
- (void)setRemoteAccessoryViewCanBecomeKeyViewMainThread:(BOOL)arg1;
- (void)forgetAccessoryView;
- (void)disableScreenUpdates;
- (void)enableScreenUpdates:(CDUnknownBlockType)arg1;
- (void)updateAccessoryViewAccessibility:(id)arg1 enhancedUserInterface:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (id)updateAccessoryViewAccessibility:(id)arg1 enhancedUserInterface:(id)arg2;
- (void)exchangeAccessibilityTokens:(id)arg1 enhancedUserInterface:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (id)exchangeAccessibilityTokens:(id)arg1 enhancedUserInterface:(id)arg2;
- (void)setEnhancedUserInterfaceAttribute:(id)arg1;
- (void)setAccessibilityParent:(id)arg1;
- (void)validateAction:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)performAction:(id)arg1 forTarget:(id)arg2;
- (CDStruct_b2dc443c)findTargetAndAction:(id)arg1;
- (BOOL)validateTargetAndAction:(const CDStruct_b2dc443c *)arg1 validateMenuItem:(CDStruct_e99345e9 *)arg2 validateUserInterfaceItem:(CDStruct_e99345e9 *)arg3;
- (id)fakeMenuItemForTarget:(id)arg1 withAction:(SEL)arg2;
- (void)setServiceObject:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)setServiceObjectXPCThread:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)advanceToRunPhase:(CDUnknownBlockType)arg1;
- (BOOL)advanceToRunPhase;
- (void)registerBridgeKey:(id)arg1 defaultObject:(id)arg2 owner:(unsigned char)arg3;
@property(readonly) NSViewBridge *bridge; // @synthesize bridge=_bridge;
- (CDStruct_6ad76789)auditToken;
- (int)processIdentifier;
- (void)setRemoteObject:(id)arg1 forKey:(id)arg2;
- (void)beginRemoteSheet:(id)arg1 modalForWindow:(id)arg2 size:(struct CGSize)arg3 isCritical:(BOOL)arg4 styleMask:(unsigned long long)arg5 withReply:(CDUnknownBlockType)arg6;
- (void)orderWindow:(id)arg1 mode:(long long)arg2 relativeTo:(long long)arg3;
- (void)handleEventFromRemote:(id)arg1 eventOwner:(unsigned int)arg2;
- (void)initWithSize:(struct CGSize)arg1 subclassName:(id)arg2 windowRightsToken:(id)arg3 windowRightsRecipient:(unsigned int)arg4 rendezvousWindowIdentifier:(id)arg5 trustServiceKeyEvents:(BOOL)arg6 withReply:(CDUnknownBlockType)arg7;
- (id)initWithSize:(struct CGSize)arg1 subclassName:(id)arg2 rendezvousWindowIdentifier:(id)arg3 replyData:(CDStruct_396fbe4b *)arg4;
- (void)didSetView;
- (void)prepareWindow:(id)arg1;
@property BOOL mayBecomeKey;
- (void)remoteViewResignedFirstResponderInActiveApp:(BOOL)arg1 inFavorOfAccessoryView:(BOOL)arg2;
- (void)remoteViewResignedFirstResponderMainThreadInActiveApp:(BOOL)arg1 inFavorOfAccessoryView:(BOOL)arg2;
- (void)remoteViewBecameFirstResponder:(unsigned long long)arg1 ignoreDirection:(BOOL)arg2 forWindowWithKey:(BOOL)arg3 inActiveApp:(BOOL)arg4;
- (void)remoteViewBecameFirstResponder:(unsigned long long)arg1 forWindowWithKey:(BOOL)arg2 inActiveApp:(BOOL)arg3;
- (void)setFirstResponderForRemoteView:(unsigned long long)arg1;
- (BOOL)firstResponderIsAccessoryView:(id)arg1;
- (void)remoteWindowChangedEdgeResizingRects:(id)arg1;
- (void)remoteWindowResignedKeyInActiveApp:(BOOL)arg1;
- (void)remoteWindowBecameKeyInActiveApp:(BOOL)arg1;
- (void)remoteViewDidMoveToWindowWithKey:(BOOL)arg1 inActiveApp:(BOOL)arg2;
- (void)remoteWindowChangedEdgeResizingRectsMainThread:(id)arg1;
- (void)remoteViewHasKey:(BOOL)arg1 inActiveApp:(BOOL)arg2;
- (void)remoteWindowBecameKeyMainThread:(BOOL)arg1;
- (void)remoteWindowResignedKeyMainThread:(BOOL)arg1;
- (void)syncServiceWindow;
- (void)remoteViewDidEndLiveResizeWithReply:(CDUnknownBlockType)arg1;
- (void)remoteViewWillStartLiveResizeWithReply:(CDUnknownBlockType)arg1;
- (void)remoteViewGeometryDidChange:(struct CGSize)arg1 withReply:(CDUnknownBlockType)arg2;
- (struct CGPoint)remoteViewGeometryDidChangeMainThread:(struct CGSize)arg1;
- (struct CGPoint)remoteViewGeometryDidChangeInProgress:(struct CGSize)arg1;
- (void)willBecomeAssociatedWithRemoteWindow:(BOOL)arg1 atLevel:(long long)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)didBecomeAssociatedWithRemoteWindow:(BOOL)arg1 inActiveApp:(BOOL)arg2;
- (void)willBecomeAssociatedWithRemoteWindowMainThread:(BOOL)arg1 atLevel:(long long)arg2;
- (void)didBecomeAssociatedWithRemoteWindowMainThread:(BOOL)arg1 inActiveApp:(BOOL)arg2;
- (void)orderingWindow:(CDUnknownBlockType)arg1;
- (void)becomeKeyAndActivate;
- (void)pushFakeClickForWindow:(id)arg1;
- (void)resignKeyAndDeactivate:(BOOL)arg1;
- (void)releaseKeyFocus:(const char *)arg1;
- (void)stealKeyFocus:(const char *)arg1;
- (void)lostKeyFocus;
- (BOOL)stoleKeyFocus;
- (void)serviceWindowDidResignKey:(id)arg1;
- (void)serviceWindowDidBecomeKey:(id)arg1;
- (void)serviceWindowDidResize:(id)arg1;
- (void)maintainNotificationsForWindow:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeValueForWindow:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeValueForContentMaxSize:(id)arg1;
- (void)observeValueForContentMinSize:(id)arg1;
- (void)observeValueForAccessoryView:(id)arg1;
- (void)observeValueForContentView:(id)arg1;
- (id)accessibilityChildTokens;
- (void)observeValueForFirstResponder:(id)arg1;
- (BOOL)responder:(id)arg1 isFieldEditorFor:(id)arg2;
- (void)informRemoteOfChangeToFirstResponder:(id)arg1 forWindow:(id)arg2 inDirection:(unsigned long long)arg3;
- (void)observeValueForInitialFirstResponder:(id)arg1;
- (void)sendEventUpResponderChains:(id)arg1;
- (BOOL)hasPanel;
- (id)window;
- (void)sendEventUpRemoteResponderChain:(id)arg1;
- (void)handleEventFromService:(id)arg1 eventOwner:(unsigned int)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)serviceWindowWouldActivate;
- (void)setStyleMask:(unsigned long long)arg1;
- (id)orderedDrawerAndWindowKeyLoopGroupingViews:(id)arg1;
- (BOOL)canBecomeKeyView;
- (id)remoteViewMarshal:(const char *)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
- (id)remoteViewMarshal:(const char *)arg1;
@property(readonly) BOOL isAssociatedWithRemoteWindow;
- (id)initWithConnection:(id)arg1;
- (void)invalidateAndReleaseConnectionOnMainThread:(BOOL)arg1 caller:(const char *)arg2;
- (oneway void)release;
- (void)invalidate:(BOOL)arg1;
- (void)invalidate;
- (void)bifurcateWindowOrderingGroups:(id)arg1;
- (void)invalidateAccessoryView;
- (void)invalidateWindowRights;
- (void)assertPosessionOfOwnerRight:(unsigned int)arg1;
- (void)resignFirstResponderIfNecessary;
@property(readonly) BOOL invalid;
- (int)grantWindowRightsToRemote:(int)arg1 reserving:(int)arg2;
- (id)semaphoreForWindowRights;
- (id)semaphoreForViewBridgePrivateMode;
- (int)startWindowRightsGrant:(int)arg1 reserving:(int)arg2;
- (void)dealloc;

@end
