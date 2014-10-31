//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class GEORPUserCredentials, NSMutableArray, NSString;

@interface GEORPProblemStatusRequest : PBRequest <NSCopying>
{
    NSMutableArray *_problemIDs;
    NSString *_statusNotificationID;
    GEORPUserCredentials *_userCredentials;
}

@property(retain, nonatomic) NSMutableArray *problemIDs; // @synthesize problemIDs=_problemIDs;
@property(retain, nonatomic) NSString *statusNotificationID; // @synthesize statusNotificationID=_statusNotificationID;
@property(retain, nonatomic) GEORPUserCredentials *userCredentials; // @synthesize userCredentials=_userCredentials;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)problemIDAtIndex:(unsigned long long)arg1;
- (unsigned long long)problemIDsCount;
- (void)addProblemID:(id)arg1;
- (void)clearProblemIDs;
@property(readonly, nonatomic) BOOL hasStatusNotificationID;
@property(readonly, nonatomic) BOOL hasUserCredentials;
- (void)dealloc;

@end
