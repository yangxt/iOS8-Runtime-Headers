/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class NSString, NSDate, NSNumber, NSMutableDictionary;

@interface PLBBMsgAll : PLBBMsgRoot  {
    NSNumber *_seqNum;
    NSDate *_bbDate;
    NSString *_payload;
    NSString *_error;
    NSMutableDictionary *_info;
    NSNumber *_iseqNum;
    NSDate *_ibbDate;
    NSString *_ieventCode;
    NSString *_ipayload;
    NSString *_ierror;
}

@property(retain) NSNumber * seqNum;
@property(retain) NSDate * bbDate;
@property(retain) NSString * payload;
@property(retain) NSString * error;
@property(retain) NSMutableDictionary * info;
@property(retain) NSNumber * iseqNum;
@property(retain) NSDate * ibbDate;
@property(retain) NSString * ieventCode;
@property(retain) NSString * ipayload;
@property(retain) NSString * ierror;

+ (id)entryEventNoneBBMsgAll;

- (void)setIerror:(id)arg1;
- (id)ierror;
- (void)setIpayload:(id)arg1;
- (id)ipayload;
- (void)setIeventCode:(id)arg1;
- (id)ieventCode;
- (void)setIbbDate:(id)arg1;
- (id)ibbDate;
- (void)setIseqNum:(id)arg1;
- (id)iseqNum;
- (void)setBbDate:(id)arg1;
- (void)setSeqNum:(id)arg1;
- (void)logEventNoneBBMsgAll;
- (void)refreshBBMsgAll;
- (void)setISeqNum:(id)arg1;
- (id)bbDate;
- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
- (id)seqNum;
- (id)error;
- (void)setError:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setPayload:(id)arg1;
- (void).cxx_destruct;
- (id)info;
- (id)payload;

@end