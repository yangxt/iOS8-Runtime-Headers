/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UITableView;

@interface EKReminderPriorityEditViewController : EKEditItemViewController <UITableViewDelegate, UITableViewDataSource> {
    UITableView *_tableView;
    unsigned int _priority;
}

@property unsigned int priority;


- (void)setPriority:(unsigned int)arg1;
- (void).cxx_destruct;
- (unsigned int)priority;
- (void)loadView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;

@end
