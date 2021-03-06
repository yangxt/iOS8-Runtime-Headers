/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSCHChartUIState : NSObject <NSCopying> {
    BOOL _useFullKeyboard;
    unsigned int _lastRowSelectedInCDE;
    unsigned int _lastRowCountInCDE;
    unsigned int _lastColSelectedInCDE;
    unsigned int _lastColCountInCDE;
}

@property(readonly) unsigned int lastRowSelectedInCDE;
@property(readonly) unsigned int lastRowCountInCDE;
@property(readonly) unsigned int lastColSelectedInCDE;
@property(readonly) unsigned int lastColCountInCDE;
@property(readonly) BOOL useFullKeyboard;


- (id)initWithArchive:(const struct ChartUIState { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; int x4; int x5; int x6; int x7; boolx8; int x9; unsigned int x10[1]; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (BOOL)useFullKeyboard;
- (unsigned int)lastColCountInCDE;
- (unsigned int)lastColSelectedInCDE;
- (unsigned int)lastRowCountInCDE;
- (unsigned int)lastRowSelectedInCDE;
- (id)initWithRowRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 colRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 useFullKeyboard:(BOOL)arg3;
- (void)saveToArchive:(struct ChartUIState { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; int x4; int x5; int x6; int x7; boolx8; int x9; unsigned int x10[1]; }*)arg1;

@end
