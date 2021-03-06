/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@class CIFilter;

@interface BLAdjustmentModel : NSObject  {
    float _whiteLevel;
    float _blackLevel;
    float _brightness;
    float _contrast;
    float _autoShadowsMaxLevel;
    float _autoBlackLevelAtShadowsMaxLevel;
    int _highlightShadowAdjustVersion;
    BOOL _hasPentaCurve;
    BOOL _reprocessPentaCurve;
    struct { 
        int type; 
        float x; 
        float y; 
        float ri; 
        float gq; 
        float b; 
    } _whiteBalance;
    BOOL _hasWhiteBalance;
    BOOL _reprocessWhiteBalance;
    float _saturation;
    BOOL _useVibrancy;
    BOOL _hasSaturation;
    BOOL _reprocessSaturation;
    float _faceBalanceWarmth;
    BOOL _hasFaceBalance;
    BOOL _reprocessFaceBalance;
    float _saturationSky;
    float _saturationGrass;
    BOOL _hasSkyAndGrass;
    BOOL _reprocessSkyAndGrass;
    float _underwaterBalanceDepthStrength;
    float _underwaterBalanceWaterBlend;
    BOOL _hasUnderwaterBalance;
    BOOL _reprocessUnderwaterBalance;
    BOOL _hasColor;
    BOOL _hasExposure;
    BOOL _isChainBuilt;
    float _histogramBlackPoint;
    float _histogramWhitePoint;
    float _histogramAverageLinearRed;
    float _histogramAverageLinearGreen;
    float _histogramAverageLinearBlue;
    CIFilter *_curvesFilter;
    CIFilter *_colorFilter;
    CIFilter *_vibranceFilter;
    CIFilter *_faceBalanceFilter;
    CIFilter *_skyAndGrassFilter;
    CIFilter *_underwaterBalanceFilter;
    CIFilter *_highlightsAndShadowsFilter;
    CIFilter *_tempAndTintFilter;
    CIFilter *_colorBalanceFilter;
}

@property(retain) CIFilter * curvesFilter;
@property(retain) CIFilter * colorFilter;
@property(retain) CIFilter * vibranceFilter;
@property(retain) CIFilter * faceBalanceFilter;
@property(retain) CIFilter * skyAndGrassFilter;
@property(retain) CIFilter * underwaterBalanceFilter;
@property(retain) CIFilter * highlightsAndShadowsFilter;
@property(retain) CIFilter * tempAndTintFilter;
@property(retain) CIFilter * colorBalanceFilter;

+ (struct CGPoint { float x1; float x2; })pointOnCurveFromPoint:(struct CGPoint { float x1; float x2; })arg1 withSlope:(float)arg2 andCurveData:(float*)arg3;
+ (id)rampImage;
+ (id)exposureValuesForToneCurveData:(id)arg1 highlightsAndShadowsData:(id)arg2 andHistogramData:(id)arg3;

- (BOOL)hasAdjustments;
- (id)tempAndTintFilter;
- (id)colorBalanceFilter;
- (id)skyAndGrassFilter;
- (id)faceBalanceFilter;
- (id)vibranceFilter;
- (id)colorFilter;
- (id)highlightsAndShadowsFilter;
- (id)curvesFilter;
- (void)setColorBalanceFilter:(id)arg1;
- (void)setTempAndTintFilter:(id)arg1;
- (void)setHighlightsAndShadowsFilter:(id)arg1;
- (void)setSkyAndGrassFilter:(id)arg1;
- (void)setVibranceFilter:(id)arg1;
- (void)setFaceBalanceFilter:(id)arg1;
- (void)setColorFilter:(id)arg1;
- (void)setCurvesFilter:(id)arg1;
- (void)updateAdjustmentsDictionary:(id)arg1 andAnalysisDictionary:(id)arg2;
- (void)setUnderwaterBalanceFilter:(id)arg1;
- (id)underwaterBalanceFilter;
- (id)adjustedImageFromImage:(id)arg1;
- (void)buildChain;
- (BOOL)hasColor;
- (BOOL)hasExposure;
- (void)releaseChain;
- (id)initWithAdjustmentsDictionary:(id)arg1 andAnalysisDictionary:(id)arg2;
- (void)reset;
- (void)dealloc;
- (id)init;

@end
