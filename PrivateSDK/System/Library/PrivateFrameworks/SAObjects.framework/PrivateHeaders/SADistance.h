//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSNumber, NSString;

@interface SADistance : AceObject <SAAceSerializable>
{
}

+ (id)distanceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)distance;
@property(retain, nonatomic) NSNumber *value;
@property(copy, nonatomic) NSString *units;
@property(copy, nonatomic) NSString *unit;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
