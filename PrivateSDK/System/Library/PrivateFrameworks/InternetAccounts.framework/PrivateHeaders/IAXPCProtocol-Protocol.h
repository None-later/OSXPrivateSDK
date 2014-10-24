//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol IAXPCProtocol
- (void)googleTokenForEmailAddress:(NSString *)arg1 shouldCreateToken:(BOOL)arg2 reply:(void (^)(NSString *))arg3;
- (void)writeDiagnostics;
- (void)dumpDataPluginNotificationHistory;
- (void)createAccount:(NSDictionary *)arg1 pluginID:(NSString *)arg2 provider:(NSString *)arg3 token:(NSString *)arg4 reply:(void (^)(NSError *, NSString *, NSString *))arg5;
- (void)copyContactsRecordsAndDeleteAccountUID:(NSString *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)deactivateAccountUID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)activateAccountUID:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (void)updateAccountWithUID:(NSString *)arg1 withSettings:(NSDictionary *)arg2 reply:(void (^)(NSError *))arg3;
- (void)descriptionForAccount:(NSDictionary *)arg1 reply:(void (^)(NSString *))arg2;
- (void)resetCollectionWithReply:(void (^)(NSError *))arg1;
- (void)cacheAccountsWithReply:(void (^)(NSError *))arg1;
- (void)removeAccountWithUID:(NSString *)arg1 deleteFromDataSource:(BOOL)arg2 reply:(void (^)(NSError *))arg3;
- (void)addAccount:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)accountsWithLoginName:(NSString *)arg1 service:(NSString *)arg2 provider:(NSString *)arg3 attributes:(NSDictionary *)arg4 reply:(void (^)(NSArray *))arg5;
- (void)accountWithUID:(NSString *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)topLevelAccountsForProvider:(NSString *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)cachedAccountsWithReply:(void (^)(NSArray *))arg1;
- (void)appAccountsWithReply:(void (^)(NSArray *, NSArray *, NSDictionary *))arg1;
- (void)allAccountsWithReply:(void (^)(NSArray *, NSArray *, NSDictionary *))arg1;
@end
