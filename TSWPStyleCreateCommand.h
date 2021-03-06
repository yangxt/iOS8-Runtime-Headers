/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSWPStyleCreateCommand : TSWPStyleBaseCommand  {
    unsigned int _presetIndex;
}

@property unsigned int presetIndex;


- (id)actionString;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)setPresetIndex:(unsigned int)arg1;
- (id)initWithTheme:(id)arg1 style:(id)arg2 presetIndex:(unsigned int)arg3;
- (unsigned int)presetIndex;
- (void)p_CommitAndRedo;
- (void)loadFromMessage:(const struct StyleCreateCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StyleBaseCommandArchive {} *x3; unsigned int x4; int x5; unsigned int x6[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToMessage:(struct StyleCreateCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct StyleBaseCommandArchive {} *x3; unsigned int x4; int x5; unsigned int x6[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
