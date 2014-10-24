//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTreeNode.h"

@class NSArray, NSColor, NSImage, NSNumber, NSPopover, NSString, SMDataStore;

@interface SMTreeChildNode : NSTreeNode
{
    NSString *_name;
    NSString *_extraInfo;
    BOOL _displaysExtraInfo;
    NSColor *_extraInfoColor;
    long long _userSelected;
    BOOL _performingSelectionUpdates;
    BOOL userEditable;
    NSImage *image;
    NSNumber *size;
    NSNumber *localNodeSize;
    BOOL _selectedItemsStillSizing;
    long long indentation;
    SMDataStore *dataStore;
    BOOL dataStoreEnabled;
    unsigned long long type;
    BOOL canSelectOnlyParent;
    BOOL selectionDisabled;
    BOOL accountForLocalNodeSize;
    BOOL allowMixedStateWhenAllChildrenSelected;
    BOOL enabled;
    BOOL needsAttention;
    unsigned long long textMode;
    NSPopover *_settingsPopover;
    NSArray *settingsUITopLevelObjects;
    SMTreeChildNode *parent;
}

+ (id)keyPathsForValuesAffectingShouldShowAdditionalSettings;
+ (id)keyPathsForValuesAffectingSizeIsAvailable;
+ (id)createNodeWithName:(id)arg1 ofType:(unsigned long long)arg2 selected:(BOOL)arg3 andImage:(id)arg4 andRepresentedObject:(id)arg5;
+ (id)createNodeWithName:(id)arg1 ofType:(unsigned long long)arg2 selected:(BOOL)arg3 andIndentation:(long long)arg4 andImage:(id)arg5 andRepresentedObject:(id)arg6;
+ (id)createNodeWithName:(id)arg1 ofType:(unsigned long long)arg2 selected:(BOOL)arg3 andIndentation:(long long)arg4 andImage:(id)arg5 andSize:(id)arg6 andTextMode:(unsigned long long)arg7 andRepresentedObject:(id)arg8;
+ (id)createNodeWithName:(id)arg1 ofType:(unsigned long long)arg2 selected:(BOOL)arg3 andIndentation:(long long)arg4 andImage:(id)arg5 andSize:(id)arg6 andRepresentedObject:(id)arg7;
@property BOOL selectedItemsStillSizing; // @synthesize selectedItemsStillSizing=_selectedItemsStillSizing;
@property BOOL dataStoreEnabled; // @synthesize dataStoreEnabled;
@property(retain) SMDataStore *dataStore; // @synthesize dataStore;
@property unsigned long long textMode; // @synthesize textMode;
@property BOOL needsAttention; // @synthesize needsAttention;
@property BOOL enabled; // @synthesize enabled;
@property BOOL allowMixedStateWhenAllChildrenSelected; // @synthesize allowMixedStateWhenAllChildrenSelected;
@property BOOL accountForLocalNodeSize; // @synthesize accountForLocalNodeSize;
@property BOOL selectionDisabled; // @synthesize selectionDisabled;
@property BOOL canSelectOnlyParent; // @synthesize canSelectOnlyParent;
@property long long indentation; // @synthesize indentation;
@property unsigned long long type; // @synthesize type;
@property(retain) NSImage *image; // @synthesize image;
@property(retain) SMTreeChildNode *parent; // @synthesize parent;
@property BOOL userEditable; // @synthesize userEditable;
@property(copy) NSNumber *localNodeSize; // @synthesize localNodeSize;
@property(copy) NSNumber *size; // @synthesize size;
@property BOOL performingSelectionUpdates; // @synthesize performingSelectionUpdates=_performingSelectionUpdates;
@property long long userSelected; // @synthesize userSelected=_userSelected;
@property BOOL displaysExtraInfo; // @synthesize displaysExtraInfo=_displaysExtraInfo;
@property NSPopover *settingsPopover; // @synthesize settingsPopover=_settingsPopover;
@property(copy) NSColor *extraInfoColor; // @synthesize extraInfoColor=_extraInfoColor;
@property(copy) NSString *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)pressedSettingsButton:(id)arg1;
@property(readonly) BOOL shouldShowAdditionalSettings;
- (void)sortChildernUsingComparator:(CDUnknownBlockType)arg1;
- (void)removeAllChildren;
- (void)removeChild:(id)arg1;
- (void)addChild:(id)arg1 andEvaluateState:(BOOL)arg2;
- (void)addChild:(id)arg1;
- (id)childWithRepresentedObject:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)evaluateState;
- (void)evaluateSize;
- (long long)sizeForItemsOnDataStore:(id)arg1;
- (BOOL)sizeIsAvailable;
- (void)dealloc;
- (void)allChildrenState:(char *)arg1:(char *)arg2:(char *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)initWithRepresentedObject:(id)arg1;
- (id)init;
- (id)initWithName:(id)arg1 ofType:(unsigned long long)arg2 selected:(BOOL)arg3 andImage:(id)arg4 andSize:(id)arg5 andRepresentedObject:(id)arg6;
- (void)_init;

@end
