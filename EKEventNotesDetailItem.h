/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UITextView, UITableViewCell;

@interface EKEventNotesDetailItem : EKEventDetailItem  {
    UITableViewCell *_cell;
    UITableViewCell *_moreButtonCell;
    UITextView *_notesView;
    BOOL _cellNeedsUpdate;
}


- (void).cxx_destruct;
- (void)reset;
- (void)_updateCellIfNeeded;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned int)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfSubitems;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (void)setCellPosition:(int)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;

@end
