/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDInfoGeometry, NSObject<TSDContainerInfo>, TSPObject<TSDOwningAttachment>, TNPageController;

@interface TNPageInfoContainer : NSObject <TSDContainerInfo> {
    TNPageController *_pageController;
    unsigned int _pageIndex;
}

@property BOOL matchesObjectPlaceholderGeometry;
@property(copy) TSDInfoGeometry * geometry;
@property NSObject<TSDContainerInfo> * parentInfo;
@property TSPObject<TSDOwningAttachment> * owningAttachment;
@property(readonly) TSPObject<TSDOwningAttachment> * owningAttachmentNoRecurse;
@property(getter=isFloatingAboveText,readonly) BOOL floatingAboveText;
@property(getter=isAnchoredToText,readonly) BOOL anchoredToText;
@property(getter=isInlineWithText,readonly) BOOL inlineWithText;
@property(getter=isAttachedToBodyText,readonly) BOOL attachedToBodyText;


- (Class)layoutClass;
- (unsigned int)pageIndex;
- (id)pageController;
- (void)setGeometry:(id)arg1;
- (id)geometry;
- (void)dealloc;
- (id)initWithPageIndex:(unsigned int)arg1 pageController:(id)arg2;
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
- (id)copyWithContext:(id)arg1;

@end