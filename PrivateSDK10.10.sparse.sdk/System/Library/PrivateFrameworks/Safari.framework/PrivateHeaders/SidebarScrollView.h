/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/ScrollViewPlus.h>

@class SidebarPocketView;

// Not exported
@interface SidebarScrollView : ScrollViewPlus
{
    SidebarPocketView *_bottomPocketView;
    SidebarPocketView *_topPocketView;
    BOOL _wantsBottomPocket;
    BOOL _wantsTopPocket;
    id <SidebarScrollViewAccessibilityDelegate> _accessibilityDelegate;
}

@property(nonatomic) __weak id <SidebarScrollViewAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
@property(nonatomic) BOOL wantsTopPocket; // @synthesize wantsTopPocket=_wantsTopPocket;
@property(nonatomic) BOOL wantsBottomPocket; // @synthesize wantsBottomPocket=_wantsBottomPocket;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)_accessibilityElements:(id)arg1 withDelegateChildren:(id)arg2;
- (void)_updatePocketViews;
- (void)viewDidMoveToWindow;
- (void)reflectScrolledClipView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

