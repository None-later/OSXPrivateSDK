/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/WBSParsecSearchResult.h>

@class NSMutableArray, NSString;

// Not exported
@interface WBSParsecSearchMoviesResult : WBSParsecSearchResult
{
    NSMutableArray *_posterRepresentations;
    NSString *_descriptionLeadInText;
}

@property(readonly, nonatomic) NSString *descriptionLeadInText; // @synthesize descriptionLeadInText=_descriptionLeadInText;
- (void).cxx_destruct;
- (id)postersWithSession:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
