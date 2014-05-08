//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CoreDAVTask, NSData, NSError, NSString;

@protocol CoreDAVResponseBodyParser <NSObject>
@property(readonly) NSError *parserError;
- (BOOL)processData:(NSData *)arg1 forTask:(CoreDAVTask *)arg2;

@optional
+ (BOOL)canHandleContentType:(NSString *)arg1;
@end
