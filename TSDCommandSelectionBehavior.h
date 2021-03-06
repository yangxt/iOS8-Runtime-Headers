/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSPObject<TSKModel>, TSKSelection<TSDCanvasSelection>, TSKDocumentRoot, TSPObject<TSKArchivedSelection>, NSObject<TSDCanvasEditor>;

@interface TSDCommandSelectionBehavior : TSKCommandSelectionBehavior  {
    TSPObject<TSKArchivedSelection> *mArchivedOldCanvasSelection;
    TSPObject<TSKArchivedSelection> *mArchivedNewCanvasSelection;
    TSPObject<TSKModel> *mModelForSelection;
    TSPObject<TSKModel> *mOldModelForSelection;
    TSKDocumentRoot *mDocumentRootForSelection;
    int mType;
    NSObject<TSDCanvasEditor> *mCanvasEditor;
    unsigned int mSelectionFlags;
}

@property(readonly) NSObject<TSDCanvasEditor> * canvasEditor;
@property(readonly) TSPObject<TSKModel> * modelForSelection;
@property(readonly) TSPObject<TSKModel> * oldModelForSelection;
@property(readonly) TSKSelection<TSDCanvasSelection> * canvasSelectionForCommit;
@property(readonly) TSKSelection<TSDCanvasSelection> * canvasSelectionForUndo;
@property(readonly) TSKSelection<TSDCanvasSelection> * canvasSelectionForRedo;


- (void)dealloc;
- (id)initWithCanvasEditor:(id)arg1 type:(int)arg2 newModel:(id)arg3 constructedInfos:(id)arg4;
- (id)canvasSelectionForRedo;
- (void)registerSelectionChangesForRedo;
- (id)canvasSelectionForUndo;
- (void)registerSelectionChangesForUndo;
- (id)destructiveSelectionChangeForSelection:(id)arg1;
- (void)p_adjustCommentVisibilityWhenNecessary;
- (void)p_registerSelectionInvalidation:(id)arg1;
- (id)oldModelForSelection;
- (void)p_registerSelectionChange:(id)arg1 forModel:(id)arg2 withSelectionFlags:(unsigned int)arg3;
- (id)canvasSelectionForCommit;
- (void)registerSelectionChangesForCommit;
- (id)initWithCanvasEditor:(id)arg1 type:(int)arg2 canvasSelection:(id)arg3;
- (id)initWithCanvasEditor:(id)arg1 type:(int)arg2 canvasSelection:(id)arg3 selectionFlags:(unsigned int)arg4;
- (id)modelForSelection;
- (id)initWithCanvasEditor:(id)arg1 type:(int)arg2 constructedInfos:(id)arg3;
- (id)initWithCanvasEditor:(id)arg1;
- (id)initWithCanvasEditor:(id)arg1 type:(int)arg2;
- (id)canvasEditor;
- (void)loadFromArchive:(const struct CommandSelectionBehaviorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct Reference {} *x4; struct Reference {} *x5; struct Reference {} *x6; int x7; int x8; unsigned int x9[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct CommandSelectionBehaviorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct Reference {} *x4; struct Reference {} *x5; struct Reference {} *x6; int x7; int x8; unsigned int x9[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
