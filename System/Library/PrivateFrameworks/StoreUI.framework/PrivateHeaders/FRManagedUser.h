//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ADMUser;

@interface FRManagedUser : NSObject
{
    ADMUser *_user;
    BOOL _restrictPurchase;
    long long _limitValue;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property long long limitValue; // @synthesize limitValue=_limitValue;
@property BOOL restrictPurchase; // @synthesize restrictPurchase=_restrictPurchase;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setLimitString:(id)arg1;
- (id)limitString;
- (void)saveImmediately;
- (void)initializeFromPreferences;
- (void)dealloc;
- (id)initWithManagedUser:(id)arg1;
- (BOOL)_initializeWithiTunesPreferences;
- (BOOL)_initializeWithiTunesSecurePreferences;
- (BOOL)_initializeWithMCX;
- (void)_initializeFromPreferences;

@end
