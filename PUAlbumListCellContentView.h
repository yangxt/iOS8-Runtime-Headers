/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class <PUAlbumListCellDelegate>, UILabel, UIButton, UIView, UITextField, NSString, PUStackView;

@interface PUAlbumListCellContentView : UIView <UITextFieldDelegate> {
    BOOL _combinesPhotoDecorations;
    BOOL _attemptsDrawingLabels;
    BOOL _editing;
    BOOL _enabled;
    BOOL _pinned;
    BOOL _showsDeleteButtonWhenEditing;
    BOOL __showsTitleAndSubtitle;
    BOOL __canDrawLabels;
    <PUAlbumListCellDelegate> *_delegate;
    PUStackView *_stackView;
    UIView *_customImageView;
    NSString *_title;
    NSString *_subtitle;
    float _xInset;
    int _layout;
    unsigned int _editCapabilities;
    UITextField *__titleTextField;
    UILabel *__titleLabel;
    UILabel *__subtitleLabel;
    UIButton *__deleteButton;
    UIButton *__pinButton;
}

@property <PUAlbumListCellDelegate> * delegate;
@property(retain) PUStackView * stackView;
@property BOOL combinesPhotoDecorations;
@property(retain) UIView * customImageView;
@property(copy) NSString * title;
@property(copy) NSString * subtitle;
@property BOOL attemptsDrawingLabels;
@property float xInset;
@property int layout;
@property unsigned int editCapabilities;
@property(getter=isEditing) BOOL editing;
@property(getter=isEnabled) BOOL enabled;
@property(getter=isPinned) BOOL pinned;
@property BOOL showsDeleteButtonWhenEditing;
@property(setter=_setShowsTitleAndSubtitle:) BOOL _showsTitleAndSubtitle;
@property(setter=_setTitleTextField:,retain) UITextField * _titleTextField;
@property(setter=_setTitleLabel:,retain) UILabel * _titleLabel;
@property(setter=_setSubtitleLabel:,retain) UILabel * _subtitleLabel;
@property(setter=_setCanDrawLabels:) BOOL _canDrawLabels;
@property(setter=_setDeleteButton:,retain) UIButton * _deleteButton;
@property(setter=_setPinButton:,retain) UIButton * _pinButton;

+ (void)initialize;
+ (void)_updateLabelGlobalCachedSizes;

- (void).cxx_destruct;
- (void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSubtitle:(id)arg1;
- (void)setLayout:(int)arg1;
- (void)setPinned:(BOOL)arg1;
- (BOOL)isPinned;
- (id)subtitle;
- (id)_titleLabel;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (int)layout;
- (void)setEditing:(BOOL)arg1;
- (void)prepareForReuse;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isEditing;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (id)title;
- (id)delegate;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setEditCapabilities:(unsigned int)arg1;
- (unsigned int)editCapabilities;
- (BOOL)combinesPhotoDecorations;
- (void)setAttemptsDrawingLabels:(BOOL)arg1;
- (void)cancelPerformRetitleAction;
- (void)setShowsDeleteButtonWhenEditing:(BOOL)arg1;
- (void)setXInset:(float)arg1;
- (void)setCustomImageView:(id)arg1;
- (void)setShowsTitle:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setCombinesPhotoDecorations:(BOOL)arg1;
- (void)_setSubtitleLabel:(id)arg1;
- (float)_titleFieldAlpha;
- (int)_textAlignmentForLayout:(int)arg1;
- (void)_setTitleTextField:(id)arg1;
- (void)_setTitleLabel:(id)arg1;
- (void)_setPinButton:(id)arg1;
- (void)_pinAction:(id)arg1;
- (void)_deleteAction:(id)arg1;
- (BOOL)showsDeleteButtonWhenEditing;
- (void)_setCanDrawLabels:(BOOL)arg1;
- (void)_updatePinButtonAnimated:(BOOL)arg1;
- (void)_updateDeleteButtonAnimated:(BOOL)arg1;
- (void)_setCanDrawLabels:(BOOL)arg1 updateLabelsNow:(BOOL)arg2;
- (void)_updateStackViewAnimated:(BOOL)arg1;
- (void)_setDeleteButton:(id)arg1;
- (void)_updateSubtitleLabelAnimated:(BOOL)arg1;
- (void)_updateTitleFieldAnimated:(BOOL)arg1;
- (void)_setShowsTitleAndSubtitle:(BOOL)arg1;
- (BOOL)_showsTitleAndSubtitle;
- (BOOL)_canDrawLabels;
- (BOOL)attemptsDrawingLabels;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_titleTextFieldFrameForTitleLabelFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })_deleteButtonCenter;
- (id)customImageView;
- (struct CGPoint { float x1; float x2; })_pinButtonOriginForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 pinButtonSize:(struct CGSize { float x1; float x2; })arg2 titleLabelFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 subtitleLabelFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (float)xInset;
- (BOOL)_showsPinButton;
- (id)_pinButton;
- (id)_deleteButton;
- (id)_titleTextField;
- (id)_subtitleLabel;
- (id)stackView;
- (void)_setStackView:(id)arg1;
- (void)_updateSubviewOrdering;
- (void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setDelegate:(id)arg1;

@end
