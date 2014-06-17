/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UIIVCResponseDelegate>;

@interface UIRemoteInputViewControllerInterface : NSExtensionContext <_UIIVCResponseDelegate> {
    <_UIIVCResponseDelegate> *_responseDelegate;
}

@property(retain) <_UIIVCResponseDelegate> * responseDelegate;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)_openURL:(id)arg1 completion:(id)arg2;
- (void)_handleInputViewControllerState:(id)arg1;
- (void)_performInputViewControllerOutput:(id)arg1;
- (void)setResponseDelegate:(id)arg1;
- (id)responseDelegate;

@end