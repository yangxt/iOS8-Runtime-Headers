/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFMonitoredInvocation, NSThread, MFMessageTextAttachment, NSMutableArray, NSURL;

@interface MFMessageURLProtocol : NSURLProtocol  {
    NSURL *_url;
    MFMessageTextAttachment *_attachment;
    MFMonitoredInvocation *_invocation;
    NSThread *_loader;
    BOOL _stopped;
    NSMutableArray *_attachments;
}

+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)initialize;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;

- (void)stopLoading;
- (void)_downloadAttachment;
- (void)_downloadedData:(id)arg1 mimeType:(id)arg2;
- (void)dealloc;
- (void)startLoading;

@end