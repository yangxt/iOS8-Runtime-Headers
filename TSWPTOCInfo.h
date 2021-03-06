/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSWPTOCPartitioner, NSArray, TSWPTOCSettings, NSSet, <TSWPTOCController>;

@interface TSWPTOCInfo : TSWPShapeInfo  {
    TSWPTOCPartitioner *_partitioner;
    NSArray *_tocEntries;
    <TSWPTOCController> *_tocController;
    TSWPTOCSettings *_tocSettings;
    NSArray *_pageNumberRanges;
}

@property(setter=setTOCEntries:,retain) NSArray * tocEntries;
@property <TSWPTOCController> * tocController;
@property(setter=setTOCSettings:,retain) TSWPTOCSettings * tocSettings;
@property(retain) NSArray * pageNumberRanges;
@property(readonly) NSSet * paragraphStylesShownInTOC;

+ (BOOL)canPartition;

- (void)acceptVisitor:(id)arg1;
- (void)dealloc;
- (void)setTocController:(id)arg1;
- (id)tocController;
- (void)setTOCEntries:(id)arg1;
- (id)pageNumberRanges;
- (void)saveTOCInfoMessage:(struct TOCInfoArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ShapeInfoArchive {} *x3; struct Reference {} *x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSP::Range> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; int x7; unsigned int x8[1]; }*)arg1 archiver:(id)arg2;
- (void)loadTOCInfoMessage:(const struct TOCInfoArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ShapeInfoArchive {} *x3; struct Reference {} *x4; struct RepeatedPtrField<TSP::Reference> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct RepeatedPtrField<TSP::Range> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; int x7; unsigned int x8[1]; }*)arg1 unarchiver:(id)arg2;
- (id)tocEntries;
- (void)setPageNumberRanges:(id)arg1;
- (void)p_regenerateStorageContent;
- (id)paragraphStylesShownInTOC;
- (id)containedStorageFormattedUsingParagraphStyle:(id)arg1;
- (void)setTOCSettings:(id)arg1;
- (id)partitioner;
- (BOOL)supportsAttachedComments;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (Class)repClass;
- (id)tocSettings;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
