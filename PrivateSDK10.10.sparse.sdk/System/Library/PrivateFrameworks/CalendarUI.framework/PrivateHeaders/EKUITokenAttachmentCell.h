/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTokenAttachmentCell.h"

@class EKUITokenField, NSAttributedString, NSColor;

@interface EKUITokenAttachmentCell : NSTokenAttachmentCell
{
    float _attributedStringWidth;
    EKUITokenField *_tokenField;
    NSAttributedString *_cachedAttributedString;
    long long _cachedBackgroundStyle;
    NSColor *_cachedTextColor;
    struct CGSize _cachedCellSize;
    struct CGRect _cachedCellFrame;
    struct CGRect _boundsForCellSize;
}

+ (id)displayAttributedStringForDisplayString:(id)arg1 withImage:(id)arg2;
@property float attributedStringWidth; // @synthesize attributedStringWidth=_attributedStringWidth;
@property struct CGRect boundsForCellSize; // @synthesize boundsForCellSize=_boundsForCellSize;
@property struct CGSize cachedCellSize; // @synthesize cachedCellSize=_cachedCellSize;
@property(retain) NSColor *cachedTextColor; // @synthesize cachedTextColor=_cachedTextColor;
@property long long cachedBackgroundStyle; // @synthesize cachedBackgroundStyle=_cachedBackgroundStyle;
@property(retain) NSAttributedString *cachedAttributedString; // @synthesize cachedAttributedString=_cachedAttributedString;
@property struct CGRect cachedCellFrame; // @synthesize cachedCellFrame=_cachedCellFrame;
@property(retain) EKUITokenField *tokenField; // @synthesize tokenField=_tokenField;
- (void).cxx_destruct;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 atCharacterIndex:(unsigned long long)arg4 untilMouseUp:(BOOL)arg5;
- (void)drawTokenWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)shouldShowToken;
- (BOOL)isSelectedToken;
- (struct CGRect)pullDownRectForBounds:(struct CGRect)arg1;
- (id)pullDownImage;
- (id)tokenBackgroundColor;
- (id)tokenForegroundColor;
- (id)textColor;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)cellFrameForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)_generateAttributedStringValue;
- (id)attributedStringValue;
- (void)setAttributedStringValue:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)markAsNeedsUpdate;
- (void)resetCachedSizeAttributes;
- (BOOL)isCompletedToken;
- (id)stringForRepresentedObject;
- (id)imageForRepresentedObject;
- (id)initCellForTokenField:(id)arg1;

@end
