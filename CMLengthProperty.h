/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMLengthProperty : CMProperty  {
    double value;
    int unitType;
}

+ (id)cssStringValue:(double)arg1 unit:(int)arg2;
+ (double)convertToPoints:(double)arg1 unit:(int)arg2;

- (int)compareValue:(id)arg1;
- (id)initWithNumber:(double)arg1;
- (id)cssString;
- (void)addNumber:(double)arg1 unit:(int)arg2;
- (id)cssStringForName:(id)arg1;
- (int)unitType;
- (id)initWithNumber:(double)arg1 unit:(int)arg2;
- (double)value;
- (int)intValue;
- (id)description;

@end