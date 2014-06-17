/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMultipleRecipientHeaderController : CKTranscriptHeaderController  {
    BOOL _collapsed;
}

@property(getter=isCollapsed) BOOL collapsed;


- (id)_groupHeaderComposeRecipients;
- (BOOL)hiddenWhenCollapsedForOrientation:(int)arg1;
- (void)hideTranscriptHeader;
- (void)showTranscriptHeader;
- (void)setCollapsed:(BOOL)arg1;
- (BOOL)isCollapsed;
- (void)viewDidLoad;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end