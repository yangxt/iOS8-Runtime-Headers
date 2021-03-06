/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, _UIModalItemTextFiledBGView, UITableView, UIScrollView;

@interface _UIModalItemAlertContentView : _UIModalItemContentView  {
    _UIModalItemTextFiledBGView *_textFieldBGView;
    BOOL _alertViewIsSetup;
    UITableView *_otherTableView;
    UIView *_2ButtonsSeparators;
    UIView *_tableViewTopSeparator;
    UIScrollView *_labelsScrollView;
    BOOL _itemWantsVerticalButtons;
    BOOL _itemNeedsTwoTableViews;
}


- (void)_prepareViewIfNeeded;
- (void)setEnableFirstOtherButton:(BOOL)arg1;
- (void)_reloadButtons;
- (void)layout;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
