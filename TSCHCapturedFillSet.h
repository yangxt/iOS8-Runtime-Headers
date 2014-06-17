/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray;

@interface TSCHCapturedFillSet : TSCHFillSet  {
    NSArray *mPropertyMaps;
    unsigned int mNumberOfThemeSeriesStyles;
}

+ (id)capturedFillSetFromArchive:(const struct CommandApplyFillSetArchive_CapturedFillSetArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; struct RepeatedPtrField<TSCH::ChartSeriesStyleArchive> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; unsigned int x5; int x6; unsigned int x7[1]; }*)arg1 unarchiver:(id)arg2;

- (id)fillForSeriesIndex:(unsigned int)arg1 seriesType:(id)arg2 context:(id)arg3;
- (unsigned int)countOfDefinedSeriesForSeriesType:(id)arg1;
- (id)initWithIdentifier:(id)arg1 propertyMaps:(id)arg2 numberOfThemeSeriesStyles:(unsigned int)arg3;
- (void)saveToArchive:(struct CommandApplyFillSetArchive_CapturedFillSetArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; struct RepeatedPtrField<TSCH::ChartSeriesStyleArchive> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; unsigned int x5; int x6; unsigned int x7[1]; }*)arg1 archiver:(id)arg2;

@end