/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDResources;

@interface CHDLegendEntry : NSObject  {
    unsigned int mFontIndex;
    unsigned int mEntryIndex;
    EDResources *mResources;
}


- (unsigned int)entryIndex;
- (unsigned int)fontIndex;
- (void)setEntryIndex:(unsigned int)arg1;
- (id)initWithResources:(id)arg1;
- (void)setFontIndex:(unsigned int)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (void)dealloc;

@end