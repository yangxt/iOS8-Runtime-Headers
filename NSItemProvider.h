/* Generated by RuntimeBrowser.
   Image: /usr/lib/libextension.dylib
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSDictionary, <_NSItemProviderLoading>, NSMutableDictionary;

@interface NSItemProvider : NSObject <NSSecureCoding, NSCopying> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __previewImageHandler;

    NSDictionary *_userInfo;
    <_NSItemProviderLoading> *__loadOperator;
    NSMutableDictionary *__loadHandlers;
}

@property(copy) id previewImageHandler;
@property(copy,readonly) NSArray * registeredTypeIdentifiers;
@property(copy) NSDictionary * userInfo;
@property(retain) <_NSItemProviderLoading> * _loadOperator;
@property(retain) NSMutableDictionary * _loadHandlers;

+ (BOOL)supportsSecureCoding;

- (void)set_loadHandlers:(id)arg1;
- (void)_loadPreviewImageOfClass:(Class)arg1 options:(id)arg2 coerceForCoding:(BOOL)arg3 completionHandler:(id)arg4;
- (void)_loadItemOfClass:(Class)arg1 withLoadHandler:(id)arg2 options:(id)arg3 coerceForCoding:(BOOL)arg4 completionHandler:(id)arg5;
- (void)_loadItemOfClass:(Class)arg1 forTypeIdentifier:(id)arg2 options:(id)arg3 coerceForCoding:(BOOL)arg4 completionHandler:(id)arg5;
- (id)registeredTypeIdentifiers;
- (void)set_loadOperator:(id)arg1;
- (id)_loadOperator;
- (id)previewImageHandler;
- (id)_loadHandlers;
- (void)setPreviewImageHandler:(id)arg1;
- (void)registerItemForTypeIdentifier:(id)arg1 loadHandler:(id)arg2;
- (id)initWithItem:(id)arg1 typeIdentifier:(id)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)userInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setUserInfo:(id)arg1;
- (BOOL)hasItemConformingToTypeIdentifier:(id)arg1;
- (void)loadPreviewImageWithOptions:(id)arg1 completionHandler:(id)arg2;
- (void)loadItemForTypeIdentifier:(id)arg1 options:(id)arg2 completionHandler:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end