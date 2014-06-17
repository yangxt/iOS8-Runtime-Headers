/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UILabel, UIButton, <SKUIPopupMenuDelegate>, SKUIMenuViewController, NSString, UIPopoverController, NSArray;

@interface SKUIPopupMenuHeaderView : UIView <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {
    <SKUIPopupMenuDelegate> *_delegate;
    UIButton *_menuButton;
    UILabel *_menuLabel;
    NSString *_menuLabelTitle;
    NSArray *_menuItemTitles;
    SKUIMenuViewController *_menuViewController;
    UIPopoverController *_menuPopoverController;
    int _selectedMenuItemIndex;
    UILabel *_titleLabel;
}

@property <SKUIPopupMenuDelegate> * delegate;
@property(copy) NSArray * menuItemTitles;
@property(copy) NSString * menuLabelTitle;
@property int selectedMenuItemIndex;
@property(copy) NSString * title;


- (int)selectedMenuItemIndex;
- (id)menuLabelTitle;
- (void)_reloadMenuButton;
- (void)setSelectedMenuItemIndex:(int)arg1;
- (void)setMenuItemTitles:(id)arg1;
- (void)setMenuLabelTitle:(id)arg1;
- (void)_menuButtonAction:(id)arg1;
- (id)menuItemTitles;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (void)setColoringWithColorScheme:(id)arg1;
- (void).cxx_destruct;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)_titleLabel;
- (id)title;
- (id)delegate;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end