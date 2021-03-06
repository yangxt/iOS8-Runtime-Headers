/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKShareePickerViewControllerDelegate>, NSArray, EKCalendarShareePicker;

@interface EKShareePickerViewController : UIViewController <EKEventAttendeePickerDelegate> {
    EKCalendarShareePicker *_picker;
    <EKShareePickerViewControllerDelegate> *_delegate;
}

@property(copy) NSArray * sharees;
@property <EKShareePickerViewControllerDelegate> * delegate;


- (void).cxx_destruct;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidLoad;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)cancel;
- (void)setDelegate:(id)arg1;
- (id)_recipientFromSharee:(id)arg1;
- (id)_shareeFromRecipient:(id)arg1;
- (void)add;
- (void)eventAttendeePicker:(id)arg1 cacheValidationStatus:(int)arg2 forEmail:(id)arg3;
- (int)eventAttendeePicker:(id)arg1 getValidationStatusForEmailAddress:(id)arg2;
- (void)setSearchAccountID:(id)arg1;
- (void)setSharees:(id)arg1;
- (id)sharees;

@end
