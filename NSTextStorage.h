/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class <NSTextStorageDelegate>, NSMutableArray, NSArray;

@interface NSTextStorage : NSMutableAttributedString  {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _editedRange;
    int _editedDelta;
    struct { 
        unsigned int editedMask : 8; 
        unsigned int postWillProcess : 1; 
        unsigned int postDidProcess : 1; 
        unsigned int  : 6; 
        unsigned int disabled : 16; 
    } _flags;
    NSMutableArray *_layoutManagers;
    id _sideData;
    int _changeInLength;
}

@property(readonly) NSArray * layoutManagers;
@property unsigned int editedMask;
@property struct _NSRange { unsigned int x1; unsigned int x2; } editedRange;
@property int changeInLength;
@property <NSTextStorageDelegate> * delegate;
@property(readonly) BOOL fixesAttributesLazily;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)setChangeInLength:(int)arg1;
- (void)setEditedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)ensureAttributesAreFixedInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setEditedMask:(unsigned int)arg1;
- (BOOL)_forceFixAttributes;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_rangeByEstimatingAttributeFixingForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)fixesAttributesLazily;
- (BOOL)_lockForWritingWithExceptionHandler:(BOOL)arg1;
- (void)fontSetChanged;
- (void)_notifyEdited:(unsigned int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 changeInLength:(int)arg3 invalidatedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (void)_setAttributeFixingInProgress:(BOOL)arg1;
- (BOOL)_attributeFixingInProgress;
- (BOOL)_lockForWriting;
- (void)removeLayoutManager:(id)arg1;
- (void)_setForceFixAttributes:(BOOL)arg1;
- (void)_unlock;
- (BOOL)_lockForReading;
- (BOOL)_isEditing;
- (id)cuiStyleEffects;
- (id)cuiCatalog;
- (void)processEditing;
- (id)layoutManagers;
- (int)changeInLength;
- (void)invalidateAttributesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })editedRange;
- (unsigned int)editedMask;
- (void)coordinateReading:(id)arg1;
- (BOOL)_shouldSetOriginalFontAttribute;
- (BOOL)_usesSimpleTextEffects;
- (void)_setUsesSimpleTextEffects:(BOOL)arg1;
- (void)coordinateAccess:(id)arg1;
- (void)coordinateEditing:(id)arg1;
- (void)endEditing;
- (void)beginEditing;
- (void)addLayoutManager:(id)arg1;
- (Class)classForCoder;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (void)setDelegate:(id)arg1;
- (id)init;
- (void)edited:(unsigned int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 changeInLength:(int)arg3;
- (id)_undoRedoAttributedSubstringFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_undoRedoTextOperation:(id)arg1;

@end
