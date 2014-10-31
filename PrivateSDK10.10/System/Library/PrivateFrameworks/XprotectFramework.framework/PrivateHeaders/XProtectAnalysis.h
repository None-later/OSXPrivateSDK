/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSInvocation, NSThread, NSURL;

@interface XProtectAnalysis : NSObject
{
    NSURL *_fileURL;
    NSInvocation *_analysisDelegateInvocation;
    NSThread *_workerThread;
    NSDictionary *_lsProperties;
}

@property(retain) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)cancelAnalysis;
- (id)description;
- (BOOL)beginAnalysisWithDelegate:(id)arg1 didEndSelector:(SEL)arg2 contextInfo:(void *)arg3 feedback:(id)arg4;
- (BOOL)beginAnalysisWithDelegate:(id)arg1 didEndSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end
