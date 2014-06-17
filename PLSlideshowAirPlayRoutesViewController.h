/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UITableView, NSArray, UIView;

@interface PLSlideshowAirPlayRoutesViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    UIView *_containerView;
    UITableView *_table;
    NSArray *_airplayRoutes;
    unsigned int _selectedRouteIndex;
}

@property unsigned int selectedRouteIndex;


- (void)setSelectedRouteIndex:(unsigned int)arg1;
- (id)initWithAirplayRoutes:(id)arg1 selectedRouteIndex:(unsigned int)arg2;
- (unsigned int)selectedRouteIndex;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopoverView;
- (void)loadView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;

@end