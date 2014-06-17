/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class UIImageView, UILabel, SiriUIKeyline, SiriUISnippetViewController, NSString, UIButton;

@interface SiriUIReusableHeaderView : UICollectionReusableView <SiriUIReusableView, SiriUISizableHeaderView> {
    UILabel *_headerLabel;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInsets;
    SiriUIKeyline *_keyline;
    UIImageView *_chevronView;
    SiriUISnippetViewController *_snippetViewController;
    NSString *_titleText;
    UIButton *_headerAreaButton;
    int _keylineType;
}

@property(copy) NSString * titleText;
@property(readonly) UIButton * headerAreaButton;
@property int keylineType;
@property SiriUISnippetViewController * snippetViewController;

+ (id)elementKind;
+ (id)reuseIdentifier;
+ (float)defaultHeight;

- (id)titleText;
- (id)headerAreaButton;
- (void)_configureHeaderLabelForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)keylineType;
- (void)setKeylineType:(int)arg1;
- (void)setSnippetViewController:(id)arg1;
- (id)snippetViewController;
- (void).cxx_destruct;
- (void)setTitleText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)desiredHeightForWidth:(float)arg1;

@end