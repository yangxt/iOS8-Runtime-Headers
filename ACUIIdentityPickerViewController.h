/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@class NSArray, <ACUIIdentityPickerViewControllerDelegate>, NSString;

@interface ACUIIdentityPickerViewController : PSListController  {
    <ACUIIdentityPickerViewControllerDelegate> *_delegate;
    NSString *_property;
    NSArray *_identities;
    NSArray *_emailAddresses;
    BOOL _allowEditing;
}

@property(readonly) NSString * property;


- (id)specifiers;
- (id)property;
- (id)_identitySpecifiers;
- (BOOL)_allowIdentitySelection;
- (void)_updateCell:(id)arg1 selected:(BOOL)arg2;
- (void)_setPropertyEnabled:(BOOL)arg1 identity:(struct __SecIdentity { }*)arg2;
- (struct __SecIdentity { }*)_identityToAutoselectWithEnabled:(BOOL)arg1;
- (id)_specifiersForIdentities:(id)arg1;
- (id)_valueForSwitchSpecifier:(id)arg1;
- (void)_setValue:(id)arg1 forSwitchSpecifier:(id)arg2;
- (BOOL)_isPropertyEnabled;
- (struct __SecIdentity { }*)_selectedIdentity;
- (void)_finishedFetchingIdentities:(id)arg1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;

@end
