/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSMutableDictionary, QLPreviewController, <QLPreviewControllerDataSource>, NSMapTable, NSMutableArray, <QLPreviewItem>;

@interface QLPreviewItemsSource : NSObject  {
    QLPreviewController *_previewController;
    <QLPreviewControllerDataSource> *_dataSource;
    <QLPreviewItem> *_previewItem;
    BOOL _prepared;
    int _UUID;
    NSMutableDictionary *_previewItemCache;
    unsigned int _numberOfPreviewItems;
    int _currentPreviewItemIndex;
    int _currentUIItemIndex;
    int _archiveDataSourceIndex;
    NSMutableArray *_archiveItems;
    NSMapTable *_uiItems;
}

@property(readonly) int UUID;
@property <QLPreviewControllerDataSource> * dataSource;
@property(retain) <QLPreviewItem> * previewItem;
@property(readonly) BOOL prepared;
@property(getter=isViewingArchive,readonly) BOOL viewingArchive;
@property(readonly) BOOL shouldShowFileList;
@property(readonly) int numberOfPreviewItems;
@property int currentPreviewItemIndex;
@property(readonly) <QLPreviewItem> * currentPreviewItem;
@property(readonly) int realNumberOfPreviewItems;
@property int realCurrentPreviewItemIndex;
@property(readonly) <QLPreviewItem> * realCurrentPreviewItem;
@property(readonly) int numberOfUIItems;
@property(readonly) int currentUIItemIndex;


- (id)currentPreviewItem;
- (int)currentPreviewItemIndex;
- (void)setCurrentPreviewItemIndex:(int)arg1;
- (void)reset;
- (int)UUID;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)_UIItemAtIndex:(int)arg1;
- (void)_setUIItem:(id)arg1 atIndex:(int)arg2;
- (int)numberOfUIItems;
- (id)UIItemAtIndex:(int)arg1;
- (int)currentUIItemIndex;
- (BOOL)isViewingArchive;
- (BOOL)shouldShowFileList;
- (void)preparedPreviewItemAtIndex:(int)arg1 completionBlock:(id)arg2;
- (void)resolvePreviewItem:(id)arg1 completionBlock:(id)arg2;
- (id)previewItemAtIndex:(int)arg1;
- (int)numberOfPreviewItems;
- (id)realPreviewItemAtIndex:(int)arg1;
- (BOOL)prepared;
- (int)realCurrentPreviewItemIndex;
- (void)setRealCurrentPreviewItemIndex:(int)arg1;
- (id)realCurrentPreviewItem;
- (int)realNumberOfPreviewItems;
- (void)setPreviewItem:(id)arg1;
- (id)previewItem;
- (id)initWithPreviewController:(id)arg1;
- (void)dealloc;
- (void)purgeCache;
- (void)prepare;

@end
