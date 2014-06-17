/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class KNMasterSlide, KNNoteInfo, TSDDrawableInfo;

@interface KNSlide : KNAbstractSlide <TSKModel, TSSThemedObject, TSKTransformableObject> {
    KNMasterSlide *mMaster;
    KNNoteInfo *mNote;
    TSDDrawableInfo *mInfoUsingObjectPlaceholderGeometry;
    BOOL mInfoUsingObjectPlaceholderGeometryMatchesObjectPlaceholderGeometry;
}

@property(retain) KNMasterSlide * master;
@property(retain) KNNoteInfo * note;
@property(retain) TSDDrawableInfo * infoUsingObjectPlaceholderGeometry;
@property(readonly) BOOL slideObjectsLayerWithMaster;
@property BOOL infoUsingObjectPlaceholderGeometryMatchesObjectPlaceholderGeometry;

+ (id)blankSlideWithSlideNode:(id)arg1 master:(id)arg2 andShow:(id)arg3;

- (id)master;
- (void)setMaster:(id)arg1;
- (void)acceptVisitor:(id)arg1;
- (void)dealloc;
- (void)setNote:(id)arg1;
- (id)note;
- (BOOL)isNoteSelectionModel:(id)arg1;
- (void)setToMasterUsingBlob:(id)arg1;
- (void)setInfoUsingObjectPlaceholderGeometryMatchesObjectPlaceholderGeometry:(BOOL)arg1;
- (BOOL)infoUsingObjectPlaceholderGeometryMatchesObjectPlaceholderGeometry;
- (void)setInfoUsingObjectPlaceholderGeometry:(id)arg1;
- (id)infoUsingObjectPlaceholderGeometry;
- (BOOL)p_urlIsSlideSpecific:(id)arg1;
- (void)setToMaster:(id)arg1;
- (id)initWithSlideNode:(id)arg1 master:(id)arg2 andShow:(id)arg3;
- (BOOL)slideObjectsLayerWithMaster;
- (id)infoCorrespondingToMasterInfo:(id)arg1;
- (void)removeDrawable:(id)arg1;
- (id)defaultSlideNumberPlaceholderWithContext:(id)arg1;
- (id)defaultBodyPlaceholderWithContext:(id)arg1;
- (id)defaultTitlePlaceholderWithContext:(id)arg1;
- (void)insertDrawables:(id)arg1 atIndex:(unsigned int)arg2 dolcContext:(id)arg3;
- (void)updateSlideSpecificLinkCountsWithOldHyperlink:(id)arg1 newHyperlink:(id)arg2;
- (id)infosToDisplay;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)commandForTransformingByTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (id)childCommandForApplyThemeCommand:(id)arg1;
- (void)loadFromArchive:(const struct SlideArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct RepeatedPtrField<TSP::Reference> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; struct RepeatedPtrField<KN::BuildChunkArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct TransitionArchive {} *x6; struct Reference {} *x7; struct Reference {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct RepeatedPtrField<TSP::Reference> { void **x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; struct RepeatedPtrField<TSP::Reference> { void **x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; } x12; struct RepeatedPtrField<KN::SlideArchive_SageTagMapEntry> { void **x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; } x13; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x14; struct GeometryArchive {} *x15; unsigned int x16; unsigned int x17; struct ShapeStylePropertiesArchive {} *x18; struct GeometryArchive {} *x19; unsigned int x20; unsigned int x21; struct ShapeStylePropertiesArchive {} *x22; struct GeometryArchive {} *x23; unsigned int x24; unsigned int x25; struct ShapeStylePropertiesArchive {} *x26; struct Reference {} *x27; struct RepeatedPtrField<TSP::Reference> { void **x_28_1_1; int x_28_1_2; int x_28_1_3; int x_28_1_4; } x28; struct RepeatedPtrField<TSP::Reference> { void **x_29_1_1; int x_29_1_2; int x_29_1_3; int x_29_1_4; } x29; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x30; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x31; struct Reference {} *x32; struct RepeatedPtrField<TSD::GuideArchive> { void **x_33_1_1; int x_33_1_2; int x_33_1_3; int x_33_1_4; } x33; struct Reference {} *x34; struct Reference {} *x35; struct Reference {} *x36; boolx37; boolx38; boolx39; boolx40; int x41; unsigned int x42[2]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct SlideArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct RepeatedPtrField<TSP::Reference> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; struct RepeatedPtrField<KN::BuildChunkArchive> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; struct TransitionArchive {} *x6; struct Reference {} *x7; struct Reference {} *x8; struct Reference {} *x9; struct Reference {} *x10; struct RepeatedPtrField<TSP::Reference> { void **x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; struct RepeatedPtrField<TSP::Reference> { void **x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; } x12; struct RepeatedPtrField<KN::SlideArchive_SageTagMapEntry> { void **x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; } x13; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x14; struct GeometryArchive {} *x15; unsigned int x16; unsigned int x17; struct ShapeStylePropertiesArchive {} *x18; struct GeometryArchive {} *x19; unsigned int x20; unsigned int x21; struct ShapeStylePropertiesArchive {} *x22; struct GeometryArchive {} *x23; unsigned int x24; unsigned int x25; struct ShapeStylePropertiesArchive {} *x26; struct Reference {} *x27; struct RepeatedPtrField<TSP::Reference> { void **x_28_1_1; int x_28_1_2; int x_28_1_3; int x_28_1_4; } x28; struct RepeatedPtrField<TSP::Reference> { void **x_29_1_1; int x_29_1_2; int x_29_1_3; int x_29_1_4; } x29; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x30; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x31; struct Reference {} *x32; struct RepeatedPtrField<TSD::GuideArchive> { void **x_33_1_1; int x_33_1_2; int x_33_1_3; int x_33_1_4; } x33; struct Reference {} *x34; struct Reference {} *x35; struct Reference {} *x36; boolx37; boolx38; boolx39; boolx40; int x41; unsigned int x42[2]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (BOOL)isComponentRoot;
- (id)initFromUnarchiver:(id)arg1;
- (id)packageLocator;

@end