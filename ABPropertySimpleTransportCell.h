/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIColor, UIImageView, ABTransportButton;

@interface ABPropertySimpleTransportCell : ABPropertySimpleCell  {
    ABTransportButton *_transportIcon1;
    ABTransportButton *_transportIcon2;
    UIImageView *_starView;
    BOOL _allowsActions;
    UIColor *_actionsColor;
}

@property BOOL allowsActions;
@property(readonly) BOOL shouldShowStar;
@property(readonly) ABTransportButton * transportIcon1;
@property(readonly) ABTransportButton * transportIcon2;
@property(readonly) ABTransportButton * standardTransportIcon;
@property(readonly) UIImageView * standardStarView;
@property(retain) UIColor * actionsColor;


- (BOOL)shouldPerformDefaultAction;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setAllowsActions:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)dealloc;
- (id)actionsColor;
- (id)standardStarView;
- (id)standardTransportIcon;
- (void)_updateStarImageForView:(id)arg1;
- (void)updateTransportButtons;
- (void)updateStarIcon;
- (BOOL)shouldShowStar;
- (id)transportIcon2;
- (id)transportIcon1;
- (void)transportButtonClicked:(id)arg1;
- (void)updateWithPropertyItem:(id)arg1;
- (BOOL)allowsActions;
- (void)setActionsColor:(id)arg1;
- (id)variableConstraints;
- (id)rightMostView;
- (void)setCardGroupItem:(id)arg1;

@end
