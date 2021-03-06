/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUIMac/GKPlayerDetailHeaderView.h>

@class GKHorizontalBubbleControlsView, GKTextBubbleControl;

@interface GKNonFriendHeaderView : GKPlayerDetailHeaderView
{
    BOOL _didFloatInBubbles;
    GKTextBubbleControl *_sendRequestBubble;
    GKHorizontalBubbleControlsView *_bubbleView;
}

@property(nonatomic) BOOL didFloatInBubbles; // @synthesize didFloatInBubbles=_didFloatInBubbles;
@property GKHorizontalBubbleControlsView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) GKTextBubbleControl *sendRequestBubble; // @synthesize sendRequestBubble=_sendRequestBubble;
- (double)preferredHeight;
- (void)layout;
- (void)floatInBubbles;
- (void)updatePlayerStatus;
- (struct CGSize)intrinsicContentSize;
- (void)sendBubbleTapped:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

