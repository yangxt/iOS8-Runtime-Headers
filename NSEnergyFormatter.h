/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSNumberFormatter;

@interface NSEnergyFormatter : NSFormatter  {
    void *_formatter;
    BOOL _isForFoodEnergyUse;
}

@property(copy) NSNumberFormatter * numberFormatter;
@property int unitStyle;
@property(getter=isForFoodEnergyUse) BOOL forFoodEnergyUse;


- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)stringForObjectValue:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setForFoodEnergyUse:(BOOL)arg1;
- (id)unitStringFromJoules:(double)arg1 usedUnit:(int*)arg2;
- (id)stringFromJoules:(double)arg1;
- (int)targetUnitFromJoules:(double)arg1;
- (BOOL)isForFoodEnergyUse;
- (id)stringFromValue:(double)arg1 unit:(int)arg2;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)unitStringFromValue:(double)arg1 unit:(int)arg2;
- (int)unitStyle;
- (void)setUnitStyle:(int)arg1;
- (id)numberFormatter;
- (void)setNumberFormatter:(id)arg1;

@end
