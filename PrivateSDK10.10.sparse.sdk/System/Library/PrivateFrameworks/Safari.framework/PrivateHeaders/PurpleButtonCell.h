/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSButtonCell.h"

// Not exported
@interface PurpleButtonCell : NSButtonCell
{
}

+ (id)updateCellForButton:(id)arg1;
- (id)_textWithShadowAttributes;
- (BOOL)_isPulsing;
- (BOOL)_getButtonImageLeftCap:(id *)arg1 rightCap:(id *)arg2 fill:(id *)arg3 forPulsing:(BOOL)arg4;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (void)drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)attributedTitle;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;

@end

