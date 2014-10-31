//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextFieldDelegate.h"

@class NSEvent, UnifiedField, WebBookmark;

@protocol UnifiedFieldDelegate <NSTextFieldDelegate>
- (void)unifiedFieldURLDropped:(UnifiedField *)arg1;
- (WebBookmark *)bookmarkToDragFromSiteIconInUnifiedField:(UnifiedField *)arg1;
- (BOOL)unifiedField:(UnifiedField *)arg1 trackSearchButtonForEvent:(NSEvent *)arg2;
- (void)unifiedField:(UnifiedField *)arg1 mouseUpInSecurityPill:(NSEvent *)arg2;
- (void)unifiedField:(UnifiedField *)arg1 mouseUpInStopReloadButton:(NSEvent *)arg2;
- (void)unifiedField:(UnifiedField *)arg1 mouseUpInPrivateBrowsingButton:(NSEvent *)arg2;
- (void)unifiedFieldPerformSecurityPillAction:(UnifiedField *)arg1;
- (void)unifiedFieldPerformPrivateBrowsingButtonAction:(UnifiedField *)arg1;
- (void)unifiedFieldPerformStopReloadButtonAction:(UnifiedField *)arg1;
- (BOOL)unifiedFieldShouldSelectAllAfterMouseDown:(UnifiedField *)arg1;
- (void)unifiedFieldMarkedTextDidChange:(UnifiedField *)arg1;
- (void)unifiedFieldAutocompleteSelectionDidChange:(UnifiedField *)arg1;
- (void)unifiedFieldBecameFirstResponder:(UnifiedField *)arg1;
@end
