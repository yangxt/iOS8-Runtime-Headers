/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSString, NSArray;

@interface MFMailToURLComponents : NSObject  {
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    NSString *_subject;
    NSString *_body;
}

@property(readonly) NSArray * toRecipients;
@property(readonly) NSArray * ccRecipients;
@property(readonly) NSArray * bccRecipients;
@property(readonly) NSString * subject;
@property(readonly) NSString * body;

+ (id)componentsWithURL:(id)arg1;

- (id)subject;
- (id)body;
- (id)initWithURL:(id)arg1;
- (void)_decomposeURL:(id)arg1;
- (id)bccRecipients;
- (id)ccRecipients;
- (id)toRecipients;
- (void)dealloc;
- (id)init;

@end
