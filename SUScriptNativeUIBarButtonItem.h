/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptNativeUIBarButtonItem : SUScriptButtonNativeObject  {
    BOOL _isBackButton;
}

+ (id)objectWithDefaultButtonForScriptButton:(id)arg1;

- (id)systemItemString;
- (void)showConfirmationWithTitle:(id)arg1 animated:(BOOL)arg2;
- (void)setStyleFromString:(id)arg1;
- (void)connectButtonAction;
- (void)disconnectButtonAction;
- (void)hideConfirmationAnimated:(BOOL)arg1;
- (BOOL)isBackButton;
- (void)setupNativeObject;
- (void)destroyNativeObject;
- (BOOL)isShowingConfirmation;
- (void)setLoading:(BOOL)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageInsets;
- (void)setImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (int)buttonType;
- (BOOL)isLoading;
- (id)styleString;
- (void)setTag:(int)arg1;
- (int)tag;
- (id)image;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;

@end