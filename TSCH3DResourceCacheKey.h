/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DResourceLoader, TSCH3DResource;

@interface TSCH3DResourceCacheKey : NSObject <NSCopying> {
    TSCH3DResourceLoader *mLoader;
    TSCH3DResource *mResource;
    int mVirtualScreen;
}

@property(readonly) TSCH3DResourceLoader * loader;
@property(readonly) TSCH3DResource * resource;

+ (id)keyWithLoader:(id)arg1 resource:(id)arg2 virtualScreen:(int)arg3;

- (id)loader;
- (id)resource;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithLoader:(id)arg1 resource:(id)arg2 virtualScreen:(int)arg3;

@end