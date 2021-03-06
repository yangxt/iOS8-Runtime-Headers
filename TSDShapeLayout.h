/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDPathSource<TSDSmartPathSource>, TSDInfoGeometry, TSDEditableBezierPathSource, TSDPathSource, TSDBezierPath, TSDMutableStroke, TSDFill;

@interface TSDShapeLayout : TSDStyledLayout <TSDShapeControlLayout> {
    struct { 
        unsigned int path : 1; 
        unsigned int pathBounds : 1; 
        unsigned int pathBoundsWithoutStroke : 1; 
        unsigned int pathIsOpen : 1; 
        unsigned int pathIsLineSegment : 1; 
        unsigned int alignmentFrame : 1; 
        unsigned int headAndTail : 1; 
        unsigned int headLineEnd : 1; 
        unsigned int tailLineEnd : 1; 
        unsigned int clippedPath : 1; 
    } mShapeInvalidFlags;
    TSDBezierPath *mCachedPath;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mCachedPathBounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mCachedPathBoundsWithoutStroke;
    BOOL mCachedPathIsOpen;
    BOOL mCachedPathIsLineSegment;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mCachedAlignmentFrame;
    struct CGPoint { 
        float x; 
        float y; 
    } mHeadPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } mTailPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } mHeadLineEndPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } mTailLineEndPoint;
    float mHeadLineEndAngle;
    float mTailLineEndAngle;
    int mHeadCutSegment;
    int mTailCutSegment;
    float mHeadCutT;
    float mTailCutT;
    TSDBezierPath *mCachedClippedPath;
    TSDPathSource *mShrunkenPathSource;
    TSDEditableBezierPathSource *mCachedEditableBezierPathSource;
    TSDPathSource *mCachedPathSource;
    TSDPathSource *mResizePathSource;
    TSDInfoGeometry *mResizeInfoGeometry;
    TSDInfoGeometry *mInitialInfoGeometry;
    TSDMutableStroke *mDynamicStroke;
    TSDFill *mDynamicFill;
}

@property(readonly) TSDFill * fill;
@property(retain) TSDFill * dynamicFill;
@property(readonly) TSDPathSource<TSDSmartPathSource> * smartPathSource;


- (BOOL)isBeingManipulated;
- (BOOL)isInvisible;
- (void)setGeometry:(id)arg1;
- (struct CGSize { float x1; float x2; })minimumSize;
- (id)stroke;
- (id)fill;
- (id)path;
- (void)dealloc;
- (void)invalidatePath;
- (id)initWithInfo:(id)arg1;
- (id)textWrapperForExteriorWrap;
- (void)setDynamicFill:(id)arg1;
- (id)dynamicFill;
- (id)i_computeWrapPath;
- (struct CGPoint { float x1; float x2; })unclippedTailPoint;
- (struct CGPoint { float x1; float x2; })unclippedHeadPoint;
- (BOOL)canResetTextAndObjectHandles;
- (BOOL)canBeIntersected;
- (BOOL)isTailEndOnLeft;
- (id)smartPathSource;
- (void)p_computeAngle:(float*)arg1 point:(struct CGPoint { float x1; float x2; }*)arg2 cutSegment:(int*)arg3 cutT:(float*)arg4 forLineEndAtHead:(BOOL)arg5;
- (id)p_unitePath:(id)arg1 withLineEndForHead:(BOOL)arg2 stroke:(id)arg3;
- (id)i_computeWrapPathClosed:(BOOL)arg1;
- (void)p_updateResizeInfoGeometryFromResizePathSource;
- (void)p_invalidateClippedPath;
- (BOOL)isInvisibleAutosizingShape;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_boundsOfLineEndForHead:(BOOL)arg1 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (id)clippedPathForLineEnds;
- (id)p_createClippedPath;
- (void)p_validateTailLineEnd;
- (void)p_validateHeadLineEnd;
- (void)p_validateHeadAndTail;
- (BOOL)p_cachedPathIsLineSegment;
- (BOOL)p_cachedPathIsOpen;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_cachedPathBoundsWithoutStroke;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_cachedPathBounds;
- (id)p_cachedPath;
- (void)p_invalidateTail;
- (void)p_invalidateHead;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })computeLayoutTransform;
- (void)invalidatePathBounds;
- (float)lineEndScale;
- (float)tailLineEndAngle;
- (float)headLineEndAngle;
- (struct CGPoint { float x1; float x2; })tailLineEndPoint;
- (struct CGPoint { float x1; float x2; })headLineEndPoint;
- (id)strokeTailLineEnd;
- (id)strokeHeadLineEnd;
- (id)layoutInfoGeometry;
- (void)dynamicallyMovedSmartShapeKnobTo:(struct CGPoint { float x1; float x2; })arg1 withTracker:(id)arg2;
- (void)dynamicMoveSmartShapeKnobDidBegin;
- (void)dynamicallyMovingLineSegmentWithTracker:(id)arg1;
- (void)dynamicMovePathKnobDidEnd;
- (void)dynamicallyMovedPathKnobTo:(struct CGPoint { float x1; float x2; })arg1 withTracker:(id)arg2;
- (void)dynamicMovePathKnobDidBegin;
- (id)editablePathSource;
- (void)aliasPathForScale:(float)arg1 originalStroke:(id)arg2 adjustedStroke:(id*)arg3 adjustedPath:(id*)arg4 startDelta:(struct CGPoint { float x1; float x2; }*)arg5 endDelta:(struct CGPoint { float x1; float x2; }*)arg6;
- (struct CGPoint { float x1; float x2; })tailPoint;
- (struct CGPoint { float x1; float x2; })headPoint;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })aliasedAlignmentFrameForScale:(float)arg1;
- (BOOL)pathIsLineSegment;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pathBoundsWithoutStroke;
- (BOOL)pathIsOpen;
- (void)aliasPathForScale:(float)arg1 adjustedStroke:(id*)arg2 adjustedPath:(id*)arg3 startDelta:(struct CGPoint { float x1; float x2; }*)arg4 endDelta:(struct CGPoint { float x1; float x2; }*)arg5;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pathBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })shapeFrameWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (id)shapeInfo;
- (id)pathSource;
- (unsigned int)numberOfControlKnobs;
- (struct CGPoint { float x1; float x2; })getControlKnobPosition:(unsigned int)arg1;
- (void)setControlKnobPosition:(unsigned int)arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2;
- (BOOL)supportsResize;
- (struct CGPoint { float x1; float x2; })centerForConnecting;
- (id)initialInfoGeometry;
- (void)dynamicStrokeWidthChangeDidEnd;
- (void)dynamicStrokeWidthUpdateToValue:(float)arg1;
- (void)dynamicStrokeWidthChangeDidBegin;
- (BOOL)isStrokeBeingManipulated;
- (BOOL)shouldBeDisplayedInShowMode;
- (void)takeRotationFromTracker:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentFrameInRoot;
- (BOOL)supportsRotation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentFrame;
- (void)processChangedProperty:(int)arg1;
- (id)computeLayoutGeometry;
- (void)offsetGeometryBy:(struct CGPoint { float x1; float x2; })arg1;
- (id)layoutGeometryFromInfo;
- (void)invalidateFrame;
- (void)endResize;
- (void)endDynamicOperation;
- (void)beginDynamicOperation;
- (void)takeSizeFromTracker:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForStandardKnobs;

@end
