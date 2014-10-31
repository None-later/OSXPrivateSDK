/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMenu, NSMenuItem, NSTextField, NSWindow;

@interface FRDebugMenuController : NSObject
{
    id _debugMenuItem;
    NSWindow *_gotoURLWindow;
    NSTextField *_gotoURLTextField;
    BOOL _gotoNibLoaded;
    BOOL _logXML;
    BOOL _logIncomingHeaders;
    BOOL _logOutgoingHeaders;
    BOOL _cacheBusterOn;
    BOOL _allowDevSigned;
    BOOL _alwaysSendGuid;
    BOOL _useFakeUpdatesPage;
    BOOL _fadeWhileLoading;
    BOOL _hidePreReleaseUpdates;
    NSMenuItem *_disableDebugLogItem;
    NSMenuItem *_enableDebugLog1Item;
    NSMenuItem *_enableDebugLog2Item;
    NSMenuItem *_enableDebugLog3Item;
    NSMenuItem *_enableDebugLog4Item;
    NSMenuItem *_toggleJavascriptLogItem;
    NSMenu *_debugLogLevel;
    NSMenuItem *_debugLogLevelItem;
    NSMenu *_suServerSelector;
    NSMenuItem *_suServerSelectorItem;
    NSMenuItem *_production;
    NSMenuItem *_validation;
    NSMenuItem *_stagedProduction;
    NSMenuItem *_stagedValidation;
}

+ (id)defaultController;
+ (void)initialize;
+ (BOOL)isDebugMenuEnabled;
+ (id)debugUserDefaultDictionary;
- (void).cxx_destruct;
- (void)goToURLWasEntered:(id)arg1;
- (void)dismissGoToURLWindow:(id)arg1;
- (void)awakeFromNib;
- (void)openGoToURLWindow:(id)arg1;
- (void)_saveLastGoToURL;
- (void)_loadLastGoToURL;
- (void)showFPSMonitor:(id)arg1;
- (void)testScrollPerformance:(id)arg1;
- (void)toggleJavascriptLogging:(id)arg1;
- (void)enableDebugLogLevel4:(id)arg1;
- (void)enableDebugLogLevel3:(id)arg1;
- (void)enableDebugLogLevel2:(id)arg1;
- (void)enableDebugLogLevel1:(id)arg1;
- (void)disableDebugLogging:(id)arg1;
- (void)setDebugLoggingLevel:(int)arg1;
- (void)_updateDebugLogMenuItems;
- (void)sendFirstBuyNotification:(id)arg1;
- (void)sendPushNotification:(id)arg1;
- (void)addViewSourceMenuItem;
- (void)addShowDebugPanelMenuItem;
- (void)resetFirenze:(id)arg1;
- (void)clearCookies:(id)arg1;
- (void)togglePreReleaseUpdates:(id)arg1;
- (void)kickOffUpateStaging:(id)arg1;
- (void)startScanForUpdates:(id)arg1;
- (void)_webKitAppModeAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)toggleFadeWhileLoading:(id)arg1;
- (void)toggleDevSigned:(id)arg1;
- (void)toggleGUID:(id)arg1;
- (void)toggleCacheBuster:(id)arg1;
- (void)toggleLogHeaders:(id)arg1;
- (void)toggleLogXML:(id)arg1;
- (void)showOSUpdatesPage:(id)arg1;
- (void)debugLoadAppleIDImageTestPage:(id)arg1;
- (void)loadGeniusTestPage:(id)arg1;
- (void)debugDownloadEventTestPage:(id)arg1;
- (void)debugLoadContextMenuTestPage:(id)arg1;
- (void)debugLoadLiveButtonTestPage:(id)arg1;
- (void)debugLoadCobraTestPage:(id)arg1;
- (void)debugLoadJSTestPage:(id)arg1;
- (void)showDebugPanel:(id)arg1;
- (void)showDownloadLocation:(id)arg1;
- (void)debugEditPlist:(id)arg1;
- (void)_toggleAppPreference:(id)arg1 newValue:(BOOL)arg2 menuItem:(id)arg3;
- (void)_togglePreference:(id)arg1 newValue:(BOOL)arg2 menuItem:(id)arg3;
- (id)debugMenuItem;
- (id)init;

@end
