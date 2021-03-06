/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIImageView, UIImage, <ABPersonImageDataDelegate>, <ABStyleProvider>, ABUIPerson, ABClippingImageView;

@interface ABPersonImageView : ABPasteboardControl  {
    UIImageView *_personImageView;
    UIImageView *_editingImageView;
    ABClippingImageView *_emptyImageView;
    ABClippingImageView *_pasteboardMaskImageView;
    UIImage *_personImage;
    BOOL _isEditing;
    BOOL _showLabel;
    BOOL _needsReflow;
    BOOL _needsReload;
    BOOL _allowsEditing;
    BOOL _multiplePhotoBackdropEnabled;
    ABUIPerson *_displayedPerson;
    <ABStyleProvider> *_styleProvider;
    <ABPersonImageDataDelegate> *_imageDataDelegate;
}

@property(retain) ABUIPerson * displayedPerson;
@property(retain) <ABStyleProvider> * styleProvider;
@property BOOL allowsEditing;
@property BOOL multiplePhotoBackdropEnabled;
@property <ABPersonImageDataDelegate> * imageDataDelegate;
@property(readonly) UIImage * maskImage;
@property(readonly) UIImage * backgroundImage;
@property(readonly) UIImage * overlayImage;
@property(readonly) UIImage * attributionImage;

+ (id)newImageWithName:(id)arg1;

- (void)setAllowsEditing:(BOOL)arg1;
- (BOOL)allowsEditing;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (id)backgroundImage;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)reload;
- (void)layoutSubviews;
- (void)setDisplayedPerson:(id)arg1;
- (void)reflow;
- (void)dealloc;
- (BOOL)multiplePhotoBackdropEnabled;
- (void)setMultiplePhotoBackdropEnabled:(BOOL)arg1;
- (id)_newDictionaryWithImageData;
- (id)_supportedPasteboardImageTypesIncludingCustomTypes:(BOOL)arg1;
- (id)pasteboardMaskImageView;
- (void)setNeedsReflow;
- (id)copyDefaultImageForPerson:(id)arg1;
- (void)reflowIfNeeded;
- (void)reloadIfNeeded;
- (id)emptyImageView;
- (id)framedPhoto;
- (id)editingImageView;
- (void)_drawEditLabelInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)attributionImage;
- (id)overlayImage;
- (id)maskImage;
- (void)abMenuControllerWillHide;
- (void)abMenuControllerWillShow:(id)arg1;
- (BOOL)abShouldShowMenu;
- (void)setIsEditing:(BOOL)arg1 animate:(BOOL)arg2;
- (id)imageDataDelegate;
- (void)setImageDataDelegate:(id)arg1;
- (id)personImageView;
- (id)displayedPerson;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;
- (void)setNeedsReload;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end
