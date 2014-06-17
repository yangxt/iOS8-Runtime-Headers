/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUCellConfiguration, SUTableCellContentView, UIColor, UIBezierPath, SUItemOfferButton;

@interface SUTableCell : UITableViewCell  {
    UIColor *_bottomBorderColor;
    SUTableCellContentView *_configurationView;
    unsigned int _hideHighlight : 1;
    SUItemOfferButton *_itemOfferButton;
    struct { 
        unsigned int localIndex; 
        unsigned int localCount; 
        unsigned int globalIndex; 
        unsigned int globalCount; 
    } _position;
    UIColor *_topBorderColor;
    int _editState;
}

@property(retain) UIColor * bottomBorderColor;
@property int clipCorners;
@property(readonly) UIBezierPath * clippingPath;
@property(retain) SUCellConfiguration * configuration;
@property BOOL drawAsDisabled;
@property BOOL highlightsOnlyContentView;
@property(retain,readonly) SUItemOfferButton * itemOfferButton;
@property struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } position;
@property BOOL showHighlight;
@property(retain) UIColor * topBorderColor;
@property BOOL usesSubviews;
@property int editState;


- (int)editState;
- (BOOL)showHighlight;
- (void)setUsesSubviews:(BOOL)arg1;
- (void)setShowHighlight:(BOOL)arg1;
- (id)clippingPath;
- (void)setEditState:(int)arg1;
- (id)copyPurchaseAnimationView;
- (BOOL)usesSubviews;
- (void)setHighlightsOnlyContentView:(BOOL)arg1;
- (void)setDrawAsDisabled:(BOOL)arg1;
- (BOOL)drawAsDisabled;
- (BOOL)highlightsOnlyContentView;
- (id)topBorderColor;
- (id)bottomBorderColor;
- (id)itemOfferButton;
- (void)setBottomBorderColor:(id)arg1;
- (void)setTopBorderColor:(id)arg1;
- (id)configuration;
- (void)setClipCorners:(int)arg1;
- (int)clipCorners;
- (void)setConfiguration:(id)arg1;
- (void)setShowingDeleteConfirmation:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)_canDrawContent;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })position;
- (void)setPosition:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
- (void)dealloc;

@end