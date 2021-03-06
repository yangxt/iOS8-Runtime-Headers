/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EKRecurrenceOrdinalChooserController, EKUICustomRecurrenceIntervalViewController, UITableView, EKRecurrenceRule, EKRecurrenceMonthlyChooserController, NSDate, EKRecurrenceMonthChooserController, UISwitch, EKRecurrenceWeekdayChooserController, NSTimeZone, UIPickerView, UITableViewCell, NSString, EKRecurrenceChooserController;

@interface EKUICustomRecurrenceViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIPickerViewDelegate, UIPickerViewDataSource, EKRecurrenceChooserControllerDelegate> {
    int _cachedFrequency;
    int _cachedInterval;
    EKRecurrenceRule *_cachedRecurrenceRule;
    BOOL _showingFrequencyPicker;
    BOOL _showingIntervalPicker;
    UITableViewCell *_frequencySummaryCell;
    UITableViewCell *_intervalSummaryCell;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    UITableView *_tableView;
    EKRecurrenceChooserController *_currentChooser;
    EKRecurrenceWeekdayChooserController *_weeklyChooser;
    EKRecurrenceMonthlyChooserController *_monthlyChooser;
    EKRecurrenceMonthChooserController *_yearlyChooser;
    EKRecurrenceOrdinalChooserController *_yearlyOrdinalChooser;
    NSDate *_startDate;
    NSTimeZone *_timeZone;
    UIPickerView *_frequencyPickerView;
    EKUICustomRecurrenceIntervalViewController *_intervalPickerViewController;
    UISwitch *_yearOrdinalSwitch;
    NSString *_recurrenceSummaryString;
}

@property(copy) id completionBlock;
@property(retain) UITableView * tableView;
@property EKRecurrenceChooserController * currentChooser;
@property(retain) EKRecurrenceWeekdayChooserController * weeklyChooser;
@property(retain) EKRecurrenceMonthlyChooserController * monthlyChooser;
@property(retain) EKRecurrenceMonthChooserController * yearlyChooser;
@property(retain) EKRecurrenceOrdinalChooserController * yearlyOrdinalChooser;
@property(retain) NSDate * startDate;
@property(retain) NSTimeZone * timeZone;
@property(retain) UIPickerView * frequencyPickerView;
@property(retain) EKUICustomRecurrenceIntervalViewController * intervalPickerViewController;
@property(retain) UISwitch * yearOrdinalSwitch;
@property(copy) NSString * recurrenceSummaryString;

+ (BOOL)isRecurrenceRuleOrdinal:(id)arg1;

- (id)startDate;
- (void)setStartDate:(id)arg1;
- (void).cxx_destruct;
- (id)timeZone;
- (id)tableView;
- (void)setCompletionBlock:(id)arg1;
- (id)completionBlock;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)setTableView:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)setYearOrdinalSwitch:(id)arg1;
- (void)setIntervalPickerViewController:(id)arg1;
- (void)setFrequencyPickerView:(id)arg1;
- (void)setYearlyOrdinalChooser:(id)arg1;
- (void)setYearlyChooser:(id)arg1;
- (void)setMonthlyChooser:(id)arg1;
- (void)setWeeklyChooser:(id)arg1;
- (void)recurrenceChooser:(id)arg1 wantsRowReload:(int)arg2;
- (void)recurrenceChooserUpdated:(id)arg1;
- (void)recurrenceChooserWantsReload:(id)arg1;
- (void)_setShowingIntervalPicker:(BOOL)arg1;
- (void)_setShowingFrequencyPicker:(BOOL)arg1;
- (id)monthlyChooser;
- (id)weeklyChooser;
- (void)_updateFrequencyRows;
- (void)_updateTableSectionsFromFrequency:(int)arg1 toFrequency:(int)arg2;
- (void)setCurrentChooser:(id)arg1;
- (id)_chooserForFrequency:(int)arg1;
- (void)setRecurrenceSummaryString:(id)arg1;
- (void)_updateCustomPickerView;
- (void)_refreshCacheAndPickers;
- (void)_updateSummaryLabel;
- (void)setRecurrenceRule:(id)arg1 shouldUpdatePickers:(BOOL)arg2;
- (id)yearOrdinalSwitch;
- (id)yearlyChooser;
- (void)_collapseAllPickers;
- (void)_updateRecurrenceRule;
- (void)_updateIntervalPicker;
- (id)recurrenceSummaryString;
- (void)_toggleInlineSpinnerForTag:(int)arg1;
- (id)frequencyPickerView;
- (id)currentChooser;
- (id)yearlyOrdinalChooser;
- (id)intervalPickerViewController;
- (id)_stringForFrequency:(int)arg1 interval:(int)arg2;
- (id)_stringForFrequency:(int)arg1;
- (int)_tagForIndexPath:(id)arg1;
- (int)_numberOfRowsForSection:(int)arg1;
- (void)_frequencyPickerViewUpdated;
- (void)_yearOrdinalSwitchChanged:(id)arg1;
- (void)_createChoosersAndControls;
- (id)initWithStartDate:(id)arg1 timeZone:(id)arg2;
- (void)setRecurrenceRule:(id)arg1;
- (id)recurrenceRule;

@end
