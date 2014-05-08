//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMDaemonCore/IMDServiceSession.h>

@class IDSAccount, NSArray, NSString;

@interface IMDAppleServiceSession : IMDServiceSession
{
    NSString *_serviceName;
    NSString *_GUID;
}

@property(readonly, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
@property(readonly, nonatomic) NSString *serviceType;
@property(readonly, nonatomic) NSString *callerID;
- (void)clearCallerID;
- (id)certForURI:(id)arg1;
@property(readonly, nonatomic) NSString *callerURI;
- (long long)validationStatusForAlias:(id)arg1;
@property(readonly, nonatomic) NSArray *aliases;
@property(readonly, nonatomic) NSArray *vettedAliases;
- (void)reIdentify;
- (void)reregister;
- (void)activeDevicesUpdated;
- (void)refreshRegistration;
- (void)validateProfile;
- (void)deactivateAndPurgeIdentify;
- (void)unvalidateAliases:(id)arg1;
- (void)validateAliases:(id)arg1;
- (void)addAliases:(id)arg1;
- (void)removeAliases:(id)arg1;
- (id)_aliases;
- (id)_aliasStrings;
- (long long)_validationStatusForAlias:(id)arg1;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)passwordUpdated;
- (void)unregisterAccount;
- (void)registerAccount;
- (void)authenticateAccount;
- (void)logoutServiceSession;
- (void)loginServiceSession;
- (void)sessionWillBecomeInactive;
- (void)sessionDidBecomeActive;
- (void)_updateAccountStatusToUnregistered:(BOOL)arg1;
- (BOOL)_isDeviceRegistered;
@property(readonly, nonatomic) NSArray *registeredURIs;
@property(readonly, nonatomic) IDSAccount *idsAccount;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 service:(id)arg2;

@end
