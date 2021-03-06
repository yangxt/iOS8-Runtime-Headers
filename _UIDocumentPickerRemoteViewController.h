/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UIDocumentPickerViewControllerHost>, NSString, NSExtension, <NSCopying><NSObject>;

@interface _UIDocumentPickerRemoteViewController : _UIRemoteViewController <_UIDocumentPickerViewControllerHost> {
    <_UIDocumentPickerViewControllerHost> *_publicController;
    NSString *_identifier;
    NSExtension *_extension;
    <NSCopying><NSObject> *_extensionRequestIdentifier;
}

@property <_UIDocumentPickerViewControllerHost> * publicController;
@property(retain) NSString * identifier;
@property(retain) NSExtension * extension;
@property(copy) <NSCopying><NSObject> * extensionRequestIdentifier;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (id)extensionRequestIdentifier;
- (id)extension;
- (void)setIdentifier:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)publicController;
- (void)_preferredContentSizeChanged:(struct CGSize { float x1; float x2; })arg1;
- (void)_dismissWithOption:(id)arg1;
- (void)_didSelectPicker;
- (void)_dismissViewController;
- (void)_didSelectURL:(id)arg1 withSandboxExtension:(id)arg2;
- (void)setPublicController:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setExtensionRequestIdentifier:(id)arg1;
- (id)identifier;
- (void)invalidate;

@end
