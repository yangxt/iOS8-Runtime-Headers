/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLVibrationPattern : NSObject  {
    id _contextObject;
    id _propertyListRepresentation;
    id _complexPatternDescription;
    double _duration;
}

@property(readonly) id propertyListRepresentation;
@property(readonly) double computedDuration;
@property(retain) id contextObject;
@property(readonly) id _artificiallyRepeatingPropertyListRepresentation;
@property(setter=_setDuration:) double _duration;
@property(setter=_setPropertyListRepresentation:,retain) id _propertyListRepresentation;
@property(setter=_setComplexPatternDescription:,retain) id _complexPatternDescription;

+ (id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)arg1;
+ (BOOL)isValidVibrationPatternPropertyListRepresentation:(id)arg1;
+ (id)simpleVibrationPatternWithVibrationDuration:(double)arg1 pauseDuration:(double)arg2;
+ (id)noneVibrationPattern;

- (id)_complexPatternDescription;
- (id)_propertyListRepresentation;
- (void)_setComplexPatternDescription:(id)arg1;
- (void)_setPropertyListRepresentation:(id)arg1;
- (id)_initWithPropertyListRepresentation:(id)arg1 skipValidation:(BOOL)arg2;
- (id)_artificiallyRepeatingPropertyListRepresentation;
- (double)computedDuration;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (void)setContextObject:(id)arg1;
- (id)contextObject;
- (void)appendVibrationComponentWithDuration:(double)arg1 isPause:(BOOL)arg2;
- (id)propertyListRepresentation;
- (void)_setDuration:(double)arg1;
- (double)_duration;
- (void)dealloc;
- (id)init;

@end
