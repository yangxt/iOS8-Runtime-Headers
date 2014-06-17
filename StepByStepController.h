/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class <StepByStepUIDelegate>, NSDictionary;

@interface StepByStepController : AssistantCallbackController <AutoGuessSetup, StepByStepUIDelegateResult> {
    struct StepByStepContext { } *_stepByStepContext;
    id _delegate;
    NSDictionary *_restoreRecommendation;
}

@property <StepByStepUIDelegate> * delegate;
@property(retain) NSDictionary * restoreRecommendation;

+ (id)stepByStepController;

- (id)restoreRecommendation;
- (void)stepByStepNextStepResult:(long)arg1 withOptions:(id)arg2;
- (long)cancelStepByStep;
- (void)setRestoreRecommendation:(id)arg1;
- (long)setupFromAutoguessRecommendation:(id)arg1 withOptions:(id)arg2;
- (long)subclassAssistantCallback:(struct AssistantCallbackContext { unsigned int x1; struct AssistantContext {} *x2; int x3; struct __CFDictionary {} *x4; int x5; id x6; id x7; struct _opaque_pthread_mutex_t { long x_8_1_1; BOOL x_8_1_2[40]; } x8; void *x9; int x10; }*)arg1;
- (long)resume;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end