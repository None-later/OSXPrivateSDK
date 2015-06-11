/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTextFieldCell.h"

// Not exported
@interface LayoutMirroringTextFieldCell : NSTextFieldCell
{
    NSTextFieldCell *_mirroredCell;
}

@property(retain, nonatomic) NSTextFieldCell *layoutMirroredCell; // @synthesize layoutMirroredCell=_mirroredCell;
- (void).cxx_destruct;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;

@end
