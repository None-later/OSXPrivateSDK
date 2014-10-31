/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarUI/EKUITokenAttachmentCell.h>

@interface EKUIAttendeeTokenAttachmentCell : EKUITokenAttachmentCell
{
    BOOL _isExpanded;
    BOOL _isConnected;
    BOOL _attendeeHasAddress;
}

@property BOOL attendeeHasAddress; // @synthesize attendeeHasAddress=_attendeeHasAddress;
@property BOOL isConnected; // @synthesize isConnected=_isConnected;
@property BOOL isExpanded; // @synthesize isExpanded=_isExpanded;
- (BOOL)shouldShowToken;
- (BOOL)isCompletedToken;
- (id)stringForRepresentedObject;
- (id)imageForRepresentedObject;
- (int)freeBusyType;
- (void)setRepresentedObject:(id)arg1;
- (id)initCellForTokenField:(id)arg1;

@end
