/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDGradientDoubleColorStop : CUIPSDGradientColorStop <NSCoding> {
    struct _psdGradientColor { 
        double red; 
        double green; 
        double blue; 
        double alpha; 
    } leadOutColor;
}

+ (id)doubleColorStopWithLocation:(float)arg1 leadInColor:(struct _psdGradientColor { double x1; double x2; double x3; double x4; })arg2 leadOutColor:(struct _psdGradientColor { double x1; double x2; double x3; double x4; })arg3;
+ (void)initialize;

- (struct _psdGradientColor { double x1; double x2; double x3; double x4; })leadInColor;
- (id)initWithLocation:(float)arg1 leadInColor:(struct _psdGradientColor { double x1; double x2; double x3; double x4; })arg2 leadOutColor:(struct _psdGradientColor { double x1; double x2; double x3; double x4; })arg3;
- (BOOL)isDoubleStop;
- (struct _psdGradientColor { double x1; double x2; double x3; double x4; })leadOutColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
