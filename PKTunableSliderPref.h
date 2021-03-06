/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class UISlider, UIView;

@interface PKTunableSliderPref : PKTunablePref  {
    float _minVal;
    float _maxVal;
    UIView *_view;
    UISlider *_slider;
}

@property float minVal;
@property float maxVal;
@property(retain) UIView * view;
@property(retain) UISlider * slider;


- (void)restore:(id)arg1;
- (id)slider;
- (void)setSlider:(id)arg1;
- (void)setView:(id)arg1;
- (id)view;
- (void)takeValueFromView:(id)arg1;
- (float)maxVal;
- (float)minVal;
- (void)setMaxVal:(float)arg1;
- (void)setMinVal:(float)arg1;
- (id)viewWithContainedLabel:(id*)arg1;
- (id)initWithPrefName:(id)arg1 defaultValue:(id)arg2 minimumValue:(float)arg3 maximumValue:(float)arg4;
- (void)dealloc;

@end
