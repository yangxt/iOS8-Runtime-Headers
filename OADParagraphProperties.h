/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, OADBulletFont, OADTextSpacing, OADBulletSize, OADBulletColor, OADBulletProperties;

@interface OADParagraphProperties : OADCharacterProperties  {
    OADBulletSize *mBulletSize;
    OADBulletColor *mBulletColor;
    OADBulletFont *mBulletFont;
    OADBulletProperties *mBulletProperties;
    OADTextSpacing *mLineSpacing;
    OADTextSpacing *mBeforeSpacing;
    OADTextSpacing *mAfterSpacing;
    NSMutableArray *mTabStops;
    double mLeftMargin;
    double mRightMargin;
    double mIndent;
    double mDefaultTab;
    int mLevel;
    int mBulletCharSet;
    unsigned char mAlign;
    unsigned char mWrap;
    unsigned char mFontAlign;
    unsigned int mIsLatinLineBreak : 1;
    unsigned int mIsHangingPunctuation : 1;
    unsigned int mHasTabStops : 1;
    unsigned int mHasLeftMargin : 1;
    unsigned int mHasRightMargin : 1;
    unsigned int mHasLevel : 1;
    unsigned int mHasIndent : 1;
    unsigned int mHasAlign : 1;
    unsigned int mHasDefaultTab : 1;
    unsigned int mHasWrap : 1;
    unsigned int mHasFontAlign : 1;
    unsigned int mHasIsLatinLineBreak : 1;
    unsigned int mHasIsHangingPunctuation : 1;
    unsigned int mHasBulletCharSet : 1;
}

+ (id)defaultProperties;

- (id)tabStops;
- (void)setWrap:(int)arg1;
- (int)wrap;
- (void)setAlign:(int)arg1;
- (int)align;
- (BOOL)hasLineSpacing;
- (void)overrideWithCharacterProperties:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (void)overrideWithProperties:(id)arg1;
- (int)bulletCharSet;
- (BOOL)isHangingPunctuation;
- (BOOL)isLatinLineBreak;
- (int)fontAlign;
- (double)defaultTab;
- (id)tabStopAtIndex:(unsigned int)arg1;
- (unsigned int)tabStopCount;
- (void)clearTabStops;
- (BOOL)hasBulletCharSet;
- (BOOL)hasIsHangingPunctuation;
- (BOOL)hasIsLatinLineBreak;
- (BOOL)hasFontAlign;
- (BOOL)hasWrap;
- (BOOL)hasDefaultTab;
- (BOOL)hasLevel;
- (BOOL)hasRightMargin;
- (BOOL)hasTabStops;
- (id)initWithDefaults;
- (void)setFontAlign:(int)arg1;
- (id)addTabStop;
- (void)setBulletCharSet:(int)arg1;
- (void)setBulletFont:(id)arg1;
- (void)setBulletSize:(id)arg1;
- (void)setBulletColor:(id)arg1;
- (void)setAfterSpacing:(id)arg1;
- (void)setBeforeSpacing:(id)arg1;
- (void)setIsHangingPunctuation:(BOOL)arg1;
- (void)setIsLatinLineBreak:(BOOL)arg1;
- (void)setDefaultTab:(double)arg1;
- (id)afterSpacing;
- (BOOL)hasAfterSpacing;
- (id)beforeSpacing;
- (BOOL)hasBeforeSpacing;
- (BOOL)hasIndent;
- (BOOL)hasLeftMargin;
- (BOOL)hasAlign;
- (BOOL)hasBulletProperties;
- (id)bulletColor;
- (BOOL)hasBulletColor;
- (id)bulletFont;
- (BOOL)hasBulletFont;
- (BOOL)hasBulletSize;
- (double)nonOveridenLeftMargin;
- (id)bulletSize;
- (id)bulletProperties;
- (double)indent;
- (void)setBulletProperties:(id)arg1;
- (void)setIndent:(double)arg1;
- (void)setLeftMargin:(double)arg1;
- (double)leftMargin;
- (double)rightMargin;
- (void)setLineSpacing:(id)arg1;
- (id)lineSpacing;
- (void)setRightMargin:(double)arg1;
- (int)level;
- (void)setLevel:(int)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end
