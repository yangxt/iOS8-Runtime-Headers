/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DAMailboxRequest : NSObject  {
    int _requestType;
    int _bodyFormat;
    NSString *_messageID;
}

@property int requestType;
@property int bodyFormat;
@property(copy) NSString * messageID;


- (int)requestType;
- (void)setRequestType:(int)arg1;
- (int)bodyFormat;
- (id)messageID;
- (void)setMessageID:(id)arg1;
- (void)setBodyFormat:(int)arg1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)mf_alwaysReportFailures;

@end
