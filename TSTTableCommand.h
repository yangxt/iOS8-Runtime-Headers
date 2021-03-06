/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSTEditingState, NSString, TSTTableInfo;

@interface TSTTableCommand : TSKCommand  {
    NSString *mCommandName;
    TSTTableInfo *mTableInfo;
    BOOL mShouldRunSynchronously;
    int mEditingModeAtStart;
}

@property(readonly) TSTEditingState * editingState;


- (id)actionString;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)dealloc;
- (void)endActiveTextEditingSession;
- (void)simpleApplyCellMap:(id)arg1;
- (void)applyCellMap:(id)arg1 inCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 majorDirection:(int)arg3;
- (void)applyCellMap:(id)arg1 inCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (void)applyRedoCellMap:(id)arg1 inCellRegion:(id)arg2 defaultCells:(struct _TSTDefaultCellBlock { id x1; id x2; id x3; id x4; }*)arg3;
- (void)applyUndoCellMap:(id)arg1 inCellRegion:(id)arg2 defaultCells:(struct _TSTDefaultCellBlock { id x1; id x2; id x3; id x4; }*)arg3;
- (void)applyRedoCellMap:(id)arg1 inCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 defaultCells:(struct _TSTDefaultCellBlock { id x1; id x2; id x3; id x4; }*)arg3;
- (void)applyUndoCellMap:(id)arg1 inCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 defaultCells:(struct _TSTDefaultCellBlock { id x1; id x2; id x3; id x4; }*)arg3;
- (void)applyCellDiffMap:(id)arg1;
- (id)applyCellDiff:(id)arg1 inCellRegion:(id)arg2;
- (void)setShouldRunSynchronously:(BOOL)arg1;
- (void)applyCellMap:(id)arg1 inCellRegion:(id)arg2 majorDirection:(int)arg3;
- (void)applyCellMap:(id)arg1 inCellRegion:(id)arg2;
- (void)p_applyCellMap:(id)arg1 inCellRegion:(id)arg2 majorDirection:(int)arg3 defaultCells:(struct _TSTDefaultCellBlock { id x1; id x2; id x3; id x4; }*)arg4 isUndo:(BOOL)arg5;
- (void)commitWork;
- (id)tableInfo;
- (id)initWithName:(id)arg1 tableInfo:(id)arg2 context:(id)arg3;
- (id)editingState;
- (BOOL)shouldRunSynchronously;
- (id)tableModel;
- (void)loadFromArchive:(const struct TableCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; struct CommandArchive {} *x5; unsigned int x6; int x7; unsigned int x8[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct TableCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; struct CommandArchive {} *x5; unsigned int x6; int x7; unsigned int x8[1]; }*)arg1 archiver:(id)arg2;

@end
