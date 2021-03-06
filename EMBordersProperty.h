/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDBorders, OITSUColor;

@interface EMBordersProperty : CMProperty <NSCopying> {
    EDBorders *edValue;
    OITSUColor *mBorderColor;
    OITSUColor *mBorderTopColor;
    OITSUColor *mBorderLeftColor;
    OITSUColor *mBorderBottomColor;
    OITSUColor *mBorderRightColor;
    int mBorderStyle[5];
    int mBorderWidth[5];
}


- (id)widthHashNumber;
- (id)styleHashNumber;
- (int*)borderWidths;
- (int*)borderStyles;
- (id)initWithEDBorders:(id)arg1;
- (void)setBorderStyleAndWidth:(int)arg1 location:(unsigned int)arg2;
- (BOOL)hasSameWidthsAs:(id)arg1;
- (BOOL)hasSameStylesAs:(id)arg1;
- (BOOL)hasSameColorsAs:(id)arg1;
- (void)setNoneAtLocation:(int)arg1;
- (BOOL)isNoneAtLocation:(int)arg1;
- (id)stringFromColor:(id)arg1;
- (id)stringFromWidthEnum:(int)arg1;
- (id)stringFromStyleEnum:(int)arg1;
- (id)colorString;
- (id)widthString;
- (id)cssString;
- (id)initWithOADStroke:(id)arg1;
- (id)cssStringForName:(id)arg1;
- (id)borderColor;
- (id)styleString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;

@end
