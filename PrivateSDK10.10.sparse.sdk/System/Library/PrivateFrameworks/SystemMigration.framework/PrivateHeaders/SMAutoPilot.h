/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MigrationProgressEventsListener-Protocol.h"

@class SMProgress_Client;

@interface SMAutoPilot : NSObject <MigrationProgressEventsListener>
{
    BOOL _migrationDone;
    SMProgress_Client *_progressClient;
}

+ (id)sharedPilot;
@property(retain) SMProgress_Client *progressClient; // @synthesize progressClient=_progressClient;
@property BOOL migrationDone; // @synthesize migrationDone=_migrationDone;
- (void).cxx_destruct;
- (void)engineCompletedWithErrorsAndWarnings:(id)arg1;
- (void)engineMinutesRemaining:(id)arg1;
- (void)enginePercentDone:(id)arg1;
- (void)engineProcessingText:(id)arg1;
- (void)engineStarted;
- (void)flyWithPlist:(id)arg1;
- (void)flyWithDictionary:(id)arg1;
- (void)addUserToTransfer:(id)arg1 toRequest:(id)arg2 excludedPaths:(id)arg3 overwriteTargetName:(id)arg4;

@end
