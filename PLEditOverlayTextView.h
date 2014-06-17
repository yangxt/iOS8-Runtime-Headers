/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UILabel, NSString, UIView;

@interface PLEditOverlayTextView : UIView  {
    UIView *__backgroundView;
    UILabel *__textLabel;
}

@property(copy) NSString * text;
@property(readonly) UIView * _backgroundView;
@property(readonly) UILabel * _textLabel;


- (void)_commonPLEditOverlayTextViewInitialization;
- (id)_textLabel;
- (void)setText:(id)arg1;
- (id)text;
- (id)_backgroundView;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end