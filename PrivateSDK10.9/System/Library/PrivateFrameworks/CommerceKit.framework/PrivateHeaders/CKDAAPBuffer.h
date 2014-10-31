//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface CKDAAPBuffer : NSObject
{
    NSData *_data;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (long long)appendUTF8String:(const char *)arg1 length:(unsigned int)arg2 withCode:(unsigned int)arg3;
- (long long)appendHeader:(unsigned int)arg1 size:(unsigned int)arg2;
- (long long)appendUInt64:(unsigned long long)arg1 withCode:(unsigned int)arg2;
- (long long)appendUInt32:(unsigned int)arg1 withCode:(unsigned int)arg2;
- (long long)appendUInt8:(unsigned char)arg1 withCode:(unsigned int)arg2;
- (id)init;

@end
