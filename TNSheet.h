/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSDInfoGeometry, TSWPStorage, NSMutableArray, TNDocumentRoot, NSObject<TSDContainerInfo>, TSDGuideStorage, NSString, TSPObject<TSDOwningAttachment>, NSArray;

@interface TNSheet : TSPObject <TSKDocumentObject, TSKSearchTarget, TSKModel, TSCEResolverContainer, TSDDrawableContainerInfo, TSWPHeaderFooterProvider> {
    NSString *mName;
    NSMutableArray *mChildInfos;
    BOOL mInDocument;
    unsigned int mTableNameCounter;
    TSDGuideStorage *mUserDefinedGuideStorage;
    TSWPStorage *mHeaderFooters[2][3];
    BOOL mInPortraitPageOrientation;
    BOOL mShowPageNumbers;
    BOOL mIsAutofitOn;
    BOOL _usingStartPageNumber;
    BOOL mUsesSingleHeaderFooter;
    float mContentScale;
    int mPageOrder;
    int _startPageNumber;
    float _pageHeaderInset;
    float _pageFooterInset;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _printMargins;
}

@property(retain) NSString * name;
@property(readonly) TNDocumentRoot * documentRoot;
@property(retain) TSDGuideStorage * userDefinedGuideStorage;
@property(readonly) NSArray * alignmentGuides;
@property(readonly) NSArray * alignmentGuidesForEditing;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } printMargins;
@property BOOL inPortraitPageOrientation;
@property BOOL showPageNumbers;
@property BOOL isAutofitOn;
@property float contentScale;
@property int pageOrder;
@property(getter=isUsingStartPageNumber) BOOL usingStartPageNumber;
@property int startPageNumber;
@property float pageHeaderInset;
@property float pageFooterInset;
@property BOOL usesSingleHeaderFooter;
@property(readonly) NSArray * headerStorages;
@property(readonly) NSArray * footerStorages;
@property BOOL matchesObjectPlaceholderGeometry;
@property(copy) TSDInfoGeometry * geometry;
@property NSObject<TSDContainerInfo> * parentInfo;
@property TSPObject<TSDOwningAttachment> * owningAttachment;
@property(readonly) TSPObject<TSDOwningAttachment> * owningAttachmentNoRecurse;
@property(getter=isFloatingAboveText,readonly) BOOL floatingAboveText;
@property(getter=isAnchoredToText,readonly) BOOL anchoredToText;
@property(getter=isInlineWithText,readonly) BOOL inlineWithText;
@property(getter=isAttachedToBodyText,readonly) BOOL attachedToBodyText;

+ (id)sheetForSelectionModel:(id)arg1 outIsPaginated:(BOOL*)arg2;
+ (BOOL)needsObjectUUID;

- (Class)layoutClass;
- (id)documentRoot;
- (id)childEnumerator;
- (float)contentScale;
- (void)setContentScale:(float)arg1;
- (void)setGeometry:(id)arg1;
- (id)geometry;
- (id).cxx_construct;
- (id)initWithContext:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)i_newHeaderFooterStorage;
- (void)i_importHeadersFooters:(id)arg1 headerType:(int)arg2 useSingleHeaderFooter:(BOOL)arg3;
- (id)deletionRewriteCommandForAllTables;
- (BOOL)hasReferenceToTables:(id)arg1;
- (id)tableInfoForName:(id)arg1 caseSensitive:(BOOL)arg2;
- (void)removeDrawableInfos:(id)arg1;
- (void)insertDrawableInfos:(id)arg1 context:(id)arg2;
- (void)insertDrawableInfo:(id)arg1 context:(id)arg2;
- (void)setPrintMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setUsesSingleHeaderFooter:(BOOL)arg1;
- (void)setPageFooterInset:(float)arg1;
- (void)setPageHeaderInset:(float)arg1;
- (void)setStartPageNumber:(int)arg1;
- (void)setUsingStartPageNumber:(BOOL)arg1;
- (void)setPageOrder:(int)arg1;
- (int)pageOrder;
- (void)setIsAutofitOn:(BOOL)arg1;
- (BOOL)isAutofitOn;
- (void)setShowPageNumbers:(BOOL)arg1;
- (BOOL)showPageNumbers;
- (void)setInPortraitPageOrientation:(BOOL)arg1;
- (BOOL)inPortraitPageOrientation;
- (id)footerStorages;
- (id)headerStorages;
- (id)headerFooterFragmentEnumerator;
- (int)headerFragmentIndexForModel:(id)arg1;
- (int)headerFooterTypeForModel:(id)arg1;
- (float)pageFooterInset;
- (float)pageHeaderInset;
- (int)startPageNumber;
- (BOOL)isUsingStartPageNumber;
- (void)removeDrawableInfo:(id)arg1;
- (void)moveDrawables:(id)arg1 toIndexes:(id)arg2;
- (void)insertDrawableInfo:(id)arg1 atIndex:(unsigned int)arg2 context:(id)arg3;
- (void)p_dolcDispatch:(id)arg1 skippingTextBoxes:(BOOL)arg2;
- (void)insertDrawableInfos:(id)arg1 atIndex:(unsigned int)arg2 context:(id)arg3;
- (id)p_storagesForHeaderType:(int)arg1;
- (id)p_newHeaderFooterStorageWithStylesheet:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })printMargins;
- (void)p_createHeadersFooters:(int)arg1 stylesheet:(id)arg2 mayAlreadyExist:(BOOL)arg3;
- (void)p_setupHeadersFooters;
- (id)tableInfos;
- (id)chartAndTableInfos;
- (BOOL)isForm;
- (void)enumerateHeaderFooterStoragesWithBlock:(id)arg1;
- (BOOL)canMoveDrawables:(id)arg1 toIndexes:(id)arg2;
- (void)setUserDefinedGuideStorage:(id)arg1;
- (id)userDefinedGuideStorage;
- (BOOL)isHeaderFooterEmpty:(int)arg1 fragmentAtIndex:(int)arg2;
- (BOOL)isHeaderFooterEmpty:(int)arg1;
- (id)headerFooter:(int)arg1 fragmentAtIndex:(int)arg2;
- (BOOL)usesSingleHeaderFooter;
- (float)bodyWidth;
- (id)resolversMatchingPrefix:(id)arg1;
- (unsigned int)nextUntitledResolverIndex;
- (BOOL)resolverNameIsUsed:(id)arg1;
- (id)alignmentGuidesForEditing;
- (id)alignmentGuides;
- (id)childSearchTargets;
- (void)replaceChildInfo:(id)arg1 with:(id)arg2;
- (void)removeChildInfo:(id)arg1;
- (void)moveChildren:(id)arg1 toIndexes:(id)arg2;
- (void)insertChildInfo:(id)arg1 above:(id)arg2;
- (void)insertChildInfo:(id)arg1 below:(id)arg2;
- (void)insertChildInfo:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addChildInfo:(id)arg1;
- (void)setChildInfos:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (id)initFromArchive:(const struct SheetArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; struct RepeatedPtrField<TSP::Reference> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; boolx5; boolx6; boolx7; boolx8; float x9; struct EdgeInsetsArchive {} *x10; int x11; int x12; float x13; float x14; struct Reference {} *x15; struct Reference {} *x16; struct Reference {} *x17; struct RepeatedPtrField<TSP::Reference> { void **x_18_1_1; int x_18_1_2; int x_18_1_3; int x_18_1_4; } x18; struct RepeatedPtrField<TSP::Reference> { void **x_19_1_1; int x_19_1_2; int x_19_1_3; int x_19_1_4; } x19; boolx20; boolx21; int x22; unsigned int x23[1]; }*)arg1 unarchiver:(id)arg2;
- (BOOL)isAttachedToBodyText;
- (BOOL)isInlineWithText;
- (BOOL)isAnchoredToText;
- (BOOL)isFloatingAboveText;
- (id)owningAttachmentNoRecurse;
- (void)setOwningAttachment:(id)arg1;
- (void)setParentInfo:(id)arg1;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (id)childInfos;
- (id)owningAttachment;
- (Class)repClass;
- (id)parentInfo;
- (BOOL)isThemeContent;
- (id)resolverMatchingName:(id)arg1;
- (void)saveToArchive:(struct SheetArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; struct RepeatedPtrField<TSP::Reference> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; boolx5; boolx6; boolx7; boolx8; float x9; struct EdgeInsetsArchive {} *x10; int x11; int x12; float x13; float x14; struct Reference {} *x15; struct Reference {} *x16; struct Reference {} *x17; struct RepeatedPtrField<TSP::Reference> { void **x_18_1_1; int x_18_1_2; int x_18_1_3; int x_18_1_4; } x18; struct RepeatedPtrField<TSP::Reference> { void **x_19_1_1; int x_19_1_2; int x_19_1_3; int x_19_1_4; } x19; boolx20; boolx21; int x22; unsigned int x23[1]; }*)arg1 archiver:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
