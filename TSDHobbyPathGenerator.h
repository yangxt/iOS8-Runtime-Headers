/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDHobbyPathGenerator : NSObject  {
    BOOL mClosed;
    struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint {} *x_3_1_1; } x3; } *mPoints;
    struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint {} *x_3_1_1; } x3; } *mMorphedPoints;
}


- (void)dealloc;
- (id)init;
- (id)calculateHobbyPath;
- (id)hobbyPathFrom:(id)arg1 morphedPath:(id*)arg2;
- (BOOL)pathWillClose:(id)arg1;
- (float)distanceForSegment:(unsigned int)arg1 overRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 furthestNode:(unsigned int*)arg3 inSubpath:(id)arg4;
- (void)adjustRotationalSymmetry:(id)arg1;
- (void)adjustRatio:(id)arg1;
- (void)adjustStraightEdges:(id)arg1;
- (void)morphPointsTo:(id)arg1;
- (void)adjustRemoveStraightNodes:(id)arg1;
- (void)adjustStraightenUp:(id)arg1;
- (void)adjustNodeTypes:(id)arg1;
- (void)calculateClosings;

@end