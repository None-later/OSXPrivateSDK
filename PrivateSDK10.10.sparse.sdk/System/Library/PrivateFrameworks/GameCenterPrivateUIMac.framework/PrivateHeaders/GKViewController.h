/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UXViewController.h"

@class GKColorPalette;

@interface GKViewController : UXViewController
{
    BOOL _shouldUpdateContentOnlyWhenAuthenticated;
    GKViewController *_rootViewController;
    GKColorPalette *_colorPalette;
    long long _gkFocusBubbleType;
}

@property(nonatomic) long long gkFocusBubbleType; // @synthesize gkFocusBubbleType=_gkFocusBubbleType;
@property(nonatomic) BOOL shouldUpdateContentOnlyWhenAuthenticated; // @synthesize shouldUpdateContentOnlyWhenAuthenticated=_shouldUpdateContentOnlyWhenAuthenticated;
@property(retain, nonatomic) GKColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
@property(retain, nonatomic) GKViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)popToRootViewControllerAnimated:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)displayUsingSplitNavigationBar;
- (void)loadView;
- (void)dealloc;

@end
