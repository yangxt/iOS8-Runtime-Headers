/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
 */

@class UIImageView, ACAccountStore, SLComposeSheetConfigurationItem, VimeoDetailsController, NSString, VimeoUploadSession, ACAccount, NSArray;

@interface VimeoComposeViewController : SLComposeServiceViewController <VimeoComposeOptionViewDelegate> {
    VimeoUploadSession *_session;
    UIImageView *_logoView;
    SLComposeSheetConfigurationItem *_detailsConfigurationItem;
    VimeoDetailsController *_detailsController;
    ACAccountStore *_accountStore;
    ACAccount *_vimeoAccount;
    NSString *_postDescription;
    NSArray *_tags;
    int _videoSize;
    int _privacySettings;
}

@property(retain) ACAccountStore * accountStore;
@property(retain) ACAccount * vimeoAccount;
@property(retain) NSString * postDescription;
@property(retain) NSArray * tags;
@property int videoSize;
@property int privacySettings;


- (BOOL)validateText:(id)arg1;
- (void)vimeoComposeOptionsViewDidFinish:(id)arg1;
- (id)postDescription;
- (id)vimeoAccount;
- (void)setPostDescription:(id)arg1;
- (void)setVimeoAccount:(id)arg1;
- (int)videoSize;
- (void)setVideoSize:(int)arg1;
- (void)setAccountStore:(id)arg1;
- (id)accountStore;
- (void)setTags:(id)arg1;
- (void).cxx_destruct;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (id)tags;
- (void)viewDidAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)configurationItems;
- (void)didSelectPost;
- (void)setPrivacySettings:(int)arg1;
- (int)privacySettings;

@end
