/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSWPSelection : TSKSelection <NSCopying, TSDTextSelection> {
    int _type;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    unsigned int _headChar;
    unsigned int _tailChar;
    BOOL _leadingEdge;
    unsigned int _leadingCharIndex;
    BOOL _validVisualRanges;
    int _styleInsertionBehavior;
    int _caretAffinity;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _smartFieldRange;
    struct TSWPRangeVector { 
        struct _NSRange {} *__begin_; 
        struct _NSRange {} *__end_; 
        struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { 
            struct _NSRange {} *__first_; 
        } __end_cap_; 
    } _visualRanges;
}

@property(readonly) int type;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } rawRange;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } smartFieldRange;
@property unsigned int headChar;
@property unsigned int tailChar;
@property(readonly) BOOL leadingEdge;
@property(readonly) unsigned int leadingCharIndex;
@property(readonly) BOOL validVisualRanges;
@property(readonly) BOOL isVisual;
@property(readonly) int styleInsertionBehavior;
@property(readonly) int caretAffinity;
@property(readonly) BOOL isAtEndOfLine;
@property(readonly) BOOL isRange;
@property(readonly) BOOL isInsertionPoint;
@property(readonly) BOOL isValid;
@property(readonly) BOOL isEmpty;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } range;

+ (BOOL)p_checkEndOfLineFlagForRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1 leadingEdge:(BOOL*)arg2 type:(int*)arg3 endOfLine:(BOOL)arg4 storage:(id)arg5;
+ (id)selectionWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 type:(int)arg2 leadingEdge:(BOOL)arg3 storage:(id)arg4;
+ (Class)archivedSelectionClass;
+ (id)selectionWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

- (BOOL)intersectsRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)initWithArchive:(const struct SelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Range {} *x3; int x4; int x5; struct Range {} *x6; int x7; int x8; unsigned int x9[1]; }*)arg1;
- (BOOL)isRange;
- (void).cxx_destruct;
- (id).cxx_construct;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (unsigned int)end;
- (int)compare:(id)arg1;
- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;
- (BOOL)isValid;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)start;
- (void)dealloc;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)validVisualRanges;
- (int)styleInsertionBehavior;
- (unsigned int)leadingCharIndex;
- (void)setTailChar:(unsigned int)arg1;
- (unsigned int)tailChar;
- (void)setHeadChar:(unsigned int)arg1;
- (unsigned int)headChar;
- (struct _NSRange { unsigned int x1; unsigned int x2; })smartFieldRange;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rawRange;
- (BOOL)containsCharacterAtIndex:(unsigned int)arg1 allowRightEdge:(BOOL)arg2;
- (BOOL)containsCharacterAtIndex:(unsigned int)arg1;
- (unsigned int)rightEdge;
- (unsigned int)leftEdge;
- (struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)i_visualRanges;
- (id)copyWithVisualRanges:(const struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg1 startChar:(unsigned int)arg2 endChar:(unsigned int)arg3 rightToLeft:(BOOL)arg4 sameLine:(BOOL)arg5;
- (id)constrainToRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)copyWithNewType:(int)arg1;
- (id)copyWithNewVisualTypeRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 head:(unsigned int)arg2 tail:(unsigned int)arg3;
- (id)copyWithNewType:(int)arg1 smartFieldRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)isEquivalentForInsertionStyle:(id)arg1;
- (id)initWithType:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4;
- (void)i_setVisualRanges:(const struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg1;
- (void)setHeadChar:(unsigned int)arg1 tailChar:(unsigned int)arg2;
- (id)initWithType:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 leadingEdge:(BOOL)arg6 storage:(id)arg7;
- (id)initWithType:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 leadingEdge:(BOOL)arg6 leadingCharIndex:(unsigned int)arg7;
- (BOOL)leadingEdge;
- (unsigned int)insertionChar;
- (int)caretAffinity;
- (id)visualRangesArray;
- (id)copyWithNewType:(int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })superRange;
- (id)copyWithNewVisualRanges:(const struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)arg1;
- (id)copyWithNewRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (unsigned int)visualRangeCount;
- (const struct TSWPRangeVector { struct _NSRange {} *x1; struct _NSRange {} *x2; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange {} *x_3_1_1; } x3; }*)visualRanges;
- (BOOL)isVisual;
- (BOOL)isInsertionPoint;
- (BOOL)isAtEndOfLine;
- (void)saveToArchive:(struct SelectionArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Range {} *x3; int x4; int x5; struct Range {} *x6; int x7; int x8; unsigned int x9[1]; }*)arg1 archiver:(id)arg2;

@end
