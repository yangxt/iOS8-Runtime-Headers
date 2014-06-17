/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSNumberFormatter;

@interface NSMassFormatter : NSFormatter  {
    void *_formatter;
    BOOL _isForPersonMassUse;
}

@property(copy) NSNumberFormatter * numberFormatter;
@property int unitStyle;
@property(getter=isForPersonMassUse) BOOL forPersonMassUse;


- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)stringForObjectValue:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setForPersonMassUse:(BOOL)arg1;
- (id)unitStringFromKilograms:(double)arg1 usedUnit:(int*)arg2;
- (int)targetUnitFromKilograms:(double)arg1;
- (BOOL)isForPersonMassUse;
- (id)stringFromKilograms:(double)arg1;
- (id)stringFromValue:(double)arg1 unit:(int)arg2;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)unitStringFromValue:(double)arg1 unit:(int)arg2;
- (int)unitStyle;
- (void)setUnitStyle:(int)arg1;
- (id)numberFormatter;
- (void)setNumberFormatter:(id)arg1;

@end