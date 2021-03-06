/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TNPageCoordinateDictionary, NSObject<TNPageControllerDelegate>, TNPrintProperties, TNDocumentRoot, TNSheet, TSUPointerKeyDictionary, NSMutableDictionary;

@interface TNPageController : NSObject <TSKChangeSourceObserver> {
    TNDocumentRoot *mDocumentRoot;
    TNPageCoordinateDictionary *mPageLayoutCache;
    TSUPointerKeyDictionary *mHintCacheDictionary;
    TSUPointerKeyDictionary *mSheetPageCountCache;
    TNSheet *mSheet;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    } mMaxPageCoordinate;
    BOOL mMaxPageCoordinateValid;
    NSMutableDictionary *mCachedAutoFitContentScaleDictionary;
    TNPageCoordinateDictionary *mHeaderLayerCache;
    TNPageCoordinateDictionary *mFooterLayerCache;
    int mCachedPageCountDuringDynamicContentScaleChange;
    int mPriorPageCount;
    int mSubsequentPageCount;
    BOOL mComputingPageCounts;
    BOOL mInDynamicContentScaleChange;
    NSObject<TNPageControllerDelegate> *mDelegate;
    TNPrintProperties *_printProperties;
    float mUserViewScale;
    float _headerTextHeight;
    float _footerTextHeight;
}

@property TNDocumentRoot * documentRoot;
@property NSObject<TNPageControllerDelegate> * delegate;
@property TNSheet * sheet;
@property(readonly) struct CGSize { float x1; float x2; } pageSize;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentFrame;
@property(readonly) TNPrintProperties * printProperties;
@property(getter=isPortrait,readonly) BOOL portrait;
@property(readonly) unsigned int numPages;
@property(readonly) float contentScale;
@property float userViewScale;
@property float headerTextHeight;
@property float footerTextHeight;
@property(readonly) BOOL inDynamicContentScaleChange;
@property(readonly) struct CGSize { float x1; float x2; } pageSizeWithGutter;

+ (float)autoFitContentScaleForSheet:(id)arg1;
+ (id)p_cachedAutoFitContentScaleDictionary;
+ (float)p_contentScaleAutoFitForSheet:(id)arg1;

- (id)sheet;
- (void)setDocumentRoot:(id)arg1;
- (id)documentRoot;
- (void)setSheet:(id)arg1;
- (struct CGSize { float x1; float x2; })pageSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrame;
- (float)contentScale;
- (id).cxx_construct;
- (unsigned int)pageCount;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (BOOL)isPortrait;
- (unsigned int)numPages;
- (id)pageInfoForPageIndex:(unsigned int)arg1;
- (void)invalidatePageLayout;
- (void)willExitPrintView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })printingLayoutRectForPageIndex:(unsigned int)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })pageCoordinateForPageLayoutAtUnscaledPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)layoutInPageRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg1 forLayoutController:(id)arg2;
- (struct CGSize { float x1; float x2; })contentSizeForCanvasLayer;
- (void)setUserViewScale:(float)arg1;
- (void)canvasViewScaleDidChange:(float)arg1;
- (void)p_layoutInfo:(id)arg1 intoPageRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg2;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })pageRangeForPageIndex:(unsigned int)arg1;
- (id)p_pageInfoForPageAtIndex:(unsigned int)arg1;
- (id)p_layoutForInfo:(id)arg1 atCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 parentLayout:(id)arg3;
- (void)p_enumerateOverPageRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg1 usingBlock:(id)arg2;
- (id)p_pageLayoutAtCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })pageRangeWithPlaceholdersWithUpperBound:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)p_headersOrFootersContainPageNumberRelatedAttachments;
- (id)p_hintCacheForInfo:(id)arg1;
- (void)updatePrintMargins;
- (void)updateContentScale;
- (void)invalidateDrawableLayouts;
- (void)removeLayoutsFromPages;
- (void)p_layoutInfo:(id)arg1 intoPageLayout:(id)arg2 atPageCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3;
- (struct CGSize { float x1; float x2; })pageSizeWithGutter;
- (void)p_updateVisiblePageRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg1 forLayoutController:(id)arg2;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })pageCoordinateForDrawableAtUnscaledPoint:(struct CGPoint { float x1; float x2; })arg1;
- (int)p_priorPageCount;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })pageRangeForContent;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })pageCoordinateForMaxVisiblePage;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })p_pageCoordinateForPageLayoutAtDevicePoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })pageRangeForInfo:(id)arg1 upperBound:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })pageRangeForContentWithUpperBound:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)invalidatePageLayoutGeometries;
- (void)updateViewScale;
- (void)p_measureHeadersAndFooters;
- (float)footerTextHeight;
- (float)headerTextHeight;
- (int)p_pageCountForSheet:(id)arg1;
- (int)p_updateCachedPageCountForCurrentSheet;
- (void)p_computeSubsequentPageCountForCurrentSheet;
- (void)p_computePriorPageCountForCurrentSheet;
- (void)p_clearHintCache;
- (void)invalidateCachedAutoFitContentScaleForSheet:(id)arg1;
- (void)p_didEndDynamicContentScaleChange:(id)arg1;
- (void)setFooterTextHeight:(float)arg1;
- (void)setHeaderTextHeight:(float)arg1;
- (void)syncPositionOfLayout:(id)arg1 atCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstPartitionFrameForInfo:(id)arg1 outStartPageCoordinate:(out struct { unsigned short x1; unsigned char x2; unsigned char x3; }*)arg2;
- (void)i_setLayer:(id)arg1 forHeaderType:(int)arg2 fragment:(int)arg3 atPageCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg4;
- (BOOL)inDynamicContentScaleChange;
- (float)userViewScale;
- (id)i_layerForHeaderType:(int)arg1 fragment:(int)arg2 atPageCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3;
- (void)p_willBeginDynamicContentScaleChange:(id)arg1;
- (unsigned int)pageNumberForPageCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)i_invalidateHintCache;
- (void)i_invalidatePageLayoutCache;
- (id)printProperties;
- (void)layoutAtPageIndex:(unsigned int)arg1 forLayoutController:(id)arg2;
- (void)registerPageLayout:(id)arg1 atPageCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })pageCoordinateForPageIndex:(unsigned int)arg1;
- (id)pageLayoutGeometryForPageCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (id)pageLayoutGeometryForPrintingAtPageCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)isPagePlaceholderAtPageCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (id)initWithDocumentRoot:(id)arg1;

@end
