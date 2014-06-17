/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary;

@interface PBMasterLayoutMap : NSObject  {
    NSMutableDictionary *mMasterIdToMasterInfoMap;
    NSMutableDictionary *mTitleIdToMasterIdInfoMap;
}

+ (id)masterLayoutMap;

- (void)setMasterId:(int)arg1 forTitleId:(int)arg2;
- (id)allMasterIds;
- (void)setMasterInfo:(id)arg1 forMasterId:(int)arg2;
- (id)masterInfoForSlideHolder:(id)arg1;
- (int)masterIdForTitleId:(int)arg1;
- (id)masterInfoForMasterId:(int)arg1;
- (id)slideLayoutForSlideHolder:(id)arg1;
- (void)dealloc;
- (id)init;

@end