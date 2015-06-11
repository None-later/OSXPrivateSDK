/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class FAFamilyCloudKitProperties, NSArray, NSDictionary;

@interface FAFamilyCircle : NSObject <NSSecureCoding>
{
    NSArray *_members;
    FAFamilyCloudKitProperties *_cloudKitProperties;
    NSDictionary *__serverResponse;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) NSDictionary *_serverResponse; // @synthesize _serverResponse=__serverResponse;
@property(readonly) FAFamilyCloudKitProperties *cloudKitProperties; // @synthesize cloudKitProperties=_cloudKitProperties;
@property(readonly) NSArray *members; // @synthesize members=_members;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithServerResponse:(id)arg1;

@end
