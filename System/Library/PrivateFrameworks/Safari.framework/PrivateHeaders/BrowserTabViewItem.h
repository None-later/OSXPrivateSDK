//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTabViewItem.h"

@class AttachedTabButton, BrowserWKView, ContinuousReadingListViewController, NSSet, NSString, TabBarView;

__attribute__((visibility("hidden")))
@interface BrowserTabViewItem : NSTabViewItem
{
    TabBarView *_tabBarView;
    AttachedTabButton *_button;
    NSString *_urlFromScript;
    BrowserWKView *_wkView;
    struct RefPtr<Safari::BrowserTab> m_browserTab;
    BOOL _firedOpenEvent;
    BOOL _firedCloseEvent;
    ContinuousReadingListViewController *_continuousReadingListViewController;
}

@property(nonatomic) TabBarView *tabBarView; // @synthesize tabBarView=_tabBarView;
@property(readonly, nonatomic) ContinuousReadingListViewController *continuousReadingListViewController; // @synthesize continuousReadingListViewController=_continuousReadingListViewController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)cachedWKViewInContinuousMode;
- (void)exitContinuousMode;
- (BOOL)continuousPageViewIsHandlingPageTransition;
- (BOOL)isInContinuousMode;
- (id)currentContinuousReadingListPageItem;
- (void)loadContinuousReadingListPageItem:(id)arg1;
- (struct BrowserTab *)browserTab;
- (id)handleSearchTheWebCommand:(id)arg1;
- (id)handleEmailContentsCommand:(id)arg1;
- (id)handleDoJavaScriptCommand:(id)arg1;
- (id)text;
- (id)source;
- (void)setURLString:(id)arg1;
- (id)URLString;
- (void)rememberCurrentURLString;
- (BOOL)isVisible;
- (unsigned int)orderedIndex;
- (id)title;
- (void)handleCloseScriptCommand:(id)arg1;
- (id)objectSpecifier;
- (void)updateLabelSoon;
- (void)updateLabelNow;
- (id)wkView;
- (struct BrowserContentViewController *)browserContentViewController;
- (BOOL)canBeClosed;
- (id)button;
- (void)setButton:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setView:(id)arg1;
- (void)dealloc;
- (id)initWithTabBarView:(id)arg1 withBrowserTab:(struct BrowserTab *)arg2 andIdentifier:(unsigned long long)arg3;
@property(readonly, nonatomic) NSSet *allWKViews;

@end
