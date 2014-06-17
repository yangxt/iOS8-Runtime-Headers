/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class <NSURLAuthenticationChallengeSender>, NSString;

@interface ISAuthenticationChallenge : NSObject  {
    NSString *_localizedMessage;
    NSString *_localizedTitle;
}

@property(retain) NSString * localizedMessage;
@property(retain) NSString * localizedTitle;
@property(readonly) BOOL hasPassword;
@property(retain,readonly) NSString * password;
@property(retain,readonly) NSString * user;
@property(readonly) int failureCount;
@property(readonly) BOOL userNameIsEditable;
@property(readonly) BOOL userNameIsEmail;
@property(readonly) <NSURLAuthenticationChallengeSender> * sender;


- (BOOL)userNameIsEmail;
- (BOOL)userNameIsEditable;
- (void)setLocalizedMessage:(id)arg1;
- (void)useCredential:(id)arg1;
- (void)cancelAuthentication;
- (id)localizedMessage;
- (int)failureCount;
- (id)localizedTitle;
- (id)sender;
- (void)dealloc;
- (void)setLocalizedTitle:(id)arg1;
- (id)password;
- (id)user;
- (BOOL)hasPassword;

@end