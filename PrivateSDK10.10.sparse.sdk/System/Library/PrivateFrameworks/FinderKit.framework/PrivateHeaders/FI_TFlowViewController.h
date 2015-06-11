/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FinderKit/FI_TListViewController.h>

#import "NSSplitViewDelegate-Protocol.h"
#import "TFlowViewDelegate-Protocol.h"

@class FI_TFlowView, NSString, NSView;

// Not exported
@interface FI_TFlowViewController : FI_TListViewController <TFlowViewDelegate, NSSplitViewDelegate>
{
    FI_TFlowView *_flowView;
    NSView *_listContainerView;
    _Bool _disableSelectionSync;
    _Bool _flowViewChangingSelection;
    _Bool _listViewChangingSelection;
    _Bool _autoSelectMode;
    _Bool _isAutoSelecting;
    unsigned long long _autoSelectIndex;
    struct TFlowViewQTEjectHelper *_ejectHelper;
    struct TNotificationCenterObserver _timeMachineWillStartObserver;
}

@property(nonatomic) _Bool disableSelectionSync; // @synthesize disableSelectionSync=_disableSelectionSync;
@property(readonly) NSView *listContainerView; // @synthesize listContainerView=_listContainerView;
@property(readonly) FI_TFlowView *flowView; // @synthesize flowView=_flowView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)handleKeyDown:(id)arg1 currentKey:(unsigned short *)arg2;
- (double)splitterPosition;
- (id)splitView;
- (id)imageFlow:(id)arg1 accessibilityItemAtIndex:(unsigned long long)arg2 parentItem:(id)arg3;
- (unsigned long long)imageFlow:(id)arg1 writeItemsAtIndexes:(id)arg2 toPasteboard:(id)arg3;
- (id)imageFlow:(id)arg1 itemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInImageFlow:(id)arg1;
- (void)flowViewDidReloadData:(id)arg1;
- (unsigned long long)getSelectedNodesForQuickLook:(struct TFENodeVector *)arg1 includeTarget:(_Bool)arg2 upTo:(unsigned long long)arg3;
- (void)imageFlow:(id)arg1 cellWasDoubleClickedAtIndex:(unsigned long long)arg2;
- (void)imageFlowDidStabilize:(id)arg1;
- (void)imageFlowWillStabilize:(id)arg1;
- (void)imageFlow:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (struct CGRect)globalZoomRectForNode:(const struct TFENode *)arg1;
- (struct CGRect)zoomRectForNode:(const struct TFENode *)arg1;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)ensureCGSurfaceUpdateOnDraw:(_Bool)arg1;
- (id)quickLookSharedPreviewViewForPreviewNode:(const struct TFENode *)arg1;
- (id)zoomImageForNode:(const struct TFENode *)arg1 contentRect:(struct CGRect *)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (_Bool)removeItems:(const struct TFENodeVector *)arg1 forNode:(const struct TFENode *)arg2;
- (_Bool)addItems:(const struct TFENodeVector *)arg1 forNode:(const struct TFENode *)arg2 withOperation:(id)arg3;
- (void)reloadNodes:(const struct TFENodeVector *)arg1 forNode:(const struct TFENode *)arg2;
- (int)updateNeededForNode:(const struct TFENode *)arg1 property:(unsigned long long)arg2;
- (void)didPerformFirstReload;
- (void)reloadData;
- (void)reloadDataForContainerNode:(const struct TFENode *)arg1;
- (void)setSelectionChangedAnimationsEnabled:(_Bool)arg1;
- (void)sidebarDidChangeVisibility:(_Bool)arg1;
- (struct TFENode)flowNodeAtIndex:(unsigned long long)arg1;
- (id)flowIndexSetForNodes:(const struct TFENodeVector *)arg1;
- (unsigned long long)flowIndexForNode:(const struct TFENode *)arg1;
- (void)collapseItem:(id)arg1 collapseChildren:(_Bool)arg2;
- (void)selectAll:(id)arg1;
- (void)deselectAllNodes;
- (struct CGSize)minimumViewSize;
- (struct CGSize)idealViewSize;
- (void)setDataSource:(id)arg1;
- (unsigned int)viewStyle;
- (id)firstResponder;
- (id)nibName;
- (void)aboutToTearDown;
- (void)awakeFromNib;
- (void)viewLoaded;
- (id)initWithDataSource:(id)arg1 andViewSettings:(id)arg2 targetPath:(const struct TFENodeVector *)arg3 containerController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
