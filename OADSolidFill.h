/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColor;

@interface OADSolidFill : OADFill  {
    OADColor *mColor;
    BOOL mIsColorOverridden;
}

+ (id)blackFill;
+ (id)whiteFill;
+ (id)defaultProperties;

- (id)initWithDefaults;
- (void)setStyleColor:(id)arg1;
- (BOOL)isColorOverridden;
- (void)setColor:(id)arg1;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end