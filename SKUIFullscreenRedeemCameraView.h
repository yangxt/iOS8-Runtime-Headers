/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIView, SKUIRedeemTextField, UIImage, NSString, <SKUIRedeemCameraViewDelegate>;

@interface SKUIFullscreenRedeemCameraView : UIView <UITextFieldDelegate> {
    <SKUIRedeemCameraViewDelegate> *_delegate;
    UIView *_overlay;
    UIView *_redeemerView;
    SKUIRedeemTextField *_textField;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _keyboardRect;
    BOOL _enabled;
}

@property <SKUIRedeemCameraViewDelegate> * delegate;
@property BOOL enabled;
@property(retain) UIImage * image;
@property(copy) NSString * text;


- (void)_resumeRedeemer;
- (void)_hideKeyboard;
- (void)_pauseRedeemer;
- (void)textFieldTextDidChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)_tapGestureAction:(id)arg1;
- (id)_newTextFieldWithClientContext:(id)arg1;
- (id)initWithClientContext:(id)arg1;
- (void).cxx_destruct;
- (void)showKeyboard;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (id)image;
- (void)setText:(id)arg1;
- (id)text;
- (id)delegate;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (BOOL)enabled;
- (void)start;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
