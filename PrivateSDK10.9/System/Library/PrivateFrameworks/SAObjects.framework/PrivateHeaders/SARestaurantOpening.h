//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSNumber, NSURL, SACalendar, SAUIAppPunchOut;

@interface SARestaurantOpening : AceObject <SAAceSerializable>
{
}

+ (id)openingWithDictionary:(id)arg1 context:(id)arg2;
+ (id)opening;
@property(retain, nonatomic) SACalendar *timeSlot;
@property(copy, nonatomic) NSNumber *partySize;
@property(retain, nonatomic) SAUIAppPunchOut *makeReservationPunchOut;
@property(copy, nonatomic) NSURL *bookingId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
