/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class TSDRep<TSDPathEditableRep>, TSDPathKnob, CAShapeLayer, TSDDrawableInfo;

@interface TSDPathEditor : TSDStyledDrawableEditor <TSDDecorator> {
    CAShapeLayer *mGhostPathLayer;
    struct CGPoint { 
        float x; 
        float y; 
    } mLastGhostPosition;
    BOOL mIsInCommandGroup;
    TSDPathKnob *mHoveringKnob;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id mPathCreateBlock;

    TSDDrawableInfo *mCreatingInfo;
    BOOL mIsCreatingPath;
    BOOL mIsCreatingReversed;
    BOOL mShouldCreateNewPath;
    BOOL mWillBecomeCurrentEditorAgain;
}

@property BOOL isCreatingPath;
@property BOOL isCreatingReversed;
@property BOOL shouldCreateNewPath;
@property(copy) id pathCreateBlock;
@property(retain) TSDRep<TSDPathEditableRep> * creatingRep;

+ (void)initialize;

- (void)cancelOperation:(id)arg1;
- (void)deleteWordForward:(id)arg1;
- (void)deleteWordBackward:(id)arg1;
- (void)deleteToEndOfParagraph:(id)arg1;
- (void)deleteToEndOfLine:(id)arg1;
- (void)deleteToBeginningOfParagraph:(id)arg1;
- (void)deleteToBeginningOfLine:(id)arg1;
- (void)insertNewline:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)join:(id)arg1;
- (void)close:(id)arg1;
- (void)delete:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)dealloc;
- (void)setShouldCreateNewPath:(BOOL)arg1;
- (BOOL)shouldCreateNewPath;
- (void)setIsCreatingReversed:(BOOL)arg1;
- (id)pathCreateBlock;
- (BOOL)canEndPathCreationWithKnob:(id)arg1;
- (BOOL)canContinuePathFromKnob:(id)arg1 reversed:(BOOL*)arg2;
- (void)closeLastSubpath;
- (void)updateGhostForNodeCreationAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })constrainedUnscaledPointForPathCreation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setCreatingRep:(id)arg1;
- (BOOL)pathReturnsTrueForSelector:(SEL)arg1;
- (void)split:(id)arg1;
- (void)makeBezier:(id)arg1;
- (void)makeSharp:(id)arg1;
- (void)makeSmooth:(id)arg1;
- (void)nudgeByDelta:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)pathHasSelectedNodes:(unsigned int)arg1;
- (void)distributeNodesByEdge:(int)arg1;
- (void)alignNodesByEdge:(int)arg1;
- (void)toggleSelectedNodeToType:(int)arg1;
- (void)endPathEditing;
- (void)setIsCreatingPath:(BOOL)arg1;
- (BOOL)canClosePathToKnob:(id)arg1;
- (void)updateGhost;
- (BOOL)isCreatingReversed;
- (void)setGhostStrokeColor;
- (id)ghostLayer;
- (id)creatingRep;
- (BOOL)isCreatingPath;
- (void)makeShapePathsEditable;
- (void)setPathCreateBlock:(id)arg1;
- (void)performBlockOnPathEditableRepsWhileEditingPaths:(id)arg1 filterWithBlock:(id)arg2;
- (void)distributeDrawablesVertically:(id)arg1;
- (void)distributeDrawablesHorizontally:(id)arg1;
- (void)alignDrawablesByHorizontalCenter:(id)arg1;
- (void)alignDrawablesByBottomEdge:(id)arg1;
- (void)alignDrawablesByTopEdge:(id)arg1;
- (void)alignDrawablesByVerticalCenter:(id)arg1;
- (void)alignDrawablesByRightEdge:(id)arg1;
- (void)alignDrawablesByLeftEdge:(id)arg1;
- (BOOL)canBeginEditingRepOnDoubleTap:(id)arg1;
- (void)didResignTextInputEditor;
- (id)newTrackerForKnob:(id)arg1 forRep:(id)arg2;
- (void)updatePositionsOfKnobs:(id)arg1 forRep:(id)arg2;
- (void)addKnobsForRep:(id)arg1 toArray:(id)arg2;
- (id)decoratorOverlayLayers;
- (BOOL)ignoreSetSelection:(id)arg1 onInfo:(id)arg2;
- (void)didBecomeCurrentEditor;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (void)invalidateKnobs;
- (void)endMovingKnob;

@end
