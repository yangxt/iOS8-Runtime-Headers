/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface CNContactPickerExtensionContext : NSExtensionContext <CNContactPickerServiceProtocol, CNContactPickerHostProtocol> {
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)pickerDidSelectContactWithVCardData:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(int)arg3;
- (void)pickerDidCancel;
- (void)setupWithOptions:(id)arg1 readyBlock:(id)arg2;

@end