/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SUSoftwareUpdateErrorHandler : NSObject
{
    long long _code;
    id _action;
}

- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)_launchNetworkDiagnosticsForError:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithErrorCode:(long long)arg1 action:(id)arg2;

@end
