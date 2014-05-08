//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedCalendar.h>

@interface CalManagedSubscriptionCalendar : CalManagedCalendar
{
}

+ (id)singletonContainerSource;
+ (id)entityName;
- (void)setSharees:(id)arg1;
- (id)sharees;
- (BOOL)isSubscribed;
- (id)containerSource;
- (void)willSave;
- (id)defaultAlarmsWithIsAllDayEvent:(BOOL)arg1 fromServer:(BOOL)arg2;
- (id)defaultAlarmsWithIsAllDayEvent:(BOOL)arg1;
- (id)lastOperationError;
- (int)status;
- (BOOL)isMigrateable;
- (BOOL)isHolidayCalendar;
- (BOOL)isLocal;
- (BOOL)hasCapability:(int)arg1;
- (id)type;
- (void)refresh;
- (BOOL)isRefreshable;
- (void)activate;

@end
