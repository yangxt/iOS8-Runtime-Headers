/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class DAMailMessage, NSString, MFMailboxUid, MFMessage;

@interface MFDAMessage : MFMailMessage  {
    DAMailMessage *_DAMailMessage;
    MFMessage *_rfc822CreatedMessage;
    MFMailboxUid *_mailbox;
    NSString *_externalConversationID;
}

@property(readonly) DAMailMessage * DAMailMessage;


- (id)headers;
- (id)initWithDAMailMessage:(id)arg1 mailbox:(id)arg2;
- (id)DAMailMessage;
- (id)remoteMailboxURL;
- (id)externalConversationID;
- (id)mailbox;
- (id)remoteID;
- (id)headersIfAvailable;
- (BOOL)messageData:(id*)arg1 messageSize:(unsigned int*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (unsigned int)messageSize;
- (unsigned long long)messageFlags;
- (void)dealloc;
- (id)messageBody;

@end