/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSColor : NSObject <NSCopying, NSSecureCoding, BSXPCCoding> {
    float _red;
    float _green;
    float _blue;
    float _alpha;
}

@property(readonly) float red;
@property(readonly) float green;
@property(readonly) float blue;
@property(readonly) float alpha;

+ (BOOL)supportsSecureCoding;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;

- (BOOL)isEqualToColor:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (float)blue;
- (float)green;
- (float)red;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (float)alpha;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
