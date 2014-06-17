/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, UITextField, UIVisualEffect, UIColor, NSIndexPath, UILabel, UIControl, _UITableViewCellSeparatorView, UITableView, UILongPressGestureRecognizer, UIView, _UITableViewCellOldEditingData, UITapGestureRecognizer, UITableViewCellDeleteConfirmationView, NSString, UIImageView, NSTimer;

@interface UITableViewCell : UIView <UIScrollViewDelegate, NSCoding, UIGestureRecognizerDelegate> {
    UITableView *_tableView;
    id _layoutManager;
    id _target;
    SEL _editAction;
    SEL _accessoryAction;
    _UITableViewCellOldEditingData *_oldEditingData;
    id _editingData;
    float _rightMargin;
    int _indentationLevel;
    float _indentationWidth;
    NSString *_reuseIdentifier;
    UIView *_contentView;
    UIImageView *_imageView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UIView *_backgroundView;
    UIView *_selectedBackgroundView;
    UIView *_multipleSelectionBackgroundView;
    UIView *_selectedOverlayView;
    float _selectionFadeDuration;
    UIColor *_backgroundColor;
    UIColor *_separatorColor;
    UIVisualEffect *_separatorEffect;
    UIColor *_topShadowColor;
    UIColor *_bottomShadowColor;
    UIColor *_sectionBorderColor;
    UIView *_floatingSeparatorView;
    UIView *_topShadowAnimationView;
    UIView *_bottomShadowAnimationView;
    id _badge;
    struct __CFDictionary { } *_unhighlightedStates;
    id _highlightingSupport;
    id _selectionSegueTemplate;
    id _accessoryActionSegueTemplate;
    UIControl *_accessoryView;
    UIControl *_editingAccessoryView;
    UIView *_customAccessoryView;
    UIView *_customEditingAccessoryView;
    _UITableViewCellSeparatorView *_separatorView;
    _UITableViewCellSeparatorView *_topSeparatorView;
    UIView *_topShadowView;
    UITextField *_editableTextField;
    double _lastSelectionTime;
    NSTimer *_deselectTimer;
    float _textFieldOffset;
    float _indexBarWidth;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _separatorInset;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _backgroundInset;
    SEL _returnAction;
    UIColor *_selectionTintColor;
    UIColor *_accessoryTintColor;
    UIImage *_reorderControlImage;
    UILongPressGestureRecognizer *_menuGesture;
    NSIndexPath *_representedIndexPath;
    BOOL _isPigglyWigglyCell;
    BOOL _focusable;
    UITableViewCellDeleteConfirmationView *_swipeToDeleteConfirmationView;
    UITapGestureRecognizer *_swipeToDeleteCancelationGesture;
    UIView *_clearBlendingView;
    float _swipeToDeleteDistancePulled;
    float _sectionCornerRadius;
    float _sectionBorderWidth;
    float _defaultMarginWidth;
    struct { 
        unsigned int showingDeleteConfirmation : 1; 
        unsigned int separatorStyle : 3; 
        unsigned int selectionStyle : 3; 
        unsigned int selectionFadeFraction : 11; 
        unsigned int editing : 1; 
        unsigned int editingStyle : 3; 
        unsigned int accessoryType : 3; 
        unsigned int editingAccessoryType : 3; 
        unsigned int showsAccessoryWhenEditing : 1; 
        unsigned int showsReorderControl : 1; 
        unsigned int showDisclosure : 1; 
        unsigned int showTopSeparator : 1; 
        unsigned int hideTopSeparatorDuringReordering : 1; 
        unsigned int disclosureClickable : 1; 
        unsigned int disclosureStyle : 1; 
        unsigned int showingRemoveControl : 1; 
        unsigned int sectionLocation : 3; 
        unsigned int tableViewStyle : 1; 
        unsigned int shouldIndentWhileEditing : 1; 
        unsigned int fontSet : 1; 
        unsigned int usingDefaultSelectedBackgroundView : 1; 
        unsigned int wasSwiped : 1; 
        unsigned int highlighted : 1; 
        unsigned int separatorDirty : 1; 
        unsigned int drawn : 1; 
        unsigned int drawingDisabled : 1; 
        unsigned int style : 12; 
        unsigned int showingMenu : 1; 
        unsigned int clipsContents : 1; 
        unsigned int animatingSelection : 1; 
        unsigned int backgroundColorSet : 1; 
        unsigned int needsSetup : 1; 
        unsigned int dontDrawTopShadow : 1; 
        unsigned int usingMultiselectbackgroundView : 1; 
        unsigned int layoutLoopCounter : 2; 
        unsigned int isPigglyWigglyCell; 
        unsigned int deleteAnimationInProgress : 1; 
        unsigned int deleteCancelationAnimationInProgress : 1; 
        unsigned int animating : 1; 
        unsigned int shouldHaveFullLengthBottomSeparator : 1; 
        unsigned int shouldHaveFullLengthTopSeparator : 1; 
        unsigned int drawsSeparatorAtTopOfSection : 1; 
        unsigned int drawsSeparatorAtBottomOfSection : 1; 
        unsigned int separatorBackdropOverlayBlendMode : 3; 
        unsigned int separatorDrawsInVibrantLightMode : 1; 
        unsigned int separatorHidden : 1; 
        unsigned int hidingSeparatorsForSelection : 1; 
        unsigned int clippedBeforeSwiping : 1; 
        unsigned int allowsReorderingWhenNotEditing : 1; 
        unsigned int needsHeightCalculation : 1; 
    } _tableCellFlags;
}

@property(retain,readonly) UIImageView * imageView;
@property(retain,readonly) UILabel * textLabel;
@property(retain,readonly) UILabel * detailTextLabel;
@property(retain,readonly) UIView * contentView;
@property(retain) UIView * backgroundView;
@property(retain) UIView * selectedBackgroundView;
@property(retain) UIView * multipleSelectionBackgroundView;
@property(copy,readonly) NSString * reuseIdentifier;
@property int selectionStyle;
@property(getter=isSelected) BOOL selected;
@property(getter=isHighlighted) BOOL highlighted;
@property(readonly) int editingStyle;
@property BOOL showsReorderControl;
@property BOOL shouldIndentWhileEditing;
@property int accessoryType;
@property(retain) UIView * accessoryView;
@property int editingAccessoryType;
@property(retain) UIView * editingAccessoryView;
@property int indentationLevel;
@property float indentationWidth;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } separatorInset;
@property(getter=isEditing) BOOL editing;
@property(readonly) BOOL showingDeleteConfirmation;

+ (id)_defaultTopShadowColor;
+ (void)_initializeForIdiom:(int)arg1;
+ (void)initialize;

- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)_usesRoundedGroups;
- (BOOL)_separatorHidden;
- (float)_indexBarWidth;
- (BOOL)_separatorDrawsInVibrantLightMode;
- (SEL)returnAction;
- (void)setReturnAction:(SEL)arg1;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (void)setPlaceHolderValue:(id)arg1;
- (float)textFieldOffset;
- (void)setTextFieldOffset:(float)arg1;
- (BOOL)_isDeleteAnimationInProgress;
- (id)_deleteConfirmationView;
- (BOOL)_isDeleteCancelationAnimationInProgress;
- (BOOL)_isUsingOldStyleMultiselection;
- (BOOL)_shouldSaveOpaqueStateForView:(id)arg1;
- (SEL)_accessoryAction;
- (BOOL)_hasEditingAccessoryView;
- (BOOL)_hasAccessoryView;
- (id)_topShadowView:(BOOL)arg1;
- (id)_backgroundView:(BOOL)arg1;
- (id)_customEditingAccessoryView:(BOOL)arg1;
- (id)_customAccessoryView:(BOOL)arg1;
- (BOOL)_isReorderable;
- (void)deleteConfirmationControlWasCancelled:(id)arg1;
- (void)deleteConfirmationControlWasClicked:(id)arg1;
- (void)editControlWasClicked:(id)arg1;
- (void)_animateInnerShadowForInsertion:(BOOL)arg1 withRowAnimation:(int)arg2;
- (void)_animateFloatingSeparatorForInsertion:(BOOL)arg1 withRowAnimation:(int)arg2;
- (void)_drawSeparatorInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_reorderControlImage;
- (void)_setReorderControlImage:(id)arg1;
- (id)_badge:(BOOL)arg1;
- (id)_imageView:(BOOL)arg1;
- (id)_editableTextField:(BOOL)arg1;
- (id)_detailTextLabel:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRectForState:(unsigned int)arg1;
- (SEL)accessoryAction;
- (void)setAccessoryAction:(SEL)arg1;
- (SEL)editAction;
- (void)setEditAction:(SEL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })editRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)clipsContents;
- (void)setClipsContents:(BOOL)arg1;
- (void)setIndentationWidth:(float)arg1;
- (BOOL)hidesAccessoryWhenEditing;
- (void)setHidesAccessoryWhenEditing:(BOOL)arg1;
- (id)editingAccessoryView;
- (void)setEditingAccessoryView:(id)arg1;
- (void)setEditingAccessoryType:(int)arg1;
- (id)_accessoryTintColor;
- (void)_setAccessoryTintColor:(id)arg1;
- (id)accessoryView;
- (void)setAccessoryView:(id)arg1;
- (void)setShouldIndentWhileEditing:(BOOL)arg1;
- (void)setShowsReorderControl:(BOOL)arg1;
- (void)setEditingStyle:(int)arg1;
- (id)selectedOverlayView;
- (float)selectionPercent;
- (BOOL)isAtLeastHalfSelected;
- (id)bottomShadowColor;
- (void)setTableBackgroundColor:(id)arg1;
- (id)_contentBackgroundColor;
- (id)selectedBackgroundView;
- (void)setMultipleSelectionBackgroundView:(id)arg1;
- (id)multipleSelectionBackgroundView;
- (id)_badgeText;
- (void)setSelectedImage:(id)arg1;
- (id)selectedTextColor;
- (void)setSelectedTextColor:(id)arg1;
- (void)setDrawingEnabled:(BOOL)arg1;
- (BOOL)_drawsSeparatorAtBottomOfSection;
- (BOOL)_drawsSeparatorAtTopOfSection;
- (BOOL)_shouldHaveFullLengthTopSeparator;
- (BOOL)_shouldHaveFullLengthBottomSeparator;
- (void)setSelectionSegueTemplate:(id)arg1;
- (void)setAccessoryActionSegueTemplate:(id)arg1;
- (void)_setDrawsTopSeparatorDuringReordering:(BOOL)arg1;
- (id)_disclosureChevronImage:(BOOL)arg1;
- (void)_finishedFadingGrabber:(id)arg1 finished:(BOOL)arg2;
- (void)_handleSwipeDeleteCancelation:(id)arg1;
- (void)_swipeAccessoryButtonPushed;
- (void)_swipeDeleteButtonPushed;
- (BOOL)_isFocusable;
- (id)editableTextField;
- (void)_clearOpaqueViewState:(id)arg1;
- (int)editingAccessoryType;
- (id)_newAccessoryView:(BOOL)arg1;
- (id)_disclosurePressedImage:(BOOL)arg1;
- (id)_disclosureImage:(BOOL)arg1;
- (void)_setGrabberHidden:(BOOL)arg1;
- (void)_willBeDeleted;
- (id)_editableTextField;
- (void)_updateSeparatorContent:(BOOL)arg1;
- (void)setSectionLocation:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_reorderingSeparatorView;
- (void)_updateCellMaskViewsForView:(id)arg1 backdropView:(id)arg2;
- (void)_updateViewsForDeleteButton;
- (struct CGSize { float x1; float x2; })_imageInsetSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })_textInsetSize;
- (float)indentationWidth;
- (int)indentationLevel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_delegateConfirmationRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessoryRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 accessoryView:(id)arg2 isCustom:(BOOL)arg3;
- (float)_editingButtonOffset;
- (void)_layoutSubviewsAnimated:(BOOL)arg1;
- (void)_showReorderControl;
- (id)_createRemoveControlForStyle:(int)arg1;
- (void)_editingTransitionAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)willTransitionToState:(unsigned int)arg1;
- (BOOL)wasSwiped;
- (void)_updateContentClip;
- (id)_editingAccessoryView:(BOOL)arg1;
- (id)_accessoryView:(BOOL)arg1;
- (void)_syncAccessoryViewsIfNecessary;
- (void)_createReorderControlIfNeeded;
- (void)_didTransitionToState:(unsigned int)arg1;
- (void)_willTransitionToState:(unsigned int)arg1;
- (void)_delayedDeselect;
- (void)showSelectedBackgroundView:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_cancelInternalPerformRequests;
- (void)_updateHighlightColorsForAnimationHalfwayPoint;
- (void)_deselectAnimationFinished;
- (void)_setSelectionStyle:(int)arg1 selectionTintColor:(id)arg2;
- (void)removeEditingData;
- (void)_removeRemoveControl;
- (void)_resetSelectionTimer;
- (void)setSelectedBackgroundView:(id)arg1 animated:(BOOL)arg2;
- (void)selectedBackgroundViewChange:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_setupSelectedBackgroundView;
- (void)_updateTopShadowView:(BOOL)arg1;
- (void)_setFont:(id)arg1 layout:(BOOL)arg2;
- (id)_textLabel:(BOOL)arg1;
- (id)_detailTextLabel;
- (id)_textLabel;
- (void)_didCreateContentView;
- (void)_setupMenuGesture;
- (void)_drawContentInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (void)_setupTableViewCellCommon;
- (void)_longPressGestureRecognized:(id)arg1;
- (id)editingData:(BOOL)arg1;
- (void)setSelectionFadeDuration:(float)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 reuseIdentifier:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_topSeparatorFrame;
- (BOOL)_showSeparatorAtTopOfSection;
- (BOOL)_shouldHideSeparator;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_separatorFrame;
- (BOOL)_showFullLengthTopSeparatorForTopOfSection;
- (float)_rightMarginWidth;
- (void)_updateSeparatorContent;
- (void)_performAction:(SEL)arg1 sender:(id)arg2;
- (void)_topShadowDidFadeOut;
- (float)selectionFadeDuration;
- (id)topShadowColor;
- (id)_selectedBackgroundView:(BOOL)arg1;
- (BOOL)_drawsTopShadow;
- (int)sectionLocation;
- (BOOL)_insetsBackground;
- (int)tableViewStyle;
- (void)_menuDismissed:(id)arg1;
- (void)didTransitionToState:(unsigned int)arg1;
- (id)_currentAccessoryView:(BOOL)arg1;
- (id)_reorderingControl;
- (BOOL)_isCurrentlyConsideredHighlighted;
- (void)_updateHighlightColorsForView:(id)arg1 highlighted:(BOOL)arg2;
- (float)_separatorHeight;
- (void)setNeedsUpdateConstraints;
- (void)_releaseRemoveControl;
- (id)_defaultAccessoryView;
- (id)_checkmarkImage:(BOOL)arg1;
- (id)_detailDisclosureImage:(BOOL)arg1;
- (id)_tintedDisclosureImagePressed:(BOOL)arg1;
- (void)_releaseReorderingControl;
- (void)setOldEditingData:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })reorderRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)oldEditingData;
- (void)_setSeparatorDrawsInVibrantLightModeUIAppearance:(id)arg1;
- (id)_multiselectBackgroundColor;
- (id)selectionTintColor;
- (int)selectionStyle;
- (void)setSelectionStyle:(int)arg1;
- (void)setSelectionTintColor:(id)arg1;
- (void)_grabberReleased:(id)arg1;
- (void)_grabberDragged:(id)arg1 yDelta:(float)arg2;
- (void)_grabberBeganReorder:(id)arg1;
- (id)_removeControl;
- (id)_tableView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_layoutDebuggingTitle;
- (int)lineBreakMode;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (id)_badge;
- (void)removeControl:(id)arg1 willRemoveTarget:(id)arg2;
- (void)insertControl:(id)arg1 shouldInsertWithTarget:(id)arg2;
- (void)removeControl:(id)arg1 wasCanceledForTarget:(id)arg2;
- (void)setShowingDeleteConfirmation:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backgroundRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeControlWillHideRemoveConfirmation:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })removeControl:(id)arg1 endFrameForTarget:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })removeControl:(id)arg1 startFrameForTarget:(id)arg2;
- (void)_uiRemoveControlMinusButtonHideAnimationDone:(id)arg1;
- (BOOL)_isHighlighted;
- (void)_setBadgeText:(id)arg1;
- (id)imageView;
- (void)setLayoutManager:(id)arg1;
- (id)selectedImage;
- (void)setSelectedBackgroundView:(id)arg1;
- (int)textAlignment;
- (id)textColor;
- (id)_separatorEffect;
- (BOOL)_allowsReorderingWhenNotEditing;
- (id)_titleForDeleteConfirmationButton;
- (float)_marginWidth;
- (void)setEditing:(BOOL)arg1;
- (BOOL)_isInModalViewController;
- (BOOL)_needsHeightCalculation;
- (void)_tableViewDidUpdateMarginWidth;
- (void)_setSeparatorDrawsInVibrantLightMode:(BOOL)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_backgroundInset;
- (int)separatorStyle;
- (id)backgroundView;
- (void)_setDeleteCancelationAnimationInProgress:(BOOL)arg1;
- (void)_setDeleteAnimationInProgress:(BOOL)arg1;
- (BOOL)_isAnimating;
- (BOOL)showsReorderControl;
- (BOOL)showingDeleteConfirmation;
- (BOOL)shouldIndentWhileEditing;
- (void)_setShowingDeleteConfirmation:(BOOL)arg1;
- (void)setWasSwiped:(BOOL)arg1;
- (void)_setShouldIndentWhileEditing:(BOOL)arg1;
- (void)_setEditingStyle:(int)arg1;
- (void)_setShowsReorderControl:(BOOL)arg1;
- (void)setAccessoryType:(int)arg1;
- (id)detailTextLabel;
- (id)textLabel;
- (void)_setShouldHaveFullLengthTopSeparator:(BOOL)arg1;
- (void)_setShouldHaveFullLengthBottomSeparator:(BOOL)arg1;
- (void)_setReordering:(BOOL)arg1;
- (void)_setOpaque:(BOOL)arg1 forSubview:(id)arg2;
- (void)_saveOpaqueViewState:(id)arg1;
- (void)_setDrawsTopSeparator:(BOOL)arg1;
- (BOOL)_drawsTopSeparatorDuringReordering;
- (void)setSeparatorInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSectionLocation:(int)arg1 animated:(BOOL)arg2;
- (void)_setAllowsReorderingWhenNotEditing:(BOOL)arg1;
- (void)_setSectionBorderWidth:(float)arg1;
- (float)_sectionBorderWidth;
- (void)_setSeparatorEffect:(id)arg1;
- (void)_setSeparatorBackdropOverlayBlendMode:(int)arg1;
- (int)_separatorBackdropOverlayBlendMode;
- (id)sectionBorderColor;
- (BOOL)_isPigglyWigglyCell;
- (BOOL)_backgroundColorSet;
- (void)_setIsPigglyWigglyCell:(BOOL)arg1;
- (void)_setAccessoryAction:(SEL)arg1;
- (void)_setTarget:(id)arg1;
- (id)_target;
- (void)_setMultiselecting:(BOOL)arg1;
- (unsigned int)currentStateMask;
- (void)setIndentationLevel:(int)arg1;
- (void)_setTableView:(id)arg1;
- (void)_setDefaultMarginWidth:(float)arg1;
- (void)_startToEditTextField;
- (id)layoutManager;
- (void)setReuseIdentifier:(id)arg1;
- (void)prepareForReuse;
- (void)setBackgroundView:(id)arg1;
- (void)_updateAndCacheBackgroundColorForHighlightIgnoringSelection:(BOOL)arg1;
- (void)_setTableBackgroundCGColor:(struct CGColor { }*)arg1 withSystemColorName:(id)arg2;
- (void)_updateHighlightColors;
- (void)setBottomShadowColor:(id)arg1;
- (void)setTopShadowColor:(id)arg1;
- (void)_setBackgroundInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)isSelected;
- (id)selectionSegueTemplate;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (int)editingStyle;
- (void)_setFocusable:(BOOL)arg1;
- (BOOL)drawingEnabled;
- (int)_popoverControllerStyle;
- (void)_endSwiping:(BOOL)arg1;
- (void)_systemTextSizeChanged;
- (id)tableBackgroundColor;
- (void)setSeparatorColor:(id)arg1;
- (id)accessoryActionSegueTemplate;
- (void)_setDrawsSeparatorAtBottomOfSection:(BOOL)arg1;
- (void)_setDrawsSeparatorAtTopOfSection:(BOOL)arg1;
- (void)_removeInnerShadow;
- (void)_removeFloatingSeparator;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isEditing;
- (BOOL)_needsSetup;
- (void)_updateFullWidthSwipeDeletionView;
- (void)_setAnimating:(BOOL)arg1;
- (void)_setAnimating:(BOOL)arg1 clippingAdjacentCells:(BOOL)arg2;
- (void)_setNeedsSetup:(BOOL)arg1;
- (id)reuseIdentifier;
- (void)_setRightMarginWidth:(float)arg1;
- (void)_setMarginWidth:(float)arg1;
- (void)setTableViewStyle:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })separatorInset;
- (int)accessoryType;
- (void)_setSeparatorHidden:(BOOL)arg1;
- (BOOL)_isMultiselecting;
- (float)_defaultMarginWidth;
- (void)setSeparatorStyle:(int)arg1;
- (void)_setNeedsHeightCalculation:(BOOL)arg1;
- (id)_indexPath;
- (void)_setIndexBarWidth:(float)arg1;
- (void)_setDrawsTopShadow:(BOOL)arg1;
- (void)setSectionBorderColor:(id)arg1;
- (id)separatorColor;
- (void)_multiselectColorChanged;
- (void)_setIndexPath:(id)arg1;
- (void)_updateSwipeWithDistancePulled:(float)arg1;
- (id)_swipeToDeleteConfirmationView;
- (void)_beginSwiping;
- (id)font;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (id)_imageView;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (id)_defaultFont;
- (id)_scriptingInfo;
- (void)_descendent:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_descendent:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_setHiddenForReuse:(BOOL)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (struct CGSize { float x1; float x2; })systemLayoutSizeFittingSize:(struct CGSize { float x1; float x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)didMoveToSuperview;
- (BOOL)_isFocusableElement;
- (BOOL)canBecomeFirstResponder;
- (void)_focusStateDidChange;
- (BOOL)_canDrawContent;
- (id)contentView;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)target;
- (void)setLineBreakMode:(int)arg1;
- (int)style;
- (id)image;
- (void)setText:(id)arg1;
- (id)text;
- (void)setTextAlignment:(int)arg1;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setTarget:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)backgroundColor;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)init;
- (id)accessibilityTableViewCellText;

@end