//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VGLSingleTexturedCullableMesh.h>

@class VGLTexture, VKPolygonDrawStyle;

__attribute__((visibility("hidden")))
@interface VGLAnimatableTexturedCullableMesh : VGLSingleTexturedCullableMesh
{
    VKPolygonDrawStyle *_style;
    VGLTexture *_textureVariant;
}

@property(retain, nonatomic) VKPolygonDrawStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) VGLTexture *textureVariant; // @synthesize textureVariant=_textureVariant;
- (void)drawInRects:(const CDStruct_818bb265 *)arg1 numRects:(unsigned long long)arg2 context:(id)arg3;
- (void)drawTrianglesWithContext:(id)arg1;
- (void)_setupTexturesInContext:(id)arg1;
- (void)updateTexturesForTileKey:(struct VKTileKey)arg1 contentScale:(double)arg2;
- (id)_textureForTileKey:(struct VKTileKey)arg1 contentScale:(double)arg2 useVariant:(BOOL)arg3;
- (void)dealloc;

@end
