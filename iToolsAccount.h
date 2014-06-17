/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface iToolsAccount : IMAPAccount  {
}

+ (id)hostname;
+ (BOOL)usernameIsEmailAddress;
+ (id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (BOOL)isPredefinedAccountType;
+ (id)displayedAccountTypeString;
+ (id)accountTypeString;
+ (id)deliveryHostName;
+ (id)emailAddressHostPart;
+ (void)initialize;

- (id)hostname;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;
- (id)displayUsername;
- (id)fromEmailAddresses;
- (void)setDeliveryAccount:(id)arg1;
- (int)emptyFrequencyForMailboxType:(int)arg1;
- (BOOL)updateEmailAliases;
- (id)fromEmailAddressesIncludingDisabled;
- (id)emailAddresses;
- (id)_deliveryAccountCreateIfNeeded:(BOOL)arg1;
- (BOOL)isHostnameEquivalentTo:(id)arg1;
- (BOOL)isAccountClassEquivalentTo:(id)arg1;
- (void)accountDidLoad;
- (void)reportAuthenticationError:(id)arg1 authScheme:(id)arg2;
- (void)setHostname:(id)arg1;
- (Class)connectionClass;
- (BOOL)supportsArchiving;
- (void)setUsername:(id)arg1;

@end