/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSUIntegerKeyDictionary;

@interface TSTCellDictionary : NSObject  {
    TSUIntegerKeyDictionary *mDict;
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    } mDictRWLock;
}


- (void)dealloc;
- (id)init;
- (id)allCells;
- (void)applyBlockToAllCells:(id)arg1;
- (void)removeAllCells;
- (id)cellAtCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)setCell:(id)arg1 atCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;

@end