/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSData, NSString;

@interface IDSSocketPairDataMessage : IDSSocketPairMessage  {
    unsigned int _sequenceNumber;
    unsigned short _streamID;
    unsigned int _offset;
    NSData *_data;
    BOOL _expectsPeerResponse;
    NSString *_peerResponseIdentifier;
    NSString *_messageUUID;
}

@property unsigned int sequenceNumber;
@property(readonly) unsigned short streamID;
@property(retain,readonly) NSData * data;
@property(readonly) BOOL expectsPeerResponse;
@property(retain,readonly) NSString * peerResponseIdentifier;
@property(retain,readonly) NSString * messageUUID;


- (id)messageUUID;
- (id)peerResponseIdentifier;
- (id)initWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 expectsPeerResponse:(BOOL)arg3 peerResponseIdentifier:(id)arg4 messageUUID:(id)arg5 data:(id)arg6;
- (id)_nonHeaderData;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (BOOL)expectsPeerResponse;
- (void)setSequenceNumber:(unsigned int)arg1;
- (unsigned short)streamID;
- (id)data;
- (void)dealloc;
- (unsigned char)command;
- (unsigned int)sequenceNumber;

@end