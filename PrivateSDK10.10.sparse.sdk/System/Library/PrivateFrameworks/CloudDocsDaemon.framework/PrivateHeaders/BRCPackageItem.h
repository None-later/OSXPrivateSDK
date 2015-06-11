/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class BRCGenerationID, BRCLocalContainer, NSData, NSString;

@interface BRCPackageItem : NSObject
{
    BRCLocalContainer *_container;
    BOOL _isDirty;
    NSString *_symlinkContent;
    NSData *_contentSignature;
    BOOL _mode;
    int _type;
    long long _assetRank;
    unsigned long long _packageID;
    unsigned long long _fileID;
    BRCGenerationID *_generationID;
    NSString *_pathInPackage;
    long long _mtime;
    long long _size;
    NSData *_quarantineInfo;
}

+ (BOOL)dumpContainer:(id)arg1 toContext:(id)arg2 error:(id *)arg3;
+ (BOOL)markLiveFromStageForItem:(id)arg1;
+ (BOOL)packageChangedAtRelativePath:(id)arg1;
+ (BOOL)updateSnapshotAtPath:(id)arg1 error:(id *)arg2;
+ (BOOL)_rescanDirectoryInPackage:(id)arg1 error:(id *)arg2;
+ (BOOL)_deleteSnapshotAtPath:(id)arg1 error:(id *)arg2;
+ (BOOL)updateSigaturesForFilesInItem:(id)arg1 startingAtRank:(long long)arg2 fromCKPackage:(id)arg3 startingAtIndex:(unsigned long long)arg4 error:(id *)arg5;
+ (long long)aggregatePackageSizeInContainer:(id)arg1 packageID:(unsigned int)arg2;
+ (PQLResultSet_67aa68bb *)packageItemsForItem:(id)arg1 order:(unsigned long long)arg2;
+ (PQLResultSet_67aa68bb *)packageItemsForDocumentID:(unsigned int)arg1 order:(unsigned long long)arg2 container:(id)arg3;
+ (long long)largestPackageItemSizeInContainer:(id)arg1 documentID:(unsigned int)arg2;
+ (id)packageItemForRelpath:(id)arg1;
+ (id)packageItemInContainer:(id)arg1 documentID:(unsigned int)arg2 relativePath:(id)arg3;
@property(readonly, nonatomic) NSData *quarantineInfo; // @synthesize quarantineInfo=_quarantineInfo;
@property(readonly, nonatomic) long long size; // @synthesize size=_size;
@property(readonly, nonatomic) BOOL mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) long long mtime; // @synthesize mtime=_mtime;
@property(readonly, nonatomic) NSString *pathInPackage; // @synthesize pathInPackage=_pathInPackage;
@property(readonly, nonatomic) BRCGenerationID *generationID; // @synthesize generationID=_generationID;
@property(readonly, nonatomic) unsigned long long fileID; // @synthesize fileID=_fileID;
@property(readonly, nonatomic) unsigned long long packageDocumentID; // @synthesize packageDocumentID=_packageID;
@property(readonly, nonatomic) long long assetRank; // @synthesize assetRank=_assetRank;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (BOOL)saveToDB;
- (id)initFromPQLResultSet:(id)arg1 container:(id)arg2 error:(id *)arg3;
- (id)initWithPBItem:(id)arg1 forLocalItem:(id)arg2;
- (id)initWithRelativePath:(id)arg1 markDirty:(BOOL)arg2;
- (id)description;
@property(readonly, nonatomic) NSData *contentSignature;
@property(readonly, nonatomic) NSString *symlinkContent;
- (BOOL)changedAtRelpath:(id)arg1;
@property(readonly, nonatomic) BOOL isDirectory;
@property(readonly, nonatomic) BOOL isSymlink;
@property(readonly, nonatomic) BOOL isFile;

@end
