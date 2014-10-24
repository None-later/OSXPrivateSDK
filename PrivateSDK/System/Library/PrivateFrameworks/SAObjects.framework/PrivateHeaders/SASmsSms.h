//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDate, NSNumber, NSString, NSURL, SAPersonAttribute;

@interface SASmsSms : SADomainObject
{
}

+ (id)smsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sms;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
@property(copy, nonatomic) NSString *timezoneId;
@property(copy, nonatomic) NSString *subject;
@property(copy, nonatomic) NSString *sender;
@property(copy, nonatomic) NSArray *recipients;
@property(copy, nonatomic) NSNumber *outgoing;
@property(retain, nonatomic) SAPersonAttribute *msgSender;
@property(copy, nonatomic) NSArray *msgRecipients;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSDate *dateSent;
@property(copy, nonatomic) NSURL *attachment;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
