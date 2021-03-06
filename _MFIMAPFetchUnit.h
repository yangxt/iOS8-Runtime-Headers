/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class MFIMAPFetchResult, <MFDataConsumer>, NSString;

@interface _MFIMAPFetchUnit : NSObject  {
    MFIMAPFetchResult *_expectedFetchResult;
    <MFDataConsumer> *_bodyDataConsumer;
    NSString *_consumerSection;
    NSString *_fetchItem;
    unsigned int _uid;
}

@property(retain) <MFDataConsumer> * bodyDataConsumer;
@property(retain) NSString * consumerSection;
@property(copy) NSString * fetchItem;
@property unsigned int uid;


- (void)_setupExpectedFetchResult;
- (id)copyFailedFetchResponse;
- (id)consumerSection;
- (id)bodyDataConsumer;
- (id)fetchItem;
- (BOOL)matchesFetchResponse:(id)arg1;
- (void)setConsumerSection:(id)arg1;
- (void)setBodyDataConsumer:(id)arg1;
- (void)setFetchItem:(id)arg1;
- (unsigned int)uid;
- (void)dealloc;
- (void)setUid:(unsigned int)arg1;

@end
