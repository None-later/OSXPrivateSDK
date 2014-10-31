/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface ILMBPMRContextImpl : NSObject
{
    NSMutableDictionary *mInstruments;
    NSString *mAppName;
    NSString *mLogPath;
    NSString *mDefaultInstrumentType;
}

- (id)logPath;
- (id)applicationName;
- (struct ILMBPMRInstrument *)instrument:(id)arg1;
- (void)getParametersFromApplication;
- (void)setParameters:(id)arg1;
- (void)dealloc;
- (void)deleteInstruments;
- (id)init;

@end
