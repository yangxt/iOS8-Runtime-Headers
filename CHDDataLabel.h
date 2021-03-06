/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADGraphicProperties, EDResources;

@interface CHDDataLabel : NSObject  {
    EDResources *mResources;
    unsigned int mStringIndex;
    unsigned int mContentFormatId;
    int mPosition;
    boolmShowLeaderLines;
    boolmShowCategoryName;
    boolmShowSeriesName;
    boolmShowPercent;
    boolmShowBubbleSize;
    boolmShowValue;
    boolmShowLegendKey;
    boolmIsPositionAffineTransform;
    double mRotation;
    OADGraphicProperties *mGraphicProperties;
}

+ (id)dataLabelWithResources:(id)arg1;

- (void)setStringIndex:(unsigned int)arg1;
- (unsigned int)stringIndex;
- (bool)isPositionAffineTransform;
- (void)setIsPositionAffineTransform:(bool)arg1;
- (void)setShowLegendKey:(bool)arg1;
- (bool)isShowLegendKey;
- (void)setShowBubbleSize:(bool)arg1;
- (bool)isShowBubbleSize;
- (void)setShowPercent:(bool)arg1;
- (bool)isShowPercent;
- (void)setShowSeriesName:(bool)arg1;
- (bool)isShowSeriesName;
- (void)setShowCategoryName:(bool)arg1;
- (bool)isShowCategoryName;
- (void)setShowLeaderLines:(bool)arg1;
- (bool)isShowLeaderLines;
- (void)setContentFormat:(id)arg1;
- (id)initWithResources:(id)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setContentFormatId:(unsigned int)arg1;
- (bool)isShowValue;
- (id)contentFormat;
- (unsigned int)contentFormatId;
- (id)graphicProperties;
- (void)setString:(id)arg1;
- (void)setShowValue:(bool)arg1;
- (id)string;
- (void)setRotationAngle:(double)arg1;
- (double)rotationAngle;
- (int)position;
- (void)setPosition:(int)arg1;
- (void)dealloc;

@end
