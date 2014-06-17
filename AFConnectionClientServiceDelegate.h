/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class AFConnection;

@interface AFConnectionClientServiceDelegate : NSObject <AFClientServiceDelegate> {
    AFConnection *_connection;
}


- (id)initWithConnection:(id)arg1;
- (oneway void)speechRecognitionDidFail:(id)arg1;
- (oneway void)speechRecognizedPartialResult:(id)arg1;
- (oneway void)speechRecognized:(id)arg1;
- (oneway void)speechRecordingDidFail:(id)arg1;
- (oneway void)speechRecordingDidCancel;
- (oneway void)speechRecordingDidEnd;
- (oneway void)speechRecordingDidUpdateAveragePower:(float)arg1 peakPower:(float)arg2;
- (oneway void)speechRecordingDidBeginOnAVRecordRoute:(id)arg1;
- (oneway void)speechRecordingWillBegin;
- (oneway void)getBulletinContext:(id)arg1;
- (oneway void)musicWasDetected;
- (oneway void)acousticIDRequestWillStart;
- (oneway void)requestRequestedDismissAssistant;
- (oneway void)requestRequestedOpenURL:(id)arg1 reply:(id)arg2;
- (oneway void)requestDidFailWithError:(id)arg1 requestClass:(id)arg2;
- (oneway void)requestDidReceiveCommand:(id)arg1 reply:(id)arg2;
- (oneway void)requestDidFinish;
- (oneway void)shouldSpeakChanged:(BOOL)arg1;
- (id)_connectionDelegate;
- (void).cxx_destruct;

@end