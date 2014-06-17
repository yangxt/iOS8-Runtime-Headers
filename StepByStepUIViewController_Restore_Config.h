/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class UILabel, UIView;

@interface StepByStepUIViewController_Restore_Config : StepByStepUIViewController  {
    UIView *restoreRecommendationContainerView;
    UILabel *restoreRecommendationLabel;
    UIView *dontRestoreRecommendationContainerView;
    UILabel *dontRestoreRecommendationLabel;
    BOOL dontRestore;
}

@property(retain) UIView * restoreRecommendationContainerView;
@property(retain) UIView * dontRestoreRecommendationContainerView;


- (id)restoreRecommendationContainerView;
- (id)dontRestoreRecommendationContainerView;
- (void)setDontRestoreRecommendationContainerView:(id)arg1;
- (void)setRestoreRecommendationContainerView:(id)arg1;
- (void)setupInitialTableHeaderConfiguration;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)dealloc;

@end