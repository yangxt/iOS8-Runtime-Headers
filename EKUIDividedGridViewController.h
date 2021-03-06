/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKUIDividedGridViewControllerDelegate>, NSArray;

@interface EKUIDividedGridViewController : UIViewController  {
    int _type;
    float _preferredWidth;
    NSArray *_buttonTitles;
    NSArray *_allCells;
    <EKUIDividedGridViewControllerDelegate> *_delegate;
    NSArray *_weekViews;
}

@property float preferredWidth;
@property(retain) NSArray * buttonTitles;
@property(retain) NSArray * allCells;
@property <EKUIDividedGridViewControllerDelegate> * delegate;
@property(retain) NSArray * weekViews;


- (void).cxx_destruct;
- (void)setButtonTitles:(id)arg1;
- (id)buttonTitles;
- (void)loadView;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setPreferredWidth:(float)arg1;
- (void)cellTapped:(id)arg1;
- (id)initWithType:(int)arg1 buttonTitles:(id)arg2;
- (float)_neededHeight;
- (id)weekViews;
- (float)_rowHeightForWidth:(float)arg1;
- (float)preferredWidth;
- (void)setWeekViews:(id)arg1;
- (void)setAllCells:(id)arg1;
- (float)_defaultButtonWidthForButtonAtIndex:(int)arg1;
- (id)_newDividerView;
- (id)allCells;

@end
