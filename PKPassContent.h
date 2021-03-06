/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class PKImage, NSString, NSArray;

@interface PKPassContent : PKContent <NSSecureCoding> {
    int _transitType;
    PKImage *_footerImage;
    NSString *_logoText;
    NSArray *_frontFieldBuckets;
    NSArray *_backFieldBuckets;
}

@property int transitType;
@property(retain) PKImage * footerImage;
@property(copy) NSString * logoText;
@property(copy) NSArray * frontFieldBuckets;
@property(copy) NSArray * backFieldBuckets;

+ (BOOL)supportsSecureCoding;

- (void)setFooterImage:(id)arg1;
- (void)setBackFieldBuckets:(id)arg1;
- (void)setFrontFieldBuckets:(id)arg1;
- (void)setTransitType:(int)arg1;
- (void)setLogoText:(id)arg1;
- (int)transitType;
- (id)logoText;
- (id)footerImage;
- (id)backFieldBuckets;
- (id)frontFieldBuckets;
- (void)flushFormattedFieldValues;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
