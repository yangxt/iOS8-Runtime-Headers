/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class SKUIItemOfferButton, NSString;

@interface RUPurchaseAlbumView : UIView  {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _alignmentRectInsets;
    SKUIItemOfferButton *_itemOfferButton;
    int _purchaseAlbumViewStyle;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } alignmentRectInsets;
@property(readonly) SKUIItemOfferButton * itemOfferButton;
@property int purchaseAlbumViewStyle;
@property(copy) NSString * title;


- (id)itemOfferButton;
- (int)purchaseAlbumViewStyle;
- (void)setPurchaseAlbumViewStyle:(int)arg1;
- (void)setPurchaseAlbumViewStyle:(int)arg1 animated:(BOOL)arg2;
- (void)_updateForStyle:(int)arg1 animated:(BOOL)arg2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (id)title;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAlignmentRectInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;

@end
