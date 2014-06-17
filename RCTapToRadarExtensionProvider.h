/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class NSString;

@interface RCTapToRadarExtensionProvider : NSObject <NSExtensionRequestHandling> {
    BOOL _allowUserAttachmentSelection;
    BOOL _canGenerateNewAttachment;
    NSString *_loggingConsent;
}

@property BOOL allowUserAttachmentSelection;
@property BOOL canGenerateNewAttachment;
@property(copy) NSString * loggingConsent;


- (void)setLoggingConsent:(id)arg1;
- (void)setCanGenerateNewAttachment:(BOOL)arg1;
- (void)setAllowUserAttachmentSelection:(BOOL)arg1;
- (id)_getHostname;
- (id)filesInDir:(id)arg1 matchingPattern:(id)arg2 excludingPattern:(id)arg3;
- (id)newRadar;
- (id)attachmentsWithParams:(id)arg1;
- (id)attachmentList;
- (void)disableLogging;
- (BOOL)canGenerateNewAttachment;
- (BOOL)allowUserAttachmentSelection;
- (id)loggingConsent;
- (BOOL)isLoggingEnabled;
- (BOOL)canEnableLogging;
- (void)enableLogging;
- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)init;

@end