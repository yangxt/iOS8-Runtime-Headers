/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PUTiltWheelDataSource>, NSDictionary;

@interface PUTiltWheel : UIView  {
    <PUTiltWheelDataSource> *_dataSource;
    NSDictionary *__dotsByDegree;
    NSDictionary *__labelsByDegree;
    unsigned int __numericIndicatorDegreeStep;
    int __tiltWheelOrientation;
}

@property <PUTiltWheelDataSource> * dataSource;
@property(setter=_setDotsByDegree:,copy) NSDictionary * _dotsByDegree;
@property(setter=_setLabelsByDegree:,copy) NSDictionary * _labelsByDegree;
@property(setter=_setNumericIndicatorDegreeStep:) unsigned int _numericIndicatorDegreeStep;
@property(setter=_setTiltWheelOrientation:) int _tiltWheelOrientation;


- (void).cxx_destruct;
- (id)dataSource;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (unsigned int)_numericIndicatorDegreeStep;
- (float)_dotIndicatorSizeForDegree:(int)arg1;
- (int)_tiltWheelOrientation;
- (struct CGPoint { float x1; float x2; })_baseViewCenterForRadius:(float)arg1 aroundCenter:(struct CGPoint { float x1; float x2; })arg2;
- (void)_layoutViewsByDegree:(id)arg1 aroundRadius:(float)arg2;
- (float)_dotLayoutRadius;
- (id)_labelsByDegree;
- (id)_dotsByDegree;
- (void)_setLabelsByDegree:(id)arg1;
- (void)_setDotsByDegree:(id)arg1;
- (id)_makeLabelForDegree:(int)arg1;
- (id)_makeDotForDegree:(int)arg1;
- (unsigned int)_countOfIndicatorsFrom:(float)arg1 to:(float)arg2 step:(unsigned int)arg3;
- (void)_setTiltWheelOrientation:(int)arg1;
- (void)_setNumericIndicatorDegreeStep:(unsigned int)arg1;
- (void)_purgeCachedIndicators;
- (void)_layoutLabels;
- (void)_layoutDots;

@end