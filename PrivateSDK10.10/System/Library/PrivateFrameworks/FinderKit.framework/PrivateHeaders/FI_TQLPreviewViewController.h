/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FinderKit/FI_IPropertyValueController.h>

#import "FIAliasResolution-Protocol.h"
#import "QLPreviewViewDelegate-Protocol.h"

@class NSString;

// Not exported
@interface FI_TQLPreviewViewController : FI_IPropertyValueController <QLPreviewViewDelegate, FIAliasResolution>
{
    struct TInfoPreviewViewQTEjectHelper _ejectHelper;
    struct TNSRef<FI_TQLPreviewViewZoomController *> _zoomController;
    struct TNotificationCenterObserver _timeMachineWillStartObserver;
    struct TKeyValueBinder _previewItemBinder;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)alias:(const struct TFENode *)arg1 resolvedAs:(const struct TFENode *)arg2 temporaryNode:(const struct TFENode *)arg3;
- (BOOL)previewView:(id)arg1 writePreviewItem:(id)arg2 toPasteboard:(id)arg3;
- (BOOL)previewView:(id)arg1 acceptDrop:(id)arg2 onPreviewItem:(id)arg3;
- (unsigned long long)previewView:(id)arg1 validateDrop:(id)arg2 onPreviewItem:(id)arg3;
- (void)previewView:(id)arg1 doubleClickedOnPreviewItem:(id)arg2;
- (void)previewView:(id)arg1 willShowPreviewItem:(id)arg2;
- (void)previewView:(id)arg1 willLoadPreviewItem:(id)arg2;
- (void)adjustPreviewFrame;
- (_Bool)isResizable;
- (void)refresh;
- (void)stopPlaying;
- (_Bool)adjustSize:(_Bool)arg1;
- (void)flush;
- (void)handleNodesGoingAway:(const struct TFENodeVector *)arg1;
- (void)handleBulkNodesDeleted:(const struct map<const TFENode, const TFENodeVector *const, std::__1::less<const TFENode>, std::__1::allocator<std::__1::pair<const TFENode, const TFENodeVector *const>>> *)arg1 observedNodes:(const struct TFENodeVector *)arg2;
- (void)handleBulkNodesChanged:(const map_39732344 *)arg1 observedNodes:(const struct TFENodeVector *)arg2;
- (void)setView:(id)arg1;
- (void)viewLoaded;
- (void)finalize;
- (void)dealloc;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
