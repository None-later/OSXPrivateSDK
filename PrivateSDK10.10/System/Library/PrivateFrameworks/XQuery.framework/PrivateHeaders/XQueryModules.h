/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

// Not exported
@interface XQueryModules : NSObject
{
    NSMutableArray *_namespaces;
    NSMutableDictionary *_namespaceIDs;
    NSMutableArray *_prologs;
}

+ (id)builtinNamespaceForID:(long long)arg1;
+ (id)modules;
+ (void)initialize;
- (void)addProlog:(id)arg1 forID:(unsigned long long)arg2;
- (id)prologForID:(long long)arg1;
- (unsigned long long)namespaceID:(id)arg1 canCreate:(BOOL)arg2;
- (id)namespaceForID:(unsigned long long)arg1;
- (id)init;
- (void)finalize;
- (void)dealloc;

@end
