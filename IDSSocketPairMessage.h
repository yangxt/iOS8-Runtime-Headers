/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSDate, NSData, <NSObject>;

@interface IDSSocketPairMessage : NSObject  {
    NSData *_underlyingData;
    NSDate *_expiryTime;
    unsigned char _command;
    <NSObject> *_context;
}

@property(readonly) unsigned char command;
@property(retain,readonly) NSData * underlyingData;
@property(readonly) unsigned int underlyingDataLength;
@property(retain) <NSObject> * context;
@property(retain) NSDate * expiryTime;

+ (id)messageWithData:(id)arg1;
+ (unsigned int)dataLengthFromHeaderData:(id)arg1;
+ (id)messageWithHeaderData:(id)arg1 data:(id)arg2;
+ (unsigned int)headerDataSize;

- (void)setExpiryTime:(id)arg1;
- (id)expiryTime;
- (id)_existingUnderlyingData;
- (unsigned int)underlyingDataLength;
- (id)_nonHeaderData;
- (id)underlyingData;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (void)setContext:(id)arg1;
- (id)context;
- (void)dealloc;
- (unsigned char)command;

@end
