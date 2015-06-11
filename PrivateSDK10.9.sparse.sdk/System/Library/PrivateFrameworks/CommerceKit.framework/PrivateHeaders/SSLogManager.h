//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface SSLogManager : NSObject
{
    BOOL _dirty;
    struct __aslclient *_aslclient;
    struct __aslmsg *_aslmsg;
    NSObject<OS_dispatch_queue> *_aslqueue;
}

+ (id)dateFormatterForFilename;
+ (id)dateFormatter;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)logLevel:(unsigned long long)arg1 inFunction:(const char *)arg2 inFile:(const char *)arg3 atLine:(unsigned long long)arg4 forData:(id)arg5 toFilename:(id)arg6;
- (void)logLevel:(unsigned long long)arg1 inFunction:(const char *)arg2 inFile:(const char *)arg3 atLine:(unsigned long long)arg4 forPlist:(id)arg5 toFilename:(id)arg6;
- (void)logLevel:(unsigned long long)arg1 inFunction:(const char *)arg2 inFile:(const char *)arg3 atLine:(unsigned long long)arg4 forResponse:(id)arg5 toFilename:(id)arg6;
- (void)logLevel:(unsigned long long)arg1 inFunction:(const char *)arg2 inFile:(const char *)arg3 atLine:(unsigned long long)arg4 forRequest:(id)arg5 toFilename:(id)arg6;
- (void)logLevel:(unsigned long long)arg1 inFunction:(const char *)arg2 inFile:(const char *)arg3 atLine:(unsigned long long)arg4 withFormat:(id)arg5;
- (void)logLevel:(unsigned long long)arg1 inFunction:(const char *)arg2 inFile:(const char *)arg3 atLine:(unsigned long long)arg4 withString:(id)arg5;
- (void)manageAppStoreLogs:(id)arg1 withPath:(id)arg2;
- (void)manageAppStoreLogOrder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_createLogFileWithName:(id)arg1 andExtension:(id)arg2;
- (void)_markEnd;
- (void)_markStart;
- (void)_sendAuxiliaryFileToASL:(id)arg1 withName:(id)arg2;
- (void)_sendStringToASL:(id)arg1 withLevel:(long long)arg2;
- (void)_endASL;
- (void)_startASL;

@end
