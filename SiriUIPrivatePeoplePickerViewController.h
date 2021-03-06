/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class SiriUIObjectPickerViewController, SAABPersonPicker;

@interface SiriUIPrivatePeoplePickerViewController : SiriUISnippetViewController <SiriUIObjectPickerViewControllerDelegate> {
    SAABPersonPicker *_picker;
    SiriUIObjectPickerViewController *_pickerController;
}


- (float)desiredHeightForTransparentFooterView;
- (void)configureReusableTransparentFooterView:(id)arg1;
- (Class)transparentFooterViewClass;
- (id)initWithSnippet:(id)arg1;
- (void)pickerViewController:(id)arg1 didSelectObject:(id)arg2 fromPicker:(id)arg3;
- (void)pickerViewController:(id)arg1 willDismissPicker:(id)arg2;
- (void)pickerViewController:(id)arg1 willPresentPicker:(id)arg2;
- (id)viewControllerForPickerPresentation:(id)arg1;
- (id)_pickerController;
- (void).cxx_destruct;
- (void)loadView;
- (float)desiredHeightForWidth:(float)arg1;

@end
