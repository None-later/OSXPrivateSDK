/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MMAuthenticatingPasswordSheetDelegate-Protocol.h"

@class MMAuthenticatingPasswordSheet, NSError, NSString;

@interface MMBTMMPasswordSheet : NSObject <MMAuthenticatingPasswordSheetDelegate>
{
    id <BTMMPasswordSheetDelegate> _delegate;
    MMAuthenticatingPasswordSheet *_authenticatingPasswordSheet;
}

@property(retain) MMAuthenticatingPasswordSheet *authenticatingPasswordSheet; // @synthesize authenticatingPasswordSheet=_authenticatingPasswordSheet;
@property id <BTMMPasswordSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)mmAuthenticatingPasswordSheetDidEnd:(id)arg1 returnCode:(long long)arg2;
- (void)showPasswordSheetUsingWindow:(id)arg1 completionHandler:(id)arg2;
- (void)showPasswordSheetUsingWindow:(id)arg1;
@property(readonly) NSError *authenticationError; // @dynamic authenticationError;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
