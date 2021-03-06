/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class NSString;

@interface _HKCFGStringTerminal : _HKCFGTerminal  {
    BOOL _caseSensitive;
    NSString *_string;
}

@property(copy) NSString * string;
@property BOOL caseSensitive;


- (id)characterSet;
- (void)setCaseSensitive:(BOOL)arg1;
- (void).cxx_destruct;
- (void)setString:(id)arg1;
- (id)string;
- (id)_label;
- (BOOL)_scanValue:(id*)arg1 withScanner:(id)arg2;
- (unsigned int)_minimumLength;
- (BOOL)caseSensitive;

@end
