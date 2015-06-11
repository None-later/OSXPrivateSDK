//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/TableViewPlus.h>

#import "SafariDelegatingView.h"
#import "ScrollViewPlusScrollObserver.h"

@class NSSearchField, NSTableCellView, SidebarSearchFieldView;

__attribute__((visibility("hidden")))
@interface ReadingListTableView : TableViewPlus <ScrollViewPlusScrollObserver, SafariDelegatingView>
{
    NSTableCellView *_lastCellView;
    long long _highlightedRowIndex;
    BOOL _handlingMouseDown;
    SidebarSearchFieldView *_searchFieldView;
    id <ReadingListTableViewLiveResizeDelegate> _liveResizeDelegate;
    id <SafariViewDelegate> _safariViewDelegate;
}

@property(nonatomic) id <ReadingListTableViewLiveResizeDelegate> liveResizeDelegate; // @synthesize liveResizeDelegate=_liveResizeDelegate;
@property(nonatomic, getter=isHandlingMouseDown) BOOL handlingMouseDown; // @synthesize handlingMouseDown=_handlingMouseDown;
@property(readonly, nonatomic) long long highlightedRowIndex; // @synthesize highlightedRowIndex=_highlightedRowIndex;
@property(nonatomic) id <SafariViewDelegate> safariViewDelegate; // @synthesize safariViewDelegate=_safariViewDelegate;
- (double)_totalHeightOfTableView;
- (void)searchFieldViewFrameDidChange:(id)arg1;
- (void)scrollView:(id)arg1 didScrollToPoint:(struct CGPoint)arg2;
@property(readonly, nonatomic) SidebarSearchFieldView *searchFieldView;
@property(readonly, nonatomic) NSSearchField *searchField;
- (void)viewDidEndLiveResize;
- (id)hitTest:(struct CGPoint)arg1;
- (void)mouseDown:(id)arg1;
- (void)dealloc;
- (void)viewDidMoveToWindow;
- (id)_rowViewAtRow:(long long)arg1 makeIfNecessary:(BOOL)arg2;
- (void)highlightRowByIndex:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
