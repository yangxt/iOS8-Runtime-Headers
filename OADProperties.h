/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADProperties;

@interface OADProperties : NSObject  {
    OADProperties *mParent;
    unsigned int mIsMerged : 1;
    unsigned int mIsMergedWithParent : 1;
}

+ (id)defaultProperties;

- (id)parent;
- (void)setParent:(id)arg1;
- (void)flatten;
- (void)setParent:(id)arg1 myRestrictedClass:(Class)arg2;
- (void)p_setParent:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (void)setMergedWithParent:(BOOL)arg1;
- (void)setMerged:(BOOL)arg1;
- (BOOL)isMergedWithParent;
- (BOOL)isMerged;
- (id)overrideForSelector:(SEL)arg1;
- (BOOL)isMergedPropertyForSelector:(SEL)arg1;
- (id)initWithDefaults;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end
