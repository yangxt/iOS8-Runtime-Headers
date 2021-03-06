/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface PDParagraphBuild : PDBuild  {
    NSMutableArray *mTimeNodeDataList;
    double mAutoAdvanceTime;
    BOOL mIsReversedParagraphOrder;
    int mBuildLevel;
    int mType;
}


- (void)setBuildLevel:(int)arg1;
- (void)setIsReversedParagraphOrder:(BOOL)arg1;
- (void)setAutoAdvanceTime:(double)arg1;
- (id)addTimeNodeData;
- (id)timeNodeDataAtIndex:(unsigned int)arg1;
- (unsigned int)timeNodeDataListCount;
- (id)timeNodeDataList;
- (int)buildLevel;
- (BOOL)isReversedParagraphOrder;
- (double)autoAdvanceTime;
- (int)type;
- (void)setType:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end
