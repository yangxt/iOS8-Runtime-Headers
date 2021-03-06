/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class NSIndexPath;

@interface GKMappedIndexPath : NSIndexPath  {
    id _tag;
    NSIndexPath *_sourceIndexPath;
}

@property(retain) id tag;
@property(copy) NSIndexPath * sourceIndexPath;

+ (id)indexPathForItem:(int)arg1 inSection:(int)arg2 fromSourceIndexPath:(id)arg3 withTag:(id)arg4;

- (id)sourceIndexPath;
- (void)setSourceIndexPath:(id)arg1;
- (void)setTag:(id)arg1;
- (id)tag;
- (id)description;
- (void)dealloc;

@end
