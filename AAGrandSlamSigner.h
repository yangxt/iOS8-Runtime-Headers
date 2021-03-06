/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class ACAccount, NSString, ACAccountStore;

@interface AAGrandSlamSigner : NSObject  {
    ACAccount *_appleAccount;
    ACAccount *_grandSlamAccount;
    ACAccountStore *_store;
    NSString *_appTokenID;
}

@property(readonly) ACAccount * appleAccount;
@property(readonly) ACAccount * grandSlamAccount;
@property(readonly) ACAccountStore * accountStore;


- (id)appleAccount;
- (id)accountStore;
- (id)grandSlamAccount;
- (BOOL)signURLRequest:(id)arg1;
- (id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 appTokenID:(id)arg4;
- (void).cxx_destruct;

@end
