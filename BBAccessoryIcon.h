/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSMutableDictionary, NSDictionary;

@interface BBAccessoryIcon : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_imagesForContentSize;
}

@property(copy) NSDictionary * imagesForContentSize;

+ (BOOL)supportsSecureCoding;

- (id)imageForContentSizeCategory:(id)arg1;
- (void)addImage:(id)arg1 forContentSizeCategory:(id)arg2;
- (void)setImagesForContentSize:(id)arg1;
- (id)imagesForContentSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end
