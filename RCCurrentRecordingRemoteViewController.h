/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class <RCCurrentRecordingViewControllerDelegate>;

@interface RCCurrentRecordingRemoteViewController : _UIRemoteViewController <RCUIClientCurrentRecordingViewController> {
    <RCCurrentRecordingViewControllerDelegate> *_delegate;
}

@property <RCCurrentRecordingViewControllerDelegate> * delegate;

+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)currentRecordingAVStateDidChange:(id)arg1;
- (void)currentRecordingDidEnd;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewDidLoad;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
