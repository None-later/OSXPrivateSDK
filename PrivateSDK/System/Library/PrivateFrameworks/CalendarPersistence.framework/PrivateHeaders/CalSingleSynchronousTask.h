//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@interface CalSingleSynchronousTask : NSObject
{
    BOOL _completed;
    NSError *_error;
}

@property(retain) NSError *error; // @synthesize error=_error;
@property BOOL completed; // @synthesize completed=_completed;
- (void)executeTask:(id)arg1 usingTaskManager:(id)arg2;
- (void)_setCompletionBlockOnTask:(id)arg1;
- (void)dealloc;

@end
