/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class NSMutableDictionary, NSArray, NSString, NSNumber, NSMutableArray;

@interface PLBBMavHwRfLTELogMsg : PLBBMsgRoot  {
    unsigned char _inited;
    NSString *_error;
    NSArray *_dlC0TBSzCnt;
    NSArray *_dlC1TBSzCnt;
    NSNumber *_logDuration;
    NSNumber *_dupMode;
    NSArray *_caFreqInfo;
    NSArray *_txPwrCnt;
    NSArray *_caSCCCnt;
    NSArray *_actRxTxCnt;
    NSArray *_sleepStateCnt;
    NSString *_groupEntryKey;
    NSString *_groupID;
    NSMutableArray *_groupArrEntries;
    NSMutableDictionary *_commonInfo;
    NSMutableDictionary *_kvPairs;
}

@property(retain) NSString * error;
@property(retain) NSArray * dlC0TBSzCnt;
@property(retain) NSArray * dlC1TBSzCnt;
@property(retain) NSNumber * logDuration;
@property(retain) NSNumber * dupMode;
@property(retain) NSArray * caFreqInfo;
@property(retain) NSArray * txPwrCnt;
@property(retain) NSArray * caSCCCnt;
@property(retain) NSArray * actRxTxCnt;
@property(retain) NSArray * sleepStateCnt;
@property(retain) NSString * groupEntryKey;
@property(retain) NSString * groupID;
@property(retain) NSMutableArray * groupArrEntries;
@property unsigned char inited;
@property(retain) NSMutableDictionary * commonInfo;
@property(retain) NSMutableDictionary * kvPairs;

+ (id)entryEventBackwardDefinitionBBMavHwRfLTE;
+ (id)entryEventBackwardDefinitionBBMav10HwRfLTE;

- (void)refreshMav10BBRfAllRats;
- (void)logEventBackwardBBMavHwRfLTE;
- (id)sleepStateCnt;
- (id)actRxTxCnt;
- (id)caSCCCnt;
- (id)txPwrCnt;
- (id)dlC1TBSzCnt;
- (id)dlC0TBSzCnt;
- (id)caFreqInfo;
- (id)dupMode;
- (void)refreshMavRfAllRats;
- (void)setGroupArrEntries:(id)arg1;
- (void)setGroupID:(id)arg1;
- (id)groupID;
- (void)setGroupEntryKey:(id)arg1;
- (id)groupArrEntries;
- (id)groupEntryKey;
- (id)logEventBackwardBBMav10HwRfLTE;
- (void)setSleepStateCnt:(id)arg1;
- (void)setActRxTxCnt:(id)arg1;
- (void)setCaSCCCnt:(id)arg1;
- (void)setTxPwrCnt:(id)arg1;
- (void)setDlC1TBSzCnt:(id)arg1;
- (void)setDlC0TBSzCnt:(id)arg1;
- (void)setCaFreqInfo:(id)arg1;
- (void)setDupMode:(id)arg1;
- (void)setInited:(unsigned char)arg1;
- (unsigned char)inited;
- (void)populateEntry:(id)arg1;
- (void)addPairWithKey:(id)arg1 andWithVal:(id)arg2;
- (void)setKvPairs:(id)arg1;
- (id)kvPairs;
- (void)setCommonInfo:(id)arg1;
- (id)commonInfo;
- (void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3;
- (id)logDuration;
- (void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3;
- (void)setLogDuration:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end