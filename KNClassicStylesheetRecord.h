/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSSTheme, TSUWeakReference, NSDictionary;

@interface KNClassicStylesheetRecord : TSPObject  {
    NSDictionary *mIdentifierToStyleMap;
    TSUWeakReference *mThemeReference;
}

@property(retain) NSDictionary * identifierToStyleMap;
@property TSSTheme * theme;


- (void)setTheme:(id)arg1;
- (id)theme;
- (id)initWithTheme:(id)arg1;
- (void)dealloc;
- (void)setIdentifierToStyleMap:(id)arg1;
- (id)identifierToStyleMap;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)loadFromArchive:(const struct ClassicStylesheetRecordArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TSS::StylesheetArchive_IdentifiedStyleEntry> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; struct Reference {} *x4; int x5; unsigned int x6[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct ClassicStylesheetRecordArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TSS::StylesheetArchive_IdentifiedStyleEntry> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; struct Reference {} *x4; int x5; unsigned int x6[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
