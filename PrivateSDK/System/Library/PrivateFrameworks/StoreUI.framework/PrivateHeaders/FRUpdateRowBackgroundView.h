//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface FRUpdateRowBackgroundView : NSView
{
    BOOL _isFirstRow;
    BOOL _isLastRow;
    BOOL _isAlternateRow;
    BOOL _suppressEtching;
    BOOL _drawTopDropShadow;
    BOOL _drawOSUpdateSeparator;
}

+ (double)shadowPadding;
@property BOOL drawOSUpdateSeparator; // @synthesize drawOSUpdateSeparator=_drawOSUpdateSeparator;
@property BOOL drawTopDropShadow; // @synthesize drawTopDropShadow=_drawTopDropShadow;
@property BOOL suppressEtching; // @synthesize suppressEtching=_suppressEtching;
@property BOOL isAlternateRow; // @synthesize isAlternateRow=_isAlternateRow;
@property BOOL isLastRow; // @synthesize isLastRow=_isLastRow;
@property BOOL isFirstRow; // @synthesize isFirstRow=_isFirstRow;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawBackgroundInRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)awakeFromNib;

@end
