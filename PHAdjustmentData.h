/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSString, NSData;

@interface PHAdjustmentData : NSObject <NSSecureCoding> {
    NSString *_formatIdentifier;
    NSString *_formatVersion;
    NSData *_data;
    int _baseVersion;
}

@property(copy) NSString * formatIdentifier;
@property(copy) NSString * formatVersion;
@property(readonly) NSData * data;
@property(getter=isOpaque,readonly) BOOL opaque;
@property int baseVersion;

+ (BOOL)supportsSecureCoding;
+ (int)imageRequestVersionFromAdjustmentBaseVersion:(int)arg1;
+ (int)adjustmentBaseVersionFromImageRequestVersion:(int)arg1;
+ (int)adjustmentBaseVersionFromVideoRequestVersion:(int)arg1;
+ (int)videoRequestVersionFromAdjustmentBaseVersion:(int)arg1;
+ (id)opaqueAdjustmentData;

- (id)formatIdentifier;
- (id)formatVersion;
- (void).cxx_destruct;
- (BOOL)isOpaque;
- (id)initWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2 data:(id)arg3;
- (void)setBaseVersion:(int)arg1;
- (int)baseVersion;
- (void)setFormatVersion:(id)arg1;
- (void)setFormatIdentifier:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)data;
- (id)description;

@end