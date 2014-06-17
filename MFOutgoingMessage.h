/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFMessageBody, MFMutableMessageHeaders;

@interface MFOutgoingMessage : MFMailMessage  {
    MFMessageBody *_messageBody;
    MFMutableMessageHeaders *_messageHeaders;
}


- (id)headers;
- (id)headersIfAvailable;
- (void)setMutableHeaders:(id)arg1;
- (BOOL)messageData:(id*)arg1 messageSize:(unsigned int*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (id)messageData;
- (id)messageBodyIfAvailable;
- (id)messageStore;
- (id)mutableHeaders;
- (unsigned int)messageSize;
- (void)dealloc;
- (void)setMessageBody:(id)arg1;
- (id)messageBody;

@end