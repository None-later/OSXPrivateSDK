//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISStoreURLOperationDelegate.h"
#import "SSPushNotificationRequestDelegate.h"

@class NSData, NSMutableDictionary, SSPushNotificationRequest;

@interface CKPushNotificationManager : NSObject <SSPushNotificationRequestDelegate, ISStoreURLOperationDelegate>
{
    SSPushNotificationRequest *_pushNotificationRequest;
    NSMutableDictionary *_accountDictionary;
    NSData *_deviceToken;
    id _delegate;
    BOOL _requestedByUser;
    int _mediaTypeMask;
}

+ (BOOL)canStartAutodownloadForDSID:(id)arg1;
+ (id)sharedManager;
+ (void)fakeAutoDownloadPushFromDSID:(id)arg1;
+ (void)handleDidDeliverNotification:(id)arg1;
@property int mediaTypeMask; // @synthesize mediaTypeMask=_mediaTypeMask;
@property __weak id <CKPushNotificationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSData *deviceToken; // @synthesize deviceToken=_deviceToken;
- (void).cxx_destruct;
- (void)pushNotificationRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)pushNotificationRequestDidSucceed:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didDismissAlert:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didDeliverNotification:(id)arg2;
- (void)postFirstBuyNotification:(id)arg1;
- (void)_handleSendSuccessToDelegate:(id)arg1;
- (void)_handleSendErrorToDelegate:(id)arg1;
- (void)_handleRegistrationChanged:(id)arg1;
- (void)setMediaTypeMask:(int)arg1 forDSIDString:(id)arg2;
- (void)setMediaTypeMask:(int)arg1 forAccount:(id)arg2;
- (void)setRegistered:(BOOL)arg1 forDSIDString:(id)arg2;
- (void)setRegistered:(BOOL)arg1 forAccount:(id)arg2;
- (BOOL)isRegisteredForAccount:(id)arg1 andMask:(int)arg2;
- (BOOL)isRegisteredForAccount:(id)arg1;
- (BOOL)sendDeviceToken;
- (BOOL)sendRequestToUnregister;
- (BOOL)sendRequestToRegister;
- (BOOL)checkEnabledMediaTypes;
- (void)debugSendFirstBuyNotification;
- (void)debugSendPushNotification;
- (void)handleDidFailToRegisterForRemoteNotificationsWithError:(id)arg1;
- (void)handleDidRegisterForRemoteNotificationsWithDeviceToken:(id)arg1 withMessage:(long long)arg2;
- (BOOL)_stopRequestedByUser:(BOOL)arg1;
- (BOOL)_startRequestedByUser:(BOOL)arg1;
- (BOOL)stopAtSignOut;
- (BOOL)startAtSignIn;
- (BOOL)stop;
- (BOOL)registerPushToken;
- (BOOL)start;
- (void)_updateRegisteredDSIDsPreferences:(id)arg1 forDSID:(id)arg2;
- (BOOL)_setRegisteredDSIDsPreferences:(id)arg1;
- (id)_registeredDSIDsPreferences;
- (void)_postRegistrationChanged:(id)arg1 toMask:(int)arg2;
- (void)_postSuccessToDelegate;
- (void)_postErrorToDelegate:(id)arg1;
- (void)_sendChangedToDelegate;
- (void)_sendSuccessToDelegate;
- (void)_sendErrorToDelegate:(id)arg1;
- (BOOL)_sendRequestToRegister:(int)arg1;

@end
