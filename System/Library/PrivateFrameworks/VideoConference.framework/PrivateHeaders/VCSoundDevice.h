//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VCSoundDevice : NSObject
{
    NSString *_displayName;
    NSString *_deviceName;
    NSString *_sourceName;
    unsigned int _deviceID;
    unsigned int _sourceID;
    unsigned int _transportType;
    BOOL _isBluetooth;
}

- (BOOL)isBluetooth;
- (unsigned int)transportType;
- (unsigned int)sourceID;
- (unsigned int)deviceID;
- (id)displayName;
- (id)sourceName;
- (id)deviceName;
- (void)dealloc;
- (id)init;

@end
