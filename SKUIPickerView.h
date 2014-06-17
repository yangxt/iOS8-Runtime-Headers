/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class _UIBackdropView, <SKUIPickerViewDelegate>, UIView, NSArray, UIPickerView;

@interface SKUIPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate> {
    _UIBackdropView *_backdropView;
    <SKUIPickerViewDelegate> *_delegate;
    UIPickerView *_pickerView;
    UIView *_separatorView;
    NSArray *_titles;
}

@property <SKUIPickerViewDelegate> * delegate;
@property int selectedItemIndex;


- (void)setSelectedItemIndex:(int)arg1;
- (int)selectedItemIndex;
- (id)initWithTitles:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (void)layoutSubviews;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end