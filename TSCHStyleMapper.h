/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSKStyleMapper>;

@interface TSCHStyleMapper : NSObject <TSKStyleMapper> {
    <TSKStyleMapper> *mUnderlyingMapper;
    unsigned int mVaryInThemeStylesheet;
}


- (void)dealloc;
- (id)init;
- (id)initWithMapper:(id)arg1;
- (id)mappedStyleForStyle:(id)arg1 inThemeStylesheet:(BOOL)arg2;
- (void)varyInThemeStylesheetForDurationOfBlock:(id)arg1;
- (id)mappedStyleForStyle:(id)arg1 bakeComputable:(BOOL)arg2;
- (id)mappedStyleForStyle:(id)arg1;
- (void)popMappingContext:(id)arg1;
- (void)pushMappingContext:(id)arg1;
- (void)varyInThemeStylesheetIf:(BOOL)arg1 forDurationOfBlock:(id)arg2;
- (id)targetStylesheet;

@end