/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSKeyedUnarchiver.h"

@class MPDocument, NSDictionary;

@interface MPDocumentKeyedUnarchiver : NSKeyedUnarchiver
{
    id <MPAssetKeyDelegate> _assetKeyDelegate;
    NSDictionary *_mediaProperties;
    MPDocument *_parentDocument;
}

@property(nonatomic) MPDocument *parentDocument; // @synthesize parentDocument=_parentDocument;
@property(nonatomic) NSDictionary *mediaProperties; // @synthesize mediaProperties=_mediaProperties;
@property(nonatomic) id <MPAssetKeyDelegate> assetKeyDelegate; // @synthesize assetKeyDelegate=_assetKeyDelegate;

@end
