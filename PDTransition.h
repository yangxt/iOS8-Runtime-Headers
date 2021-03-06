/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDTransitionOptions;

@interface PDTransition : OADProperties  {
    BOOL mHasType;
    int mType;
    BOOL mHasSpeed;
    int mSpeed;
    BOOL mHasAdvanceOnClick;
    BOOL mIsAdvanceOnClick;
    BOOL mHasAdvanceAfterTime;
    int mAdvanceAfterTime;
    PDTransitionOptions *mOptions;
}


- (void)setAdvanceAfterTime:(int)arg1;
- (int)advanceAfterTime;
- (void)setIsAdvanceOnClick:(BOOL)arg1;
- (BOOL)isAdvanceOnClick;
- (BOOL)hasTransitionOptions;
- (BOOL)hasAdvanceAfterTime;
- (BOOL)hasIsAdvanceOnClick;
- (BOOL)hasType;
- (BOOL)hasSpeed;
- (void)setOptions:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)options;
- (void)setSpeed:(int)arg1;
- (int)speed;
- (void)dealloc;
- (id)init;

@end
