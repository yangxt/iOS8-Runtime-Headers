/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSTTableDataObjectKeyDict, TSTIntegerKeyDict;

@interface TSTTableDataList : TSPObject  {
    int mListType;
    unsigned int mNextID;
    TSTIntegerKeyDict *mData;
    TSTTableDataObjectKeyDict *mIDs;
}

@property(readonly) unsigned int nextID;
@property(readonly) TSTIntegerKeyDict * data;

+ (id)newObjectForUnarchiver:(id)arg1;

- (id)data;
- (void)dealloc;
- (void)p_customFormatList_setNextID:(unsigned int)arg1;
- (unsigned int)nextID;
- (void)enumerateCustomFormatObjectsUsingBlock:(id)arg1;
- (void)p_setupWithType:(int)arg1 nextKeyID:(unsigned int)arg2;
- (BOOL)supportsIDMapForType:(int)arg1;
- (id)initWithType:(int)arg1 context:(id)arg2;
- (void)enumerateCustomFormatsUsingBlock:(id)arg1;
- (unsigned long)flushableSize;
- (id)allRichTextPayloadStorages;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)packageLocator;

@end