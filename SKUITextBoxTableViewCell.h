/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUITextBoxView;

@interface SKUITextBoxTableViewCell : SKUITableViewCell  {
    SKUITextBoxView *_textBoxView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _textBoxInsets;
}

@property(readonly) SKUITextBoxView * textBoxView;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } textBoxInsets;


- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textBoxInsets;
- (void)setTextBoxInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)textBoxView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;

@end
