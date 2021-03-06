/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

// Not exported
@interface DMUDSWrapper : NSObject <NSSecureCoding>
{
    struct DMUDSPrivRec _myUDS;
}

+ (BOOL)supportsSecureCoding;
+ (id)wrapperWithDiskIdentifier:(id)arg1;
+ (id)wrapperFromDADisk:(struct __DADisk *)arg1;
+ (id)wrapperWithUDS:(struct DMUDSPrivRec *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)wholeDiskWrapper;
- (struct DMUDSPrivRec *)UDSPtr;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUDS:(struct DMUDSPrivRec *)arg1;

@end

