/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSKReplaceAllCommand, NSString;

@interface TSKReplaceAllChildCommand : TSKCommand  {
    TSKReplaceAllCommand *_parent;
    unsigned int _countOfItemsReplaced;
}

@property TSKReplaceAllCommand * parent;
@property(readonly) NSString * findString;
@property(readonly) NSString * replaceString;
@property(readonly) unsigned int options;
@property(readonly) unsigned int countOfItemsReplaced;


- (id)parent;
- (void)setParent:(id)arg1;
- (unsigned int)options;
- (unsigned int)countOfItemsReplaced;
- (id)replaceString;
- (id)findString;
- (id)initWithParentCommand:(id)arg1;
- (void)loadFromArchive:(const struct ReplaceAllChildCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CommandArchive {} *x3; int x4; unsigned int x5[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct ReplaceAllChildCommandArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct CommandArchive {} *x3; int x4; unsigned int x5[1]; }*)arg1 archiver:(id)arg2;

@end
