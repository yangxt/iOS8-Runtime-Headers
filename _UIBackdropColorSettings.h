/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIBackdropViewSettings, UIColor;

@interface _UIBackdropColorSettings : NSObject  {
    BOOL _hasObservedValues;
    float _averageHue;
    float _averageSaturation;
    float _averageBrightness;
    float _contrast;
    _UIBackdropViewSettings *_parentSettings;
    float _previousAverageHue;
    float _previousAverageSaturation;
    float _previousAverageBrightness;
    float _previousContrast;
}

@property float averageHue;
@property float averageSaturation;
@property float averageBrightness;
@property float contrast;
@property(readonly) UIColor * color;
@property _UIBackdropViewSettings * parentSettings;
@property float previousAverageHue;
@property float previousAverageSaturation;
@property float previousAverageBrightness;
@property float previousContrast;
@property BOOL hasObservedValues;


- (BOOL)applyCABackdropLayerStatistics:(id)arg1;
- (BOOL)hasObservedValues;
- (float)previousContrast;
- (float)previousAverageBrightness;
- (float)previousAverageSaturation;
- (float)previousAverageHue;
- (id)parentSettings;
- (void)setHasObservedValues:(BOOL)arg1;
- (void)setPreviousContrast:(float)arg1;
- (void)setPreviousAverageBrightness:(float)arg1;
- (void)setPreviousAverageSaturation:(float)arg1;
- (void)setPreviousAverageHue:(float)arg1;
- (float)contrast;
- (float)averageSaturation;
- (float)averageHue;
- (void)setParentSettings:(id)arg1;
- (float)averageBrightness;
- (void)setDefaultValues;
- (id)color;
- (void)setContrast:(float)arg1;
- (void)setAverageBrightness:(float)arg1;
- (void)setAverageSaturation:(float)arg1;
- (void)setAverageHue:(float)arg1;
- (void)setValuesFromModel:(id)arg1;

@end