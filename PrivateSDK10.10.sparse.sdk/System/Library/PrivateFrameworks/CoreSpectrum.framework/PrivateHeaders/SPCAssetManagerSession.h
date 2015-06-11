/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSBlockOperation, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, SPCAssetManager, SPCAssetManagerSessionItem;

@interface SPCAssetManagerSession : NSObject
{
    NSString *_sessionID;
    long long _sessionType;
    unsigned long long _sessionState;
    unsigned long long _sessionResult;
    double _currentProgressPercentage;
    NSString *_currentStatusMessage;
    SPCAssetManagerSessionItem *_currentSessionItem;
    SPCAssetManager *_assetManager;
    NSMutableArray *_sessionItemStorage;
    NSMutableDictionary *_affectedAssetStorage;
    id _completionHandler;
    NSOperationQueue *_workerQueue;
    NSBlockOperation *_workerOperation;
}

+ (id)sessionWithAssetManager:(id)arg1;
@property(retain) NSBlockOperation *workerOperation; // @synthesize workerOperation=_workerOperation;
@property(retain) NSOperationQueue *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(copy) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain) NSMutableDictionary *affectedAssetStorage; // @synthesize affectedAssetStorage=_affectedAssetStorage;
@property(retain) NSMutableArray *sessionItemStorage; // @synthesize sessionItemStorage=_sessionItemStorage;
@property SPCAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(retain) SPCAssetManagerSessionItem *currentSessionItem; // @synthesize currentSessionItem=_currentSessionItem;
@property(copy) NSString *currentStatusMessage; // @synthesize currentStatusMessage=_currentStatusMessage;
@property double currentProgressPercentage; // @synthesize currentProgressPercentage=_currentProgressPercentage;
@property unsigned long long sessionResult; // @synthesize sessionResult=_sessionResult;
@property unsigned long long sessionState; // @synthesize sessionState=_sessionState;
@property long long sessionType; // @synthesize sessionType=_sessionType;
@property(copy) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (BOOL)importFileContentsFromURL:(id)arg1 error:(id *)arg2;
- (void)performTaskForSessionItem:(id)arg1;
- (void)setupSessionItemsForFileURLs:(id)arg1;
- (void)addObject:(id)arg1 forAffectedAssetStorageKey:(id)arg2;
@property(readonly) NSArray *updatedAssetFiles;
@property(readonly) NSArray *addedAssetFiles;
@property(readonly) NSArray *updatedAssets;
@property(readonly) NSArray *addedAssets;
@property(readonly) NSArray *sessionItems;
- (void)reset;
- (void)end;
@property(readonly, getter=isCanceled) BOOL canceled;
- (void)cancel;
- (void)start;
- (void)startImportForFileURLs:(id)arg1 withOptions:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithAssetManager:(id)arg1;

@end
