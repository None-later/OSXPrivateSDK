/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalManagedCalDAVCalendar.h>

@class NSString;

@interface CalManagedCalDAVSubscribedCalendar : CalManagedCalDAVCalendar
{
}

+ (id)entityName;
- (BOOL)allowsScheduling;
- (BOOL)isSubscribedHolidayCalendar;
- (BOOL)isSubscribed;
- (id)lastOperationError;
- (id)session;
- (void)refreshSession:(long long)arg1;
- (void)refreshSession;
- (void)activateSession;
- (BOOL)wantsSession;

// Remaining properties
@property(retain) NSString *eTag; // @dynamic eTag;

@end
