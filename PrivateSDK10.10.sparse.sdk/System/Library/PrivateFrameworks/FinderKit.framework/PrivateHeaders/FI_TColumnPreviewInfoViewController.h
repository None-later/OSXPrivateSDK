/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FinderKit/FI_TInfoWindowViewController.h>

@class FI_TColumnPreviewPropertyTaggingTokenFieldController, FI_TColumnPreviewSpotlightMetaDataController, FI_TPropertyColumnPreviewCreationDateController, FI_TPropertyColumnPreviewKindAndSizeController, FI_TPropertyColumnPreviewLastOpenedDateController, FI_TPropertyColumnPreviewModificationDateController, FI_TPropertyNameController, FI_TPropertyShortVersionController, FI_TSpacerView;

// Not exported
@interface FI_TColumnPreviewInfoViewController : FI_TInfoWindowViewController
{
    FI_TPropertyNameController *_nameController;
    FI_TPropertyColumnPreviewKindAndSizeController *_kindAndSizeController;
    FI_TPropertyColumnPreviewCreationDateController *_createDateController;
    FI_TPropertyColumnPreviewModificationDateController *_modDateController;
    FI_TPropertyColumnPreviewLastOpenedDateController *_lastOpenedDateController;
    FI_TSpacerView *_versionSpacerView;
    FI_TPropertyShortVersionController *_versionController;
    FI_TSpacerView *_spotlightMetaDataSpacerView;
    FI_TColumnPreviewSpotlightMetaDataController *_spotightMetaDataController;
    FI_TSpacerView *_taggingSpacerView;
    FI_TColumnPreviewPropertyTaggingTokenFieldController *_taggingController;
    struct TNSRef<NSArray *> _titleFlds;
    double _leftMargin;
    double _titleAndTextGap;
    double _rightMargin;
    double _viewWidthCache;
    struct TNotificationCenterObserver _viewFrameChangedObserver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)adjustTextFieldWidths;
- (void)nodeMDAttributeChanged:(const struct TFENode *)arg1 attributes:(id)arg2 isDisplayAttributes:(_Bool)arg3;
- (void)bulkNodesChanged:(const map_39732344 *)arg1;
- (void)viewFrameChanged;
- (void)refresh;
- (void)setNodes:(const struct TFENodeVector *)arg1;
- (void)setSubviewsHidden:(_Bool)arg1;
- (_Bool)expandedDefaultValue;
- (_Bool)expanded;
- (void)configureMinRowCount:(double)arg1 maxRowCount:(double)arg2 resizable:(_Bool)arg3;
- (unsigned int)notificationOptionsForNodes:(const struct TFENodeVector *)arg1;
- (void)aboutToTearDown;
- (void)loadValueControllers;
- (void)viewLoaded;

@end
