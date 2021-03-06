/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDBezierPath, TSDWrapPolygon;

@interface TSDDrawableLayout : TSDLayout <TSDWrappable> {
    TSDWrapPolygon *mCachedWrapPolygon;
    TSDBezierPath *mCachedWrapPath;
    TSDBezierPath *mCachedExternalWrapPath;
}

@property(readonly) BOOL hasAlpha;


- (int)wrapType;
- (void)setGeometry:(id)arg1;
- (BOOL)hasAlpha;
- (void)invalidate;
- (void)dealloc;
- (id)wrapPolygon;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsInRoot;
- (void)i_invalidateWrap;
- (void)invalidateParentForWrap;
- (id)i_computeWrapPath;
- (id)i_computeWrapPathClosed:(BOOL)arg1;
- (BOOL)supportsInspectorPositioning;
- (BOOL)allowsConnections;
- (id)i_externalWrapPath;
- (void)dragBy:(struct CGPoint { float x1; float x2; })arg1;
- (void)parentDidChange;
- (id)i_wrapPath;
- (BOOL)isHTMLWrap;
- (int)wrapFitType;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsInfluencingExteriorWrap;
- (void)processChangedProperty:(int)arg1;
- (void)invalidateExteriorWrap;
- (int)wrapDirection;

@end
