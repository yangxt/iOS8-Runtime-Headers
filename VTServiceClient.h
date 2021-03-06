/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@class NSXPCConnection, <VTServiceClientDelegate>, NSObject<OS_dispatch_queue>;

@interface VTServiceClient : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_vtxConnection;
    <VTServiceClientDelegate> *_delegate;
}

@property <VTServiceClientDelegate> * delegate;


- (void)testMethod;
- (void)appendPCMData:(id)arg1 sampleCount:(int)arg2;
- (void)resetAssertions;
- (void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2;
- (void)getSiriLanguageCode:(id)arg1;
- (void)feedbackWithReason:(unsigned char)arg1 atTime:(double)arg2;
- (id)_service;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)init;

@end
