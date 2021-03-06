/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDString, OADGraphicProperties, CHDFormula, CHDChart;

@interface CHDTitle : NSObject  {
    CHDChart *mChart;
    boolmIsAutoGenerated;
    boolmPositionAutoGenerated;
    boolmSizeAutoGenerated;
    CHDFormula *mName;
    EDString *mLastCachedName;
    OADGraphicProperties *mGraphicProperties;
    double mRotation;
}


- (double)titleRotationAngle;
- (bool)isTitleVisible;
- (void)setIsSizeAutoGenerated:(bool)arg1;
- (bool)isPositionAutoGenerated;
- (bool)isAutoGenerated;
- (bool)isCachedTitleEmpty;
- (bool)isSizeAutoGenerated;
- (void)setTitleRotationAngle:(double)arg1;
- (void)setIsPositionAutoGenerated:(bool)arg1;
- (void)setLastCachedName:(id)arg1;
- (void)setIsAutoGenerated:(bool)arg1;
- (void)setGraphicProperties:(id)arg1;
- (id)initWithChart:(id)arg1;
- (id)lastCachedName;
- (id)graphicProperties;
- (id)name;
- (void)setName:(id)arg1;
- (void)dealloc;

@end
