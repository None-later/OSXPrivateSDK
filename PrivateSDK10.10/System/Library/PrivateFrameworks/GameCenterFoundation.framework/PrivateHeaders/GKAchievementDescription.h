/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class GKAchievementInternal, NSString, UIImage;

@interface GKAchievementDescription : NSObject <NSCoding, NSSecureCoding>
{
    GKAchievementInternal *_internal;
    UIImage *_image;
}

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (void)loadAchievementDescriptionsForGame:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadAchievementDescriptionsWithCompletionHandler:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain) GKAchievementInternal *internal; // @synthesize internal=_internal;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *achievedDescription; // @dynamic achievedDescription;
@property(readonly, retain, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property(readonly, getter=isHidden) BOOL hidden; // @dynamic hidden;
@property(readonly, copy) NSString *identifier; // @dynamic identifier;
@property(readonly) long long maximumPoints; // @dynamic maximumPoints;
@property(readonly, nonatomic, getter=isReplayable) BOOL replayable; // @dynamic replayable;
@property(readonly, copy) NSString *title; // @dynamic title;
@property(readonly, copy) NSString *unachievedDescription; // @dynamic unachievedDescription;

@end
