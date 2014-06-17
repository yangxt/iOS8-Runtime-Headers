/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIBrickSwooshViewController;

@interface SKUIBrickSwooshArtworkLoader : SKUISwooshArtworkLoader  {
    int _artworkSize;
}

@property(readonly) SKUIBrickSwooshViewController * swooshViewController;


- (void)loadImagesForNextPageWithReason:(int)arg1;
- (id)cachedImageForBrick:(id)arg1;
- (void)setImage:(id)arg1 forRequest:(id)arg2;
- (BOOL)loadImageForBrick:(id)arg1 reason:(int)arg2;
- (id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2;

@end