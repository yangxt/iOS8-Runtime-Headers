/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABNamePropertyGroup, UILabel, NSString, ABStyleProvider, UIView, UIFont;

@interface ABPersonNameDisplayView : ABPasteboardControl  {
    ABNamePropertyGroup *_namePropertyGroup;
    int _primaryProperty;
    NSString *_primaryPropertyFormattingCountryCode;
    float _minimumHeight;
    BOOL _alignOnBottom;
    UILabel *_headlineLabel;
    UILabel *_tagLineLabel;
    UILabel *_messageLabel;
    UILabel *_messageDetailLabel;
    UIFont *_messageFont;
    UIFont *_messageDetailFont;
    ABStyleProvider *_styleProvider;
    NSString *_customHeadline;
    NSString *_customTagLine;
    NSString *_customMessage;
    NSString *_customMessageDetail;
    UIView *_customMessageView;
}

@property(retain) ABNamePropertyGroup * namePropertyGroup;
@property int primaryProperty;
@property(copy) NSString * primaryPropertyFormattingCountryCode;
@property float minimumHeight;
@property BOOL alignOnBottom;
@property(copy) NSString * headline;
@property(copy) NSString * tagLine;
@property(copy) NSString * message;
@property(retain) UIFont * messageFont;
@property(copy) NSString * messageDetail;
@property(retain) UIFont * messageDetailFont;
@property(retain) ABStyleProvider * styleProvider;
@property(retain) UIView * customMessageView;


- (void)setPrimaryProperty:(int)arg1;
- (void)setMessage:(id)arg1;
- (void)copy:(id)arg1;
- (id)message;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)customMessageView;
- (id)messageDetailFont;
- (id)messageFont;
- (id)messageDetail;
- (id)tagLine;
- (id)headline;
- (void)setAlignOnBottom:(BOOL)arg1;
- (BOOL)alignOnBottom;
- (void)setMinimumHeight:(float)arg1;
- (float)minimumHeight;
- (void)setPrimaryPropertyFormattingCountryCode:(id)arg1;
- (id)primaryPropertyFormattingCountryCode;
- (id)namePropertyGroup;
- (void)_setSubviewsHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)reloadNameDataAnimated:(BOOL)arg1;
- (void)setCustomMessageView:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setTagLine:(id)arg1;
- (void)setHeadline:(id)arg1;
- (void)setNamePropertyGroup:(id)arg1;
- (void)_setLabel:(id)arg1 highlighted:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_appendString:(id)arg1 withFormatKey:(id)arg2 toTagLine:(id)arg3;
- (id)_copyTagLine;
- (id)_copyPrimaryValue;
- (void)_adjustLabelTextColorForPasteboardSelection:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })multilineLabel:(id)arg1 sizeThatFits:(struct CGSize { float x1; float x2; })arg2;
- (float)_heightForLabelsForWidth:(float)arg1;
- (void)initializeHeadlineAndTaglineIfNeeded;
- (id)_newLabelWithFont:(id)arg1 numberOfLines:(unsigned int)arg2;
- (void)_setFont:(id)arg1 isDetail:(BOOL)arg2;
- (void)_setMessageText:(id)arg1 isDetail:(BOOL)arg2;
- (void)_updateTagLineText;
- (void)_updateHeadlineText;
- (void)abMenuControllerWillHide;
- (void)abMenuControllerWillShow:(id)arg1;
- (BOOL)abShouldShowMenu;
- (int)primaryProperty;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;

@end