/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSArray, NSString, NSData, NSDictionary, NSDate;

@interface GKTurnBasedExchangeInternal : GKInternalRepresentation  {
    NSString *_exchangeID;
    NSArray *_recipientIndexes;
    NSString *_statusString;
    NSDictionary *_localizableMessage;
    NSData *_data;
    NSDate *_sendDate;
    NSDate *_timeoutDate;
    NSDate *_completionDate;
    NSArray *_replies;
    unsigned char _senderIndex;
}

@property(retain) NSString * exchangeID;
@property unsigned char senderIndex;
@property(retain) NSArray * recipientIndexes;
@property(retain) NSString * statusString;
@property(retain) NSDictionary * localizableMessage;
@property(retain) NSData * data;
@property(retain) NSDate * sendDate;
@property(retain) NSDate * timeoutDate;
@property(retain) NSDate * completionDate;
@property(retain) NSArray * replies;

+ (id)secureCodedPropertyKeys;

- (void)setStatusString:(id)arg1;
- (id)sendDate;
- (void)setSendDate:(id)arg1;
- (id)statusString;
- (void)setRecipientIndexes:(id)arg1;
- (void)setSenderIndex:(unsigned char)arg1;
- (void)setExchangeID:(id)arg1;
- (void)setTimeoutDate:(id)arg1;
- (id)exchangeID;
- (void)setLocalizableMessage:(id)arg1;
- (id)localizableMessage;
- (void)setReplies:(id)arg1;
- (id)recipientIndexes;
- (unsigned char)senderIndex;
- (id)replies;
- (id)timeoutDate;
- (void)setData:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)setCompletionDate:(id)arg1;
- (id)completionDate;

@end
