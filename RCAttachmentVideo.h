/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class UIImage;

@interface RCAttachmentVideo : RCAttachmentItem  {
    UIImage *_thumbnail;
}

@property(retain) UIImage * thumbnail;

+ (id)newAttachmentVideoWithAssetURL:(id)arg1 andThumbnail:(id)arg2;
+ (id)newAttachmentVideoWithURL:(id)arg1;

- (id)generateThumbnailFromURL:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (id)thumbnail;
- (void).cxx_destruct;

@end