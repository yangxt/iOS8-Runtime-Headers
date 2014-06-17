/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDStylesCollection, EDFontsCollection, EDTableStylesCollection, EDColorsCollection, EDLinksCollection, EDCollection, EDContentFormatsCollection;

@interface EDResources : NSObject  {
    EDCollection *mStrings;
    EDContentFormatsCollection *mContentFormats;
    EDFontsCollection *mFonts;
    EDCollection *mAlignmentInfos;
    EDStylesCollection *mStyles;
    EDColorsCollection *mColors;
    EDColorsCollection *mThemes;
    EDCollection *mNames;
    EDLinksCollection *mLinks;
    EDCollection *mBorders;
    EDCollection *mBorder;
    EDCollection *mFills;
    EDCollection *mDifferentialStyles;
    EDTableStylesCollection *mTableStyles;
}


- (id)border;
- (id)styles;
- (void)setThemes:(id)arg1;
- (id)tableStyles;
- (id)alignmentInfos;
- (id)differentialStyles;
- (id)themes;
- (id)names;
- (id)initWithStringOptimization:(bool)arg1;
- (id)contentFormats;
- (id)fonts;
- (id)fills;
- (id)borders;
- (id)colors;
- (id)strings;
- (id)links;
- (void)setColors:(id)arg1;
- (void)dealloc;

@end