/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CIColor, UIColor;

@interface UICIColor : UIColor  {
    CIColor *_ciColor;
    UIColor *_rgbColor;
}


- (id)CIColor;
- (id)initWithCIColor:(id)arg1;
- (id)_rgbColor;
- (void)setStroke;
- (void)setFill;
- (BOOL)getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)getWhite:(float*)arg1 alpha:(float*)arg2;
- (id)colorWithAlphaComponent:(float)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (struct CGColor { }*)CGColor;
- (void)set;
- (id)description;
- (void)dealloc;

@end
