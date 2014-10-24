//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DotScrollerDelegate.h"
#import "ProgressSender.h"
#import "SnappableScrollViewDelegate.h"
#import "ViewSpreaderDelegate.h"

@class BrowserWindowControllerMac, DotScroller, NSMutableArray, NSTextField, SnappableScrollView, TabLineupView, ViewSpreader;

__attribute__((visibility("hidden")))
@interface TabLineupViewController : NSObject <DotScrollerDelegate, ProgressSender, SnappableScrollViewDelegate, ViewSpreaderDelegate>
{
    BrowserWindowControllerMac *_windowController;
    TabLineupView *_tabLineupView;
    ViewSpreader *_tabStripView;
    SnappableScrollView *_scrollView;
    DotScroller *_dotScroller;
    NSTextField *_titleField;
    NSTextField *_urlField;
    unsigned long long _currentIndex;
    unsigned long long _indexBeingScrolledTo;
    BOOL _isTrackingPinch;
    BOOL _tabsWereFullSizeBeforePinch;
    double _pinchProgress;
    double _fractionCompletedToShowMiscellaneousControls;
    BOOL _zoomingInProgress;
    BOOL _addRemoveTabAnimationInProgress;
    int _currentEntryOrExitAnimationType;
    int _carouselWrapDirection;
    double _carouselWrapTotalScrollDistance;
    double _carouselWrapTotalAnimationDuration;
    CDUnknownBlockType _carouselWrapCompletionBlock;
    NSMutableArray *_tabLineupItemControllers;
    struct CGSize _fullyScaledTabItemViewSize;
    double _fullyScaledTabButtonWidth;
}

@property(readonly, nonatomic) unsigned long long centeredTabIndex; // @synthesize centeredTabIndex=_currentIndex;
@property(readonly, nonatomic) double fullyScaledTabButtonWidth; // @synthesize fullyScaledTabButtonWidth=_fullyScaledTabButtonWidth;
@property(readonly, nonatomic) struct CGSize fullyScaledTabItemViewSize; // @synthesize fullyScaledTabItemViewSize=_fullyScaledTabItemViewSize;
@property(nonatomic) BrowserWindowControllerMac *windowController; // @synthesize windowController=_windowController;
- (id).cxx_construct;
- (double)fractionCompleted;
- (void)viewSpreaderStackAnimationDidBegin:(id)arg1;
- (void)viewSpreaderSpreadOutAnimationDidBegin:(id)arg1;
- (void)viewSpreaderSpreadOutAnimationDidFinish:(id)arg1;
- (id)viewSpreader:(id)arg1 didReorderSpreadableViews:(id)arg2;
- (void)viewSpreader:(id)arg1 stackAnimationDidFinishWithTopmostSpreadableView:(id)arg2;
- (BOOL)snappableScrollView:(id)arg1 shouldHandleScrollEvent:(id)arg2;
- (void)targetedScrollAnimationDidEndInScrollView:(id)arg1;
- (void)targetedScrollAnimationWillStartInScrollView:(id)arg1;
- (double)snappableScrollView:(id)arg1 adjustedTargetScrollValue:(double)arg2 totalScrollDelta:(double)arg3 isQuickSwipe:(BOOL)arg4;
- (void)dotScroller:(id)arg1 didClickDotAtIndex:(unsigned long long)arg2;
- (void)layOutTabLineupViewForDiscreteResize;
- (void)layOutTabLineupViewDuringLiveResize;
- (void)tabLineupViewDidEndLiveResize;
- (void)tabLineupViewWillEndLiveResize;
- (void)tabLineupViewWillStartLiveResize;
- (BOOL)shouldResizeTabContentViewSubviews;
- (BOOL)tabLineupViewWillUpdateTrackingAreas;
- (BOOL)canAddOrRemoveTabs;
- (void)animateAddTab:(id)arg1;
- (void)animateRemoveTabAtIndex:(unsigned long long)arg1;
- (void)tryToCloseTabItem:(id)arg1;
- (void)tabItemWasClicked:(id)arg1;
- (struct CGRect)frameForCenteredTabContentViewWhenFullyScaledInWindowCoordinates;
- (struct CGRect)frameForCenteredTabContentViewWhenStackedInWindowCoordinates;
- (id)centeredTabContentView;
- (BOOL)isTabScrollInProgress;
@property(readonly, nonatomic, getter=isAnimatingTabStripEntryOrExit) BOOL animatingTabStripEntryOrExit;
- (void)centerNextTabWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)centerNextTab;
- (void)centerPreviousTabWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)centerPreviousTab;
- (void)selectNextTab;
- (void)selectPreviousTab;
- (void)selectTabAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long tabCount;
- (void)hideTabStrip;
- (void)beginPinch;
- (id)pinchEventMonitorHandler:(id)arg1;
- (void)setUpAndShowTabStrip;
- (void)addSubviewsToTabLineupView;
@property(readonly, nonatomic) BOOL shouldOnlyResizeCenterTabDuringAnimation;
@property(readonly, nonatomic) TabLineupView *view;
- (void)dealloc;
- (id)init;
- (void)_performSelector:(SEL)arg1 onProgressReceiverViewAndSubviewsOfView:(id)arg2;
- (void)_performSelectorOnProgressReceivers:(SEL)arg1;
- (void)_layOutTabAtIndex:(unsigned long long)arg1 relativeToTabAtIndex:(unsigned long long)arg2 relativeTabFrameWhenSpreadOut:(struct CGRect)arg3;
- (void)_layOutDotScrollerRelativeToTabFrame:(struct CGRect)arg1;
- (void)_layOutTitleAndURLRelativeToTabFrame:(struct CGRect)arg1;
- (void)_finishCarouselWrapByCyclingViewsByNumberOfSteps:(unsigned long long)arg1;
- (void)_startThirdCarouselWrapAnimationStage;
- (void)_startSecondCarouselWrapAnimationStage;
- (void)_startFirstCarouselWrapAnimationStage;
- (void)_centerTabByCarouselWrappingWithDirection:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_centerLastTabByCarouselWrappingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_centerFirstTabByCarouselWrappingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_getThirdCarouselWrapAnimationStageStartScrollPoint:(struct CGPoint *)arg1 endScrollPoint:(struct CGPoint *)arg2 timingFunction:(id *)arg3 duration:(double *)arg4;
- (void)_getSecondCarouselWrapAnimationStageStartScrollPoint:(struct CGPoint *)arg1 endScrollPoint:(struct CGPoint *)arg2 timingFunction:(id *)arg3 duration:(double *)arg4;
- (void)_getFirstCarouselWrapAnimationStageStartScrollPoint:(struct CGPoint *)arg1 endScrollPoint:(struct CGPoint *)arg2 timingFunction:(id *)arg3 duration:(double *)arg4;
- (void)_setUpCarouselWrapStateWithDirection:(int)arg1;
- (unsigned long long)_numberOfAnimationStagesForCarouselWrap;
- (BOOL)_isCarouselWrapTransitioningFromLastToFirstTab;
- (BOOL)_isCarouselWrapping;
- (void)_restoreTabStripFrameAfterCarouselWrap;
- (void)_updateTabStripFrameBeforeCarouselWrap;
- (double)_horizontalSpacingBetweenLastAndFirstTabForCarouselWrapping;
- (BOOL)_areTabsBeingResizedOrScaled;
- (void)_tabRemovalAnimationDidFinish;
- (void)_updateDotScrollerFrameAndCount;
- (void)_updateTabStripWidth;
- (void)_updateSpreadableViewFrameProperties;
- (void)_centerAndSelectTabAtIndex:(unsigned long long)arg1;
- (void)_cleanUpAfterTabViewEntryAnimationFinished;
- (void)_showTabStripWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_setUpAndShowTabStripWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_hideOffScreenTabs:(int)arg1;
- (void)_setUpView;
- (void)_prepareToZoomToCenterTab;
- (void)_updateInitialTabButtonFrames;
- (void)_hideTabStripWithAnimation:(BOOL)arg1;
- (void)_endPinchWithAnimation:(BOOL)arg1;
- (void)_updatePinchProgressWithMagnification:(double)arg1;
- (void)_updateMiscellaneousControlsDuringPinch;
- (double)_miscellaneousControlsOpacity;
- (void)_fadeOutMiscellaneousControlsIfNeeded;
- (void)_fadeInMiscellaneousControlsIfNeeded;
- (void)_animateMiscellaneousControlsOpacity:(double)arg1;
- (void)_updateTitleAndURLBasedOnCurrentTab;
- (unsigned long long)_tabIndexAfterIndex:(unsigned long long)arg1 willWrap:(char *)arg2;
- (unsigned long long)_tabIndexBeforeIndex:(unsigned long long)arg1 willWrap:(char *)arg2;
- (struct _NSRange)_rangeOfVisibleTabs;
- (unsigned long long)_currentIndexOrIndexBeingScrolledTo;
- (void)_clipViewBoundsDidChangeNotification:(id)arg1;
- (unsigned long long)_tabIndexAtPointX:(double)arg1;
- (void)_centerTabAtIndex:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (double)_horizontalSpacingBetweenFullySpreadOutCenteredTabAndEdge;
- (double)_scrollXToCenterTabAtIndex:(unsigned long long)arg1;
- (struct CGRect)_initialTabItemFrame;
- (id)_tabHatFramesAdjustedToVisuallyLineUpWithTabBarTabButtonFrames:(id)arg1;
- (struct CGPoint)_initialTabItemScrollPosition;
- (struct CGSize)_tabItemFrameSizeWhenStacked;
- (struct CGRect)_centeredTabItemFrameWhenStacked;

@end
