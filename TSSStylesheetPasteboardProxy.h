/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSUMutableRetainedPointerSet, NSObject<OS_dispatch_queue>, TSSStylesheet;

@interface TSSStylesheetPasteboardProxy : TSPObject  {
    TSSStylesheet *mStylesheet;
    TSUMutableRetainedPointerSet *mReferencedStyles;
    NSObject<OS_dispatch_queue> *mReferencedStylesQueue;
    BOOL mSelfArchiving;
}


- (void)dealloc;
- (void)addStyleReference:(id)arg1;
- (id)initWithContext:(id)arg1 stylesheet:(id)arg2;
- (void)saveToArchiver:(id)arg1;

@end
