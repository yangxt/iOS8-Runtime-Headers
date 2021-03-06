/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class <RUTermsViewControllerDelegate>, NSString;

@interface RUTermsViewController : UIViewController  {
    NSString *_terms;
    <RUTermsViewControllerDelegate> *_delegate;
    unsigned long long _currentTermsVersion;
}

@property(readonly) unsigned long long currentTermsVersion;
@property <RUTermsViewControllerDelegate> * delegate;


- (void)_didReceiveRadioAccountDidDeauthenticateNotification:(id)arg1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (id)delegate;
- (void)_cancelAction:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (unsigned long long)currentTermsVersion;
- (id)initWithCurrentTermsVersion:(unsigned long long)arg1 terms:(id)arg2;
- (void)_acceptAction:(id)arg1;

@end
