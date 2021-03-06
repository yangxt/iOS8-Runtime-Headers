/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSTextContainer, NSGlyphGenerator, NSTypesetter, NSStorage, NSMutableArray, NSTextStorage, NSFont, <NSLayoutManagerDelegate>, NSRunStorage, NSArray;

@interface NSLayoutManager : NSObject <NSCoding> {
    NSTextStorage *_textStorage;
    NSGlyphGenerator *_glyphGenerator;
    NSTypesetter *_typesetter;
    NSMutableArray *_textContainers;
    NSStorage *_containerUsedRects;
    NSRunStorage *_containerRuns;
    NSTextContainer *_extraLineFragmentContainer;
    struct __lmFlags { 
        unsigned int containersAreFull : 1; 
        unsigned int glyphsMightDrawOutsideLines : 1; 
        unsigned int backgroundLayoutEnabled : 1; 
        unsigned int resizingInProgress : 1; 
        unsigned int allowScreenFonts : 1; 
        unsigned int cachedRectArrayInUse : 1; 
        unsigned int displayInvalidationInProgress : 1; 
        unsigned int insertionPointNeedsUpdate : 1; 
        unsigned int layoutManagerInDirtyList : 1; 
        unsigned int originalFontOverride : 1; 
        unsigned int showInvisibleCharacters : 1; 
        unsigned int showControlCharacters : 1; 
        unsigned int delegateRespondsToDidInvalidate : 1; 
        unsigned int delegateRespondsToDidComplete : 1; 
        unsigned int glyphFormat : 2; 
        unsigned int textStorageRespondsToIsEditing : 1; 
        unsigned int notifyEditedInProgress : 1; 
        unsigned int containersChanged : 1; 
        unsigned int isGeneratingGlyphs : 1; 
        unsigned int hasNonGeneratedGlyphData : 1; 
        unsigned int syncAlignmentToDirection : 1; 
        unsigned int defaultAttachmentScaling : 2; 
        unsigned int usesFontLeading : 1; 
        unsigned int seenRightToLeft : 1; 
        unsigned int ignoresViewTransformations : 1; 
        unsigned int needToFlushGlyph : 1; 
        unsigned int flipsIfNeeded : 1; 
        unsigned int allowNonContig : 1; 
        unsigned int useNonContig : 1; 
        unsigned int inBackgroundLayout : 1; 
    } _lmFlags;
    id _delegate;
    unsigned short _textViewResizeDisableStack;
    unsigned short _displayInvalidationDisableStack;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _deferredDisplayCharRange;
    id _firstTextView;
    struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } *_cachedRectArray;
    unsigned int _cachedRectArrayCapacity;
    char *_glyphBuffer;
    unsigned int _glyphBufferSize;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _cachedLocationNominalGlyphRange;
    unsigned int _cachedLocationGlyphIndex;
    struct CGPoint { 
        float x; 
        float y; 
    } _cachedLocation;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _cachedFontCharRange;
    NSFont *_cachedFont;
    unsigned int _firstUnlaidGlyphIndex;
    unsigned int _firstUnlaidCharIndex;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _newlyFilledGlyphRange;
    id _extraData;
}

@property BOOL allowsOriginalFontMetricsOverride;
@property NSTextStorage * textStorage;
@property(readonly) NSArray * textContainers;
@property <NSLayoutManagerDelegate> * delegate;
@property BOOL showsInvisibleCharacters;
@property BOOL showsControlCharacters;
@property float hyphenationFactor;
@property BOOL usesFontLeading;
@property BOOL allowsNonContiguousLayout;
@property(readonly) BOOL hasNonContiguousLayout;
@property(readonly) unsigned int numberOfGlyphs;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } extraLineFragmentRect;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } extraLineFragmentUsedRect;
@property(readonly) NSTextContainer * extraLineFragmentTextContainer;

+ (BOOL)_showsControlCharacters;
+ (BOOL)_showsInvisibleCharacters;
+ (BOOL)_ignoresViewTransformations;
+ (BOOL)_usesScreenFonts;
+ (id)_defaultLinkAttributes;
+ (void)initialize;

- (void)setHyphenationFactor:(float)arg1;
- (id)_temporaryAttributesAtCharacterIndex:(unsigned int)arg1 longestEffectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)_temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned int)arg2 longestEffectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (id)_temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (void)addTemporaryAttributes:(id)arg1 forCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setTemporaryAttributes:(id)arg1 forCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfNominallySpacedGlyphsContainingIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsRectForTextBlock:(id)arg1 glyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })layoutRectForTextBlock:(id)arg1 glyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setBoundsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forTextBlock:(id)arg2 glyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)setLayoutRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forTextBlock:(id)arg2 glyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })truncatedGlyphRangeInLineFragmentForGlyphAtIndex:(unsigned int)arg1;
- (BOOL)drawsOutsideLineFragmentForGlyphAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })lineFragmentUsedRectForGlyphAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 allowLayout:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })lineFragmentRectForGlyphAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 withoutAdditionalLayout:(BOOL)arg3;
- (id)textContainerForGlyphAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 withoutAdditionalLayout:(BOOL)arg3;
- (void)setDrawsOutsideLineFragment:(BOOL)arg1 forGlyphAtIndex:(unsigned int)arg2;
- (void)setLocations:(struct CGPoint { float x1; float x2; }*)arg1 startingGlyphIndexes:(unsigned int*)arg2 count:(unsigned int)arg3 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (void)setLocation:(struct CGPoint { float x1; float x2; })arg1 forStartOfGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 coalesceRuns:(BOOL)arg3;
- (unsigned int)getGlyphs:(unsigned int*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)getGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 glyphs:(unsigned int*)arg2 characterIndexes:(unsigned int*)arg3 glyphInscriptions:(unsigned int*)arg4 elasticBits:(BOOL*)arg5;
- (BOOL)isValidGlyphIndex:(unsigned int)arg1;
- (void)invalidateGlyphsOnLayoutInvalidationForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setCharacterIndex:(unsigned int)arg1 forGlyphAtIndex:(unsigned int)arg2;
- (void)replaceGlyphAtIndex:(unsigned int)arg1 withGlyph:(unsigned int)arg2;
- (void)ensureGlyphsForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)backgroundColorProvidesOpaqueSurface;
- (BOOL)showsControlCharacters;
- (void)setShowsControlCharacters:(BOOL)arg1;
- (BOOL)showsInvisibleCharacters;
- (void)setShowsInvisibleCharacters:(BOOL)arg1;
- (void)setUsesScreenFonts:(BOOL)arg1;
- (BOOL)backgroundLayoutEnabled;
- (void)_setGlyphsPerLineEstimate:(unsigned int)arg1 integerOffsetPerLineEstimate:(unsigned int)arg2;
- (void)textContainerChangedTextView:(id)arg1 fromTextView:(id)arg2;
- (void)textContainerChangedGeometry:(id)arg1;
- (void)removeTextContainerAtIndex:(unsigned int)arg1;
- (void)setTypesetter:(id)arg1;
- (void)_setGlyphGenerator:(id)arg1;
- (id)_glyphGenerator;
- (void)replaceTextStorage:(id)arg1;
- (BOOL)usesScreenFonts;
- (id)temporaryAttributesAtCharacterIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (unsigned int)glyphIndexForPoint:(struct CGPoint { float x1; float x2; })arg1 inTextContainer:(id)arg2;
- (float)fractionOfDistanceThroughGlyphForPoint:(struct CGPoint { float x1; float x2; })arg1 inTextContainer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })lineFragmentUsedRectForGlyphAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 withoutAdditionalLayout:(BOOL)arg3;
- (unsigned int)firstUnlaidCharacterIndex;
- (unsigned int)getGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 glyphs:(unsigned int*)arg2 characterIndexes:(unsigned int*)arg3 glyphInscriptions:(unsigned int*)arg4 elasticBits:(BOOL*)arg5 bidiLevels:(char *)arg6;
- (unsigned short)glyphAtIndex:(unsigned int)arg1 isValidIndex:(BOOL*)arg2;
- (void)_primitiveDeleteGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)ensureGlyphsForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)textStorage:(id)arg1 edited:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 changeInLength:(int)arg4 invalidatedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5;
- (void)_forceDisplayToBeCorrectForViewsWithUnlaidGlyphs;
- (void)_primitiveInvalidateDisplayForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_invalidateGlyphsForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 editedCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 changeInLength:(int)arg3 actualCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg4;
- (void)invalidateLayoutForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 isSoft:(BOOL)arg2 actualCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (void)textContainerChangedTextView:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_characterRangeCurrentlyInAndAfterContainer:(id)arg1;
- (void)insertTextContainer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setGlyphGenerator:(id)arg1;
- (void)deleteGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setIntAttribute:(int)arg1 value:(int)arg2 forGlyphAtIndex:(unsigned int)arg3;
- (void)insertGlyphs:(const unsigned int*)arg1 length:(unsigned int)arg2 forStartingGlyphAtIndex:(unsigned int)arg3 characterIndex:(unsigned int)arg4;
- (void)setTypesetterBehavior:(int)arg1;
- (void)setAttachmentSize:(struct CGSize { float x1; float x2; })arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setEllipsisGlyphAttribute:(BOOL)arg1 forGlyphAtIndex:(unsigned int)arg2;
- (void)insertGlyph:(unsigned int)arg1 atGlyphIndex:(unsigned int)arg2 characterIndex:(unsigned int)arg3;
- (BOOL)usesFontLeading;
- (float)hyphenationFactor;
- (int)typesetterBehavior;
- (BOOL)synchronizesAlignmentToDirection;
- (void)getFirstUnlaidCharacterIndex:(unsigned int*)arg1 glyphIndex:(unsigned int*)arg2;
- (void)_setDrawsUnderlinesLikeWebKit:(BOOL)arg1;
- (id)_selectionRangesForInsertionPointRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (int)getLineFragmentInsertionPointArraysForCharacterAtIndex:(unsigned int)arg1 inDisplayOrder:(BOOL)arg2 positions:(float**)arg3 characterIndexes:(unsigned int**)arg4 count:(unsigned int*)arg5 alternatePositions:(float**)arg6 characterIndexes:(unsigned int**)arg7 count:(unsigned int*)arg8;
- (id)_insertionPointHelperForGlyphAtIndex:(unsigned int)arg1;
- (void)_setAlwaysDrawsActive:(BOOL)arg1;
- (BOOL)_alwaysDrawsActive;
- (void)setIgnoresAntialiasThreshold:(BOOL)arg1;
- (BOOL)ignoresAntialiasThreshold;
- (void)setIgnoresViewTransformations:(BOOL)arg1;
- (BOOL)ignoresViewTransformations;
- (void)setLineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 usedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 baselineOffset:(float)arg4;
- (void)setFlipsIfNeeded:(BOOL)arg1;
- (BOOL)flipsIfNeeded;
- (void)_setHasSeenRightToLeft:(BOOL)arg1;
- (BOOL)allowsOriginalFontMetricsOverride;
- (void)setAllowsOriginalFontMetricsOverride:(BOOL)arg1;
- (void)_clearTemporaryAttributesForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 changeInLength:(int)arg2;
- (void)_clearTemporaryAttributes;
- (void)_clearCurrentAttachmentSettings;
- (void)_setCurrentAttachmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 index:(unsigned int)arg2;
- (unsigned int)_currentAttachmentIndex;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_currentAttachmentRect;
- (id)_attachmentSizesRun;
- (void)_promoteGlyphStoreToFormat:(unsigned int)arg1;
- (void)_insertGlyphs:(unsigned int*)arg1 elasticAttributes:(BOOL*)arg2 count:(unsigned int)arg3 atGlyphIndex:(unsigned int)arg4 characterIndex:(unsigned int)arg5;
- (void)_simpleDeleteGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_simpleInsertGlyph:(unsigned int)arg1 atGlyphIndex:(unsigned int)arg2 characterIndex:(unsigned int)arg3 elastic:(BOOL)arg4;
- (void)_setNeedToFlushGlyph:(BOOL)arg1;
- (BOOL)_needToFlushGlyph;
- (unsigned int)_glyphAtIndex:(unsigned int)arg1 characterIndex:(unsigned int*)arg2 glyphInscription:(unsigned int*)arg3 isValidIndex:(BOOL*)arg4;
- (void)_drawGlyphsForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (char *)_packedGlyphs:(unsigned int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 length:(unsigned int*)arg3;
- (id)selectedTextAttributesForCharacterAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (void)_drawBackgroundForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)_firstTextViewChanged;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_glyphRangeForBoundingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inTextContainer:(id)arg2 fast:(BOOL)arg3 okToFillHoles:(BOOL)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundingRectForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inTextContainer:(id)arg2 fast:(BOOL)arg3 fullLineRectsOnly:(BOOL)arg4;
- (void)_fixSelectionAfterChangeInCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 changeInLength:(int)arg2;
- (id)_selectedRanges;
- (struct _NSStoredContainerUsage { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 29; } x3; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_4_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_4_1_2; } x4; struct _NSRange { unsigned int x_5_1_1; unsigned int x_5_1_2; } x5; }*)_validatedStoredUsageForTextContainerAtIndex:(unsigned int)arg1;
- (void)_updateUsageForTextContainer:(id)arg1 addingUsedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)_blockDescription;
- (id)_layoutTreeDescription;
- (id)_glyphTreeDescription;
- (id)_layoutHoleDescription;
- (id)_glyphHoleDescription;
- (id)_glyphDescription;
- (id)_glyphLocationDescription;
- (id)_lineFragmentDescription;
- (id)_containerDescription;
- (unsigned int)_glyphIndexForCharacterIndex:(unsigned int)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3;
- (unsigned int)_smallEncodingGlyphIndexForCharacterIndex:(unsigned int)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3;
- (void)_fillGlyphHoleAtIndex:(unsigned int)arg1 desiredNumberOfCharacters:(unsigned int)arg2;
- (BOOL)_canDoLayout;
- (void)_adjustCharacterIndicesForRawGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 byDelta:(int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_extendedCharRangeForInvalidation:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 editedCharRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)_rowArrayCache;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_blockRowRangeForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_blockRowRangeForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 completeRows:(BOOL*)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_blockRangeForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_mergeGlyphHoles;
- (void)_invalidateGlyphsForExtendedCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 changeInLength:(int)arg2;
- (void)setBaselineOffset:(float)arg1 forGlyphAtIndex:(unsigned int)arg2;
- (void)strikethroughGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 strikethroughType:(int)arg2 lineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 lineFragmentGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 containerOrigin:(struct CGPoint { float x1; float x2; })arg5;
- (void)underlineGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 underlineType:(int)arg2 lineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 lineFragmentGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 containerOrigin:(struct CGPoint { float x1; float x2; })arg5;
- (void)showAttachment:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 textContainer:(id)arg3 characterIndex:(unsigned int)arg4;
- (BOOL)_hasSeenRightToLeft;
- (void)fillBackgroundRectArray:(const struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 count:(unsigned int)arg2 forCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 color:(id)arg4;
- (id)temporaryAttributesAtCharacterIndex:(unsigned int)arg1 longestEffectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsRectForTextBlock:(id)arg1 atIndex:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (void)_markSelfAsDirtyForBackgroundLayout:(id)arg1;
- (void)_setRowArrayCache:(id)arg1;
- (void)_noteFirstTextViewVisibleCharacterRangeIfAfterIndex:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_firstPassGlyphRangeForBoundingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inTextContainer:(id)arg2 okToFillHoles:(BOOL)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_firstPassGlyphRangeForBoundingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inTextContainer:(id)arg2 hintGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 okToFillHoles:(BOOL)arg4;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_glyphRangeForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 actualCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 okToFillHoles:(BOOL)arg3;
- (struct CGSize { float x1; float x2; })attachmentSizeForGlyphAtIndex:(unsigned int)arg1;
- (id)substituteFontForFont:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)_rectArrayForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withinSelectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 rangeIsCharRange:(BOOL)arg3 singleRectOnly:(BOOL)arg4 fullLineRectsOnly:(BOOL)arg5 inTextContainer:(id)arg6 rectCount:(unsigned int*)arg7 rangeWithinContainer:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg8 glyphsDrawOutsideLines:(BOOL*)arg9;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)_rectArrayForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withinSelectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 rangeIsCharRange:(BOOL)arg3 singleRectOnly:(BOOL)arg4 fullLineRectsOnly:(BOOL)arg5 inTextContainer:(id)arg6 rectCount:(unsigned int*)arg7 rangeWithinContainer:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg8 glyphsDrawOutsideLines:(BOOL*)arg9 rectArray:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg10 rectArrayCapacity:(unsigned int)arg11;
- (void)_growCachedRectArrayToSize:(unsigned int)arg1;
- (void)_recalculateUsageForTextContainerAtIndex:(unsigned int)arg1;
- (unsigned int)_indexOfFirstGlyphInTextContainer:(id)arg1 okToFillHoles:(BOOL)arg2;
- (id)_glyphDescriptionForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)_lineFragmentDescription:(BOOL)arg1;
- (id)_lineFragmentDescriptionForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 includeGlyphLocations:(BOOL)arg2;
- (void)_fillLayoutHoleAtIndex:(unsigned int)arg1 desiredNumberOfLines:(unsigned int)arg2;
- (void)_mergeLayoutHoles;
- (unsigned int)_smallEncodingGlyphIndexForCharacterIndex:(unsigned int)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3 considerNulls:(BOOL)arg4;
- (void)_fillLayoutHoleForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 desiredNumberOfLines:(unsigned int)arg2 isSoft:(BOOL)arg3;
- (void)_invalidateLayoutForExtendedCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 isSoft:(BOOL)arg2;
- (void)_invalidateDisplayIfNeeded;
- (void)invalidateDisplayForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_invalidateInsertionPoint;
- (void)_resizeTextViewForTextContainer:(id)arg1;
- (void)_invalidateUsageForTextContainersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_invalidateLayoutForExtendedCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 isSoft:(BOOL)arg2 invalidateUsage:(BOOL)arg3;
- (void)_doLayoutWithFullContainerStartingAtGlyphIndex:(unsigned int)arg1 nextGlyphIndex:(unsigned int*)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })layoutRectForTextBlock:(id)arg1 atIndex:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (void)_invalidateGlyphsForExtendedCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 changeInLength:(int)arg2 includeBlocks:(BOOL)arg3;
- (BOOL)_doOptimizedLayoutStartingAtGlyphIndex:(unsigned int)arg1 forCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inTextContainer:(id)arg3 lineLimit:(unsigned int)arg4 nextGlyphIndex:(unsigned int*)arg5;
- (void)setLocation:(struct CGPoint { float x1; float x2; })arg1 forStartOfGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setLineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 usedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)setTextContainer:(id)arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setExtraLineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 usedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 textContainer:(id)arg3;
- (id)glyphGenerator;
- (void)_fillGlyphHoleForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 startGlyphIndex:(unsigned int)arg2 desiredNumberOfCharacters:(unsigned int)arg3;
- (unsigned int)_glyphIndexForCharacterIndex:(unsigned int)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3 considerNulls:(BOOL)arg4;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_blockRowRangeForCharRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_blockRowRangeForCharRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 completeRows:(BOOL*)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_primitiveGlyphRangeForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_blockRangeForCharRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_primitiveCharacterRangeForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_lineGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 type:(int)arg2 lineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 lineFragmentGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 containerOrigin:(struct CGPoint { float x1; float x2; })arg5 isStrikethrough:(BOOL)arg6;
- (void)_drawLineForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 type:(int)arg2 baselineOffset:(float)arg3 lineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 lineFragmentGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 containerOrigin:(struct CGPoint { float x1; float x2; })arg6 isStrikethrough:(BOOL)arg7;
- (void)_drawLineForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inContext:(struct CGContext { }*)arg2 from:(float)arg3 to:(float)arg4 at:(float)arg5 thickness:(float)arg6 lineOrigin:(struct CGPoint { float x1; float x2; })arg7 breakForDescenders:(BOOL)arg8;
- (void)drawSpellingUnderlineForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 spellingState:(int)arg2 inGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 lineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 lineFragmentGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 containerOrigin:(struct CGPoint { float x1; float x2; })arg6;
- (void)showAttachmentCell:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 characterIndex:(unsigned int)arg3;
- (void)_showCGGlyphs:(const unsigned short*)arg1 positions:(const struct CGPoint { float x1; float x2; }*)arg2 count:(unsigned int)arg3 font:(id)arg4 matrix:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg5 attributes:(id)arg6 inContext:(struct CGContext { }*)arg7;
- (void)drawStrikethroughForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 strikethroughType:(int)arg2 baselineOffset:(float)arg3 lineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 lineFragmentGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 containerOrigin:(struct CGPoint { float x1; float x2; })arg6;
- (void)drawUnderlineForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 underlineType:(int)arg2 baselineOffset:(float)arg3 lineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 lineFragmentGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 containerOrigin:(struct CGPoint { float x1; float x2; })arg6;
- (float)defaultBaselineOffsetForFont:(id)arg1;
- (id)temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (void)_drawLineForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inContext:(struct CGContext { }*)arg2 from:(float)arg3 to:(float)arg4 at:(float)arg5 thickness:(float)arg6 lineOrigin:(struct CGPoint { float x1; float x2; })arg7 breakForDescenders:(BOOL)arg8 flipped:(BOOL)arg9;
- (BOOL)notShownAttributeForGlyphAtIndex:(unsigned int)arg1;
- (BOOL)_drawsUnderlinesLikeWebKit;
- (unsigned short)glyphAtIndex:(unsigned int)arg1;
- (unsigned int)characterIndexForGlyphAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)rectArrayForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withinSelectedGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inTextContainer:(id)arg3 rectCount:(unsigned int*)arg4;
- (int)intAttribute:(int)arg1 forGlyphAtIndex:(unsigned int)arg2;
- (struct CGPoint { float x1; float x2; })locationForGlyphAtIndex:(unsigned int)arg1;
- (id)circleImageWithSize:(struct CGSize { float x1; float x2; })arg1 bufferWidth:(float)arg2 usingColor:(id)arg3;
- (id)typesetter;
- (void)processEditingForTextStorage:(id)arg1 edited:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 changeInLength:(int)arg4 invalidatedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5;
- (void)setSynchronizesAlignmentToDirection:(BOOL)arg1;
- (void)setBackgroundLayoutEnabled:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })extraLineFragmentUsedRect;
- (unsigned int)layoutOptions;
- (unsigned int)getLineFragmentInsertionPointsForCharacterAtIndex:(unsigned int)arg1 alternatePositions:(BOOL)arg2 inDisplayOrder:(BOOL)arg3 positions:(float*)arg4 characterIndexes:(unsigned int*)arg5;
- (unsigned int)glyphIndexForCharacterAtIndex:(unsigned int)arg1;
- (int)propertyForGlyphAtIndex:(unsigned int)arg1;
- (unsigned int)characterIndexForPoint:(struct CGPoint { float x1; float x2; })arg1 inTextContainer:(id)arg2 fractionOfDistanceBetweenInsertionPoints:(float*)arg3;
- (unsigned int)glyphIndexForPoint:(struct CGPoint { float x1; float x2; })arg1 inTextContainer:(id)arg2 fractionOfDistanceThroughGlyph:(float*)arg3;
- (void)enumerateEnclosingRectsForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withinSelectedCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inTextContainer:(id)arg3 usingBlock:(id)arg4;
- (id)extraLineFragmentTextContainer;
- (id)temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned int)arg2 longestEffectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfCharacterClusterAtIndex:(unsigned int)arg1 type:(long)arg2;
- (void)removeTemporaryAttribute:(id)arg1 forCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })lineFragmentRectForGlyphAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (void)ensureLayoutForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)rectArrayForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withinSelectedCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inTextContainer:(id)arg3 rectCount:(unsigned int*)arg4;
- (unsigned int)firstUnlaidGlyphIndex;
- (BOOL)hasNonContiguousLayout;
- (void)enumerateEnclosingRectsForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withinSelectedGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inTextContainer:(id)arg3 usingBlock:(id)arg4;
- (struct _NSRange { unsigned int x1; unsigned int x2; })characterRangeForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 actualGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })glyphRangeForBoundingRectWithoutAdditionalLayout:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inTextContainer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })extraLineFragmentRect;
- (void)enumerateLineFragmentsForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 usingBlock:(id)arg2;
- (id)textContainers;
- (void)_setGlyphsPerLineEstimate:(unsigned int)arg1 offsetPerLineEstimate:(float)arg2;
- (float)defaultLineHeightForFont:(id)arg1;
- (void)setAllowsNonContiguousLayout:(BOOL)arg1;
- (void)setTextStorage:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })lineFragmentUsedRectForGlyphAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (BOOL)allowsNonContiguousLayout;
- (BOOL)_drawsDebugBaselines;
- (void)_setDrawsDebugBaselines:(BOOL)arg1;
- (id)attributedString;
- (void)coordinateAccess:(id)arg1;
- (float)baselineOffsetForGlyphAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfGlyphs;
- (void)setNotShownAttribute:(BOOL)arg1 forGlyphAtIndex:(unsigned int)arg2;
- (unsigned int)getGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 glyphs:(unsigned short*)arg2 properties:(int*)arg3 characterIndexes:(unsigned int*)arg4 bidiLevels:(char *)arg5;
- (struct _NSRange { unsigned int x1; unsigned int x2; })glyphRangeForTextContainer:(id)arg1;
- (void)setGlyphs:(const unsigned short*)arg1 properties:(const int*)arg2 characterIndexes:(const unsigned int*)arg3 font:(id)arg4 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5;
- (void)invalidateLayoutForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 actualCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (void)invalidateGlyphsForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 changeInLength:(int)arg2 actualCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (void)drawBackgroundForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)drawGlyphsForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })glyphRangeForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 actualCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })usedRectForTextContainer:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })glyphRangeForBoundingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inTextContainer:(id)arg2;
- (void)ensureLayoutForBoundingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inTextContainer:(id)arg2;
- (void)ensureLayoutForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRectForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inTextContainer:(id)arg2;
- (id)textContainerForGlyphAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (void)invalidateDisplayForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)addTemporaryAttribute:(id)arg1 value:(id)arg2 forCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)ensureLayoutForTextContainer:(id)arg1;
- (id)textStorage;
- (void)setUsesFontLeading:(BOOL)arg1;
- (void)addTextContainer:(id)arg1;
- (void)showCGGlyphs:(const unsigned short*)arg1 positions:(const struct CGPoint { float x1; float x2; }*)arg2 count:(unsigned int)arg3 font:(id)arg4 matrix:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg5 attributes:(id)arg6 inContext:(struct CGContext { }*)arg7;
- (void)_commonInit;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (void)setDelegate:(id)arg1;
- (id)init;
- (id)_commonTextViewController;

@end
