//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/PreferencesModule.h>

@class DefaultWebAppPopUpController, NSButton, NSPopUpButton, NSTextField;

__attribute__((visibility("hidden")))
@interface GeneralPreferences : PreferencesModule
{
    NSTextField *homePageField;
    NSTextField *defaultSearchEngineLabel;
    NSTextField *defaultBrowserLabel;
    NSButton *useCurrentPageButton;
    NSButton *autoOpenDownloadsCheckbox;
    NSPopUpButton *defaultBrowserPopUp;
    NSPopUpButton *defaultSearchEnginePopUp;
    NSPopUpButton *launchBehaviorPopUp;
    NSTextField *launchBehaviorLabel;
    NSPopUpButton *newWindowBehaviorPopUp;
    NSPopUpButton *newTabBehaviorPopUp;
    NSPopUpButton *downloadLocationPopUp;
    NSPopUpButton *downloadsClearingPolicyPopUp;
    NSPopUpButton *numberOfTopSitesPopUp;
    NSPopUpButton *historyAgeLimitPopUp;
    NSTextField *historyAgeLimitLabel;
    DefaultWebAppPopUpController *_defaultBrowserController;
    BOOL _defaultBrowserManaged;
    BOOL _confirmingHomePageURL;
    double _forcedWindowHeight;
    struct OwnPtr<Safari::ObjCNotifier> m_notifier;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)toggleAutoOpenDownloads:(id)arg1;
- (void)takeNewWindowBehaviorFrom:(id)arg1;
- (void)takeNewTabBehaviorFrom:(id)arg1;
- (void)takeLaunchBehaviorFrom:(id)arg1;
- (void)takeHomePageFrom:(id)arg1;
- (void)takeHistoryAgeLimitFrom:(id)arg1;
- (void)takeDefaultSearchEngineFrom:(id)arg1;
- (void)takeDownloadsClearingPolicyFrom:(id)arg1;
- (void)takeDefaultBrowserFrom:(id)arg1;
- (void)takeNumberOfTopSitesFrom:(id)arg1;
- (void)setHomePageToCurrentPage:(id)arg1;
- (void)bookmarkChooserSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)bookmarkChooser:(id)arg1 shouldEnableCollection:(id)arg2;
- (void)windowDidResize:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (id)helpAnchor;
- (void)moduleWillBeRemoved;
- (void)moduleWasInstalled;
- (BOOL)isResizable;
- (void)initializeFromDefaults;
- (void)dealloc;
- (void)chooseFolderForOpenWithTabs:(id)arg1;
- (void)awakeFromNib;
- (id)imageForPreferenceNamed:(id)arg1;
- (void)_updateUseCurrentPageButton;
- (void)_updateNewWindowTabsMenuItem;
- (void)_updateNewWindowBehaviorViews;
- (void)_updateNewTabBehaviorViews;
- (void)_updateLaunchBehaviorViews;
- (void)_updateHomePageViews;
- (void)_updateHistoryAgeLimitPopUp;
- (void)_updateNumberOfTopSitesPopUp;
- (void)_updateDownloadLocationMenu;
- (void)_updateDefaultSearchEngineMenu;
- (void)_updateDefaultBrowserMenu;
- (void)_TALRestoresWindowsOnAppLaunchSettingMightHaveChanged:(id)arg1;
- (void)_setUpSearchEngineViews;
- (void)_readManagedPreferences;
- (void)_parentalControlsDidChange;
- (void)_insertTopSitesBehaviorIntoPopUp:(id)arg1;
- (void)_searchHomePageConfirmationDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_confirmSetHomePageToURLString:(id)arg1;
- (void)_chooseMultiplePages:(id)arg1;
- (void)_chooseDownloadFolderFromFileBrowser:(id)arg1;
- (void)_choseDownloadFolderFromPanel:(id)arg1 returnCode:(long long)arg2;
- (BOOL)_canSetHomePageToCurrentPage;

@end
