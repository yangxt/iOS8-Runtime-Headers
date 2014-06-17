/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PUPhotoStreamCreateTitleDelegate>, UILabel, UIColor, UINavigationItem, UITextField, UITextView;

@interface PUPhotoStreamCreateTitleViewController : UIViewController <UITextViewDelegate> {
    UITextField *_titleField;
    UILabel *_descriptionLabel;
    UITextView *_textView;
    UILabel *_textPlaceholderLabel;
    UIColor *_placeholderColor;
    UINavigationItem *_navItem;
    UILabel *_instructionLabel;
    <PUPhotoStreamCreateTitleDelegate> *_titleDelegate;
}

@property <PUPhotoStreamCreateTitleDelegate> * titleDelegate;


- (void)_setTitle:(id)arg1;
- (void).cxx_destruct;
- (id)_placeholderColor;
- (void)textViewDidChange:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)navigationItem;
- (void)setTitleDelegate:(id)arg1;
- (id)titleDelegate;
- (void)_cancelPost:(id)arg1;
- (void)_addConstraintsForInterfaceOrientation:(int)arg1;

@end