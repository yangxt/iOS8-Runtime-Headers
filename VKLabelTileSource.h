/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelTileSource : VKTileSetBackedTileSource  {
    struct shared_ptr<vk::LabelManager> { 
        struct LabelManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _labelManager;
    BOOL _localizeLabels;
    int _labelScaleFactor;
}

@property BOOL localizeLabels;
@property int labelScaleFactor;


- (unsigned char)_labelTileType;
- (int)defaultMaximumZoomLevel;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 sourceKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg3;
- (BOOL)maximumZoomLevelBoundsCamera;
- (BOOL)minimumZoomLevelBoundsCamera;
- (id)initWithTileSet:(id)arg1 tileGroupIdentifier:(unsigned int)arg2 locale:(id)arg3 labelManager:(const struct shared_ptr<vk::LabelManager> { struct LabelManager {} *x1; struct __shared_weak_count {} *x2; }*)arg4;
- (void)setLabelScaleFactor:(int)arg1;
- (int)labelScaleFactor;
- (void)setLocalizeLabels:(BOOL)arg1;
- (BOOL)localizeLabels;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

@end