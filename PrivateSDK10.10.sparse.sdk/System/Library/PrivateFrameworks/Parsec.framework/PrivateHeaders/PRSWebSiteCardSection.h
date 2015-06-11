/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Parsec/PRSTitleCardSection.h>

#import "NSCoding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSImage;

@interface PRSWebSiteCardSection : PRSTitleCardSection <NSCoding, NSSecureCoding>
{
    BOOL _title_nowrap;
    int _image_size;
    NSImage *_image;
}

+ (id)safariIcon;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) int image_size; // @synthesize image_size=_image_size;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic) BOOL title_nowrap; // @synthesize title_nowrap=_title_nowrap;
- (void).cxx_destruct;
- (long long)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 dict:(id)arg2;

@end
