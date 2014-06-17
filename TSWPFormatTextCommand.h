/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSWPCharacterStyle, TSSPropertyMap, TSWPSelection, TSWPStorage, NSMutableArray;

@interface TSWPFormatTextCommand : TSWPTextBaseCommand  {
    TSWPSelection *_selection;
    TSSPropertyMap *_overridePropertyMap;
    TSWPCharacterStyle *_overrideStyle;
    struct TSWPStorageTransaction { struct vector<TSWPStorageTransactionObject, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_1_1_1; struct TSWPStorageTransactionObject {} *x_1_1_2; struct __compressed_pair<TSWPStorageTransactionObject *, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_3_2_1; } x_1_1_3; } x1; unsigned int x2; unsigned int x3; } *_undoRedoTransaction;
    BOOL _coalesceable;
    BOOL _disableCharacterStylePromotion;
    TSWPStorage *_storage;
    NSMutableArray *_changeDetails;
}

@property(readonly) TSWPStorage * storage;
@property(retain) NSMutableArray * changeDetails;

+ (void)changeCharacterStylesInStorage:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 overrideStyle:(id)arg3 overridePropertyMap:(id)arg4 undoRedoTransaction:(struct TSWPStorageTransaction { struct vector<TSWPStorageTransactionObject, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_1_1_1; struct TSWPStorageTransactionObject {} *x_1_1_2; struct __compressed_pair<TSWPStorageTransactionObject *, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_3_2_1; } x_1_1_3; } x1; unsigned int x2; unsigned int x3; }*)arg5;

- (id)actionString;
- (BOOL)process;
- (id)storage;
- (void)undoRedo;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 style:(id)arg3 coalesceable:(BOOL)arg4 disableCharacterStylePromotion:(BOOL)arg5;
- (id)changeDetails;
- (void)setChangeDetails:(id)arg1;
- (BOOL)p_rangeEncompassesWholeParagraph:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 paragraphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)p_propertyMap:(id)arg1 containsOnlyPropertiesOfStyleClass:(Class)arg2;
- (void)p_invalidateSelection:(id)arg1;
- (void)p_commitWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 impliedUIFormatDirectionIsRTL:(BOOL)arg2;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 propertyKey:(int)arg3 propertyValue:(id)arg4 coalesceable:(BOOL)arg5;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 propertyKey:(int)arg3 propertyValue:(id)arg4;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 overridePropertyMap:(id)arg3 coalesceable:(BOOL)arg4;
- (BOOL)shouldRunSynchronously;
- (void)coalesceWithCommand:(id)arg1;
- (BOOL)canCoalesceWithCommand:(id)arg1;
- (void)loadFromArchive:(const struct FormatTextCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CommandArchive {} *x3; struct Reference {} *x4; struct UndoTransaction {} *x5; unsigned int x6; unsigned int x7; unsigned int x8; int x9; unsigned int x10[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct FormatTextCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CommandArchive {} *x3; struct Reference {} *x4; struct UndoTransaction {} *x5; unsigned int x6; unsigned int x7; unsigned int x8; int x9; unsigned int x10[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end