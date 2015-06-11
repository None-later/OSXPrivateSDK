/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IMPeople.h"

@class NSArray, NSMutableArray;

@interface SOPeopleCollection : IMPeople
{
    NSMutableArray *_collectedPeople;
}

@property(retain, nonatomic) NSMutableArray *collectedPeople; // @synthesize collectedPeople=_collectedPeople;
- (void).cxx_destruct;
- (BOOL)containsPerson:(id)arg1;
- (id)groups;
- (id)people;
- (void)_collectionNotification:(id)arg1;
- (void)removeIMPeople:(id)arg1;
- (void)addIMPeople:(id)arg1;
- (BOOL)collectsIMPeople:(id)arg1;
@property(readonly, nonatomic) NSArray *collectedIMPeople;
- (id)init;

@end
