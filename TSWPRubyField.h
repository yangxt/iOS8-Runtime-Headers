/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface TSWPRubyField : TSWPSmartField  {
    NSString *_rubyText;
}

@property(copy) NSString * rubyText;
@property(readonly) NSString * baseText;
@property(readonly) int baseTextScript;


- (BOOL)allowsEditing;
- (id)text;
- (void)dealloc;
- (int)baseTextScript;
- (id)baseText;
- (id)initWithContext:(id)arg1 rubyText:(id)arg2;
- (id)rubyText;
- (void)setRubyText:(id)arg1;
- (int)attributeArrayKind;
- (BOOL)canCopy:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (int)styleAttributeArrayKind;
- (int)smartFieldKind;
- (void)loadFromArchive:(const struct RubyFieldArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct SmartFieldArchive {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; int x5; unsigned int x6[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct RubyFieldArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct SmartFieldArchive {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; int x5; unsigned int x6[1]; }*)arg1 archiver:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end