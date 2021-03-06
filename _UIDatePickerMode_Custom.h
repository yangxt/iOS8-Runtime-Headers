/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSArray;

@interface _UIDatePickerMode_Custom : _UIDatePickerMode  {
    NSString *_originalFormat;
    NSArray *_components;
    NSArray *_sortedComponents;
    int _displayedUnits;
    int _desiredUnits;
}


- (id)_componentForCalendarUnit:(unsigned int)arg1;
- (id)components;
- (int)titleAlignmentForCalendarUnit:(unsigned int)arg1;
- (id)dateForRow:(int)arg1 inCalendarUnit:(unsigned int)arg2;
- (int)valueForRow:(int)arg1 inCalendarUnit:(unsigned int)arg2;
- (unsigned int)nextUnitLargerThanUnit:(unsigned int)arg1;
- (unsigned int)nextUnitSmallerThanUnit:(unsigned int)arg1;
- (unsigned int)extractableCalendarUnits;
- (float)widthForCalendarUnit:(unsigned int)arg1 font:(id)arg2 maxWidth:(float)arg3;
- (id)dateFormatForCalendarUnit:(unsigned int)arg1;
- (id)initWithFormatString:(id)arg1 datePickerView:(id)arg2;
- (void)resetComponentWidths;
- (unsigned int)calendarUnitForComponent:(int)arg1;
- (int)componentForCalendarUnit:(unsigned int)arg1;
- (int)displayedCalendarUnits;
- (void)noteCalendarChanged;
- (int)numberOfRowsInComponent:(int)arg1;
- (unsigned int)numberOfComponents;
- (void)dealloc;

@end
