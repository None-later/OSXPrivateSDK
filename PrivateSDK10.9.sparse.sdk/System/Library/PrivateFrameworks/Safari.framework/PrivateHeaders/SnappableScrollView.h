//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScrollView.h"

__attribute__((visibility("hidden")))
@interface SnappableScrollView : NSScrollView
{
    double _lastScrollEventTimestamp;
    double _beginScrollEventTimestamp;
    double _initialScrollValue;
    unsigned long long _velocityBufferIndex;
    BOOL _isVelocityBufferFull;
    double _scrollVelocityBuffer[3];
    BOOL _shouldDropMomentumScrollEventsInCurrentGesture;
    id <SnappableScrollViewDelegate> _delegate;
}

+ (double)defaultAnimationDurationForHorizontalScrollDistance:(double)arg1;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)animateScrollToPoint:(struct CGPoint)arg1 duration:(double)arg2 timingFunction:(id)arg3 animationContext:(id)arg4;
- (void)animateScrollToPoint:(struct CGPoint)arg1 duration:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)animateScrollToPoint:(struct CGPoint)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)scrollToPoint:(struct CGPoint)arg1;
- (void)scrollWheel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)defaultAnimationDurationForScrollToPoint:(struct CGPoint)arg1;
- (double)_scrollVelocityAtTimestamp:(double)arg1;
- (void)_trackScrollDelta:(double)arg1 atTimestamp:(double)arg2;
- (void)_resetVelocityBuffer;

@end
