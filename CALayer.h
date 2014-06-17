/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, CAMeshTransform, NSString, CALayer, NSDictionary;

@interface CALayer : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming> {
    struct _CALayerIvars { 
        int refcount; 
        unsigned int magic; 
        void *layer; 
        void *unused1[8]; 
    } _attr;
}

@property(retain,readonly) CALayer * currentLayer;
@property(retain,readonly) CALayer * _mapKit_mapLayer;
@property(copy) NSArray * states;
@property(copy) NSArray * stateTransitions;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleRect;
@property(copy) CAMeshTransform * meshTransform;
@property BOOL needsLayoutOnGeometryChange;
@property BOOL canDrawConcurrently;
@property BOOL acceleratesDrawing;
@property(getter=isFrozen) BOOL frozen;
@property BOOL allowsHitTesting;
@property BOOL hitTestsAsOpaque;
@property BOOL clearsContext;
@property BOOL contentsOpaque;
@property BOOL literalContentsCenter;
@property(copy) NSString * contentsScaling;
@property struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } contentsTransform;
@property BOOL invertsShadow;
@property BOOL shadowPathIsBounds;
@property BOOL swapsMaskAndLayer;
@property BOOL sortsSublayers;
@property BOOL preloadsCache;
@property BOOL allowsGroupBlending;
@property BOOL allowsDisplayCompositing;
@property struct CGSize { float x1; float x2; } sizeRequisition;
@property struct CGSize { float x1; float x2; } backgroundColorPhase;
@property(copy) NSArray * lights;
@property BOOL acceptsLights;
@property float ambientReflectance;
@property float diffuseReflectance;
@property float specularReflectance;
@property float shininess;
@property float metallicity;
@property(copy) NSArray * behaviors;
@property float velocityStretch;
@property float mass;
@property float momentOfInertia;
@property float coefficientOfRestitution;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property struct CGPoint { float x1; float x2; } position;
@property float zPosition;
@property struct CGPoint { float x1; float x2; } anchorPoint;
@property float anchorPointZ;
@property struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } transform;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property(getter=isHidden) BOOL hidden;
@property(getter=isDoubleSided) BOOL doubleSided;
@property(getter=isGeometryFlipped) BOOL geometryFlipped;
@property(readonly) CALayer * superlayer;
@property(copy) NSArray * sublayers;
@property struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } sublayerTransform;
@property(retain) CALayer * mask;
@property BOOL masksToBounds;
@property(retain) id contents;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentsRect;
@property(copy) NSString * contentsGravity;
@property float contentsScale;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentsCenter;
@property(copy) NSString * minificationFilter;
@property(copy) NSString * magnificationFilter;
@property float minificationFilterBias;
@property(getter=isOpaque) BOOL opaque;
@property BOOL needsDisplayOnBoundsChange;
@property BOOL drawsAsynchronously;
@property unsigned int edgeAntialiasingMask;
@property BOOL allowsEdgeAntialiasing;
@property struct CGColor { }* backgroundColor;
@property float cornerRadius;
@property float borderWidth;
@property struct CGColor { }* borderColor;
@property float opacity;
@property BOOL allowsGroupOpacity;
@property(retain) id compositingFilter;
@property(copy) NSArray * filters;
@property(copy) NSArray * backgroundFilters;
@property BOOL shouldRasterize;
@property float rasterizationScale;
@property struct CGColor { }* shadowColor;
@property float shadowOpacity;
@property struct CGSize { float x1; float x2; } shadowOffset;
@property float shadowRadius;
@property struct CGPath { }* shadowPath;
@property(copy) NSDictionary * actions;
@property(copy) NSString * name;
@property id delegate;
@property(copy) NSDictionary * style;
@property double beginTime;
@property double duration;
@property float speed;
@property double timeOffset;
@property float repeatCount;
@property double repeatDuration;
@property BOOL autoreverses;
@property(copy) NSString * fillMode;

+ (BOOL)needsDisplayForKey:(id)arg1;
+ (id)properties;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)CAMLParserEndElement:(id)arg1;
+ (BOOL)needsLayoutForKey:(id)arg1;
+ (BOOL)_hasRenderLayerSubclass;
+ (int (*)())CA_getterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (int (*)())CA_setterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (void)CAMLParserStartElement:(id)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)defaultActionForKey:(id)arg1;
+ (id)layer;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;

- (void)reloadValueForKeyPath:(id)arg1;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDescendantOf:(id)arg1;
- (void*)regionBeingDrawn;
- (void)scrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setAcceleratesDrawing:(BOOL)arg1;
- (BOOL)acceleratesDrawing;
- (void)setAnchorPointZ:(float)arg1;
- (float)anchorPointZ;
- (float)zPosition;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (id)fillMode;
- (BOOL)autoreverses;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setAllowsHitTesting:(BOOL)arg1;
- (void)setActions:(id)arg1;
- (BOOL)hidden;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)meshTransform;
- (id)modelLayer;
- (void)setSortsSublayers:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })preferredFrameSize;
- (void)setContentsOpaque:(BOOL)arg1;
- (void)setMeshTransform:(id)arg1;
- (void)setBehaviors:(id)arg1;
- (id)behaviors;
- (void)setGeometryFlipped:(BOOL)arg1;
- (BOOL)isGeometryFlipped;
- (void)setMinificationFilter:(id)arg1;
- (unsigned int)edgeAntialiasingMask;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })sublayerTransform;
- (float)shadowRadius;
- (void)setDoubleSided:(BOOL)arg1;
- (BOOL)isDoubleSided;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentsRect;
- (void)setShadowRadius:(float)arg1;
- (void)setShadowOpacity:(float)arg1;
- (void)setAllowsEdgeAntialiasing:(BOOL)arg1;
- (struct CGColor { }*)borderColor;
- (float)borderWidth;
- (void)setZPosition:(float)arg1;
- (BOOL)opaque;
- (void)_display;
- (id).cxx_construct;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (float)mass;
- (id)valueForUndefinedKey:(id)arg1;
- (void)_dealloc;
- (void)setFlipped:(BOOL)arg1;
- (id)compositingFilter;
- (id)contentsScaling;
- (void)setShadowPath:(struct CGPath { }*)arg1;
- (void)setBorderColor:(struct CGColor { }*)arg1;
- (void)setBorderWidth:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (void)setFrozen:(BOOL)arg1;
- (void)setPreloadsCache:(BOOL)arg1;
- (BOOL)allowsGroupOpacity;
- (struct CGColor { }*)shadowColor;
- (void)setAllowsGroupOpacity:(BOOL)arg1;
- (void)setStyle:(id)arg1;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (void)setDoublePosition:(struct CADoublePoint { double x1; double x2; })arg1;
- (struct CADoublePoint { double x1; double x2; })doublePosition;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (void)setDoubleBounds:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })doubleBounds;
- (void)setNeedsLayoutOnGeometryChange:(BOOL)arg1;
- (BOOL)needsLayoutOnGeometryChange;
- (id)ancestorSharedWithLayer:(id)arg1;
- (BOOL)isFrozen;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)setContentsTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)invalidateContents;
- (float)rasterizationScale;
- (BOOL)shouldRasterize;
- (void)removeAllAnimations;
- (id)filters;
- (double)beginTime;
- (void)displayIfNeeded;
- (void)clearHasBeenCommitted;
- (BOOL)clearsContext;
- (void)setOpacity:(float)arg1;
- (float)opacity;
- (BOOL)masksToBounds;
- (BOOL)needsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setShouldRasterize:(BOOL)arg1;
- (void)setContentsScaling:(id)arg1;
- (id)contentsGravity;
- (BOOL)needsDisplayOnBoundsChange;
- (void)setSublayers:(id)arg1;
- (void)layoutBelowIfNeeded;
- (BOOL)needsLayout;
- (void)setCornerRadius:(float)arg1;
- (float)cornerRadius;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)setMask:(id)arg1;
- (id)mask;
- (void)setAllowsGroupBlending:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentsCenter;
- (void)setContentsCenter:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMagnificationFilter:(id)arg1;
- (id)presentationLayer;
- (void)setAutoreverses:(BOOL)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setFilters:(id)arg1;
- (float)repeatCount;
- (BOOL)hasBeenCommitted;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (struct CADoublePoint { double x1; double x2; })convertDoublePoint:(struct CADoublePoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (struct CADoublePoint { double x1; double x2; })convertDoublePoint:(struct CADoublePoint { double x1; double x2; })arg1 toLayer:(id)arg2;
- (void)layoutIfNeeded;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1;
- (id)sublayers;
- (BOOL)isOpaque;
- (void)setTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })transform;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromLayer:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toLayer:(id)arg2;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (void)setRasterizationScale:(float)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })affineTransform;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setShadowColor:(struct CGColor { }*)arg1;
- (id)style;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)display;
- (void)setHitTestsAsOpaque:(BOOL)arg1;
- (id)actions;
- (void)setMass:(float)arg1;
- (id)delegate;
- (id)debugDescription;
- (unsigned int)retainCount;
- (struct CGColor { }*)backgroundColor;
- (void)setCompositingFilter:(id)arg1;
- (struct CGSize { float x1; float x2; })size;
- (void)setOpaque:(BOOL)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })contentsTransform;
- (id)magnificationFilter;
- (id)minificationFilter;
- (double)repeatDuration;
- (void)setRepeatDuration:(double)arg1;
- (void)setShininess:(float)arg1;
- (float)shininess;
- (BOOL)getRendererInfo:(struct _CARenderRendererInfo { int x1; unsigned int x2; unsigned int x3; }*)arg1 size:(unsigned long)arg2;
- (void)setCoefficientOfRestitution:(float)arg1;
- (void)setMomentOfInertia:(float)arg1;
- (void)setVelocityStretch:(float)arg1;
- (void)setMetallicity:(float)arg1;
- (void)setSpecularReflectance:(float)arg1;
- (void)setDiffuseReflectance:(float)arg1;
- (void)setAmbientReflectance:(float)arg1;
- (void)setAcceptsLights:(BOOL)arg1;
- (void)setLights:(id)arg1;
- (void)setBackgroundColorPhase:(struct CGSize { float x1; float x2; })arg1;
- (void)setSwapsMaskAndLayer:(BOOL)arg1;
- (BOOL)contentsOpaque;
- (void)setInvertsShadow:(BOOL)arg1;
- (void)setCanDrawConcurrently:(BOOL)arg1;
- (void)setLiteralContentsCenter:(BOOL)arg1;
- (BOOL)isFlipped;
- (BOOL)doubleSided;
- (id)layerAtTime:(double)arg1;
- (id)layerBeingDrawn;
- (BOOL)layoutIsActive;
- (BOOL)_canDisplayConcurrently;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (void)_didCommitLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; }*)arg1;
- (BOOL)shadowPathIsBounds;
- (BOOL)invertsShadow;
- (BOOL)swapsMaskAndLayer;
- (BOOL)literalContentsCenter;
- (BOOL)hitTestsAsOpaque;
- (BOOL)allowsGroupBlending;
- (BOOL)allowsDisplayCompositing;
- (BOOL)preloadsCache;
- (float)coefficientOfRestitution;
- (float)momentOfInertia;
- (float)velocityStretch;
- (float)metallicity;
- (float)specularReflectance;
- (float)diffuseReflectance;
- (float)ambientReflectance;
- (BOOL)acceptsLights;
- (struct CGSize { float x1; float x2; })backgroundColorPhase;
- (id)lights;
- (BOOL)canDrawConcurrently;
- (void)setDrawsAsynchronously:(BOOL)arg1;
- (struct CGPath { }*)shadowPath;
- (void)setBackgroundFilters:(id)arg1;
- (id)backgroundFilters;
- (struct CGSize { float x1; float x2; })_preferredSize;
- (struct CGSize { float x1; float x2; })sizeRequisition;
- (void)setSizeRequisition:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)drawsMipmapLevels;
- (BOOL)drawsAsynchronously;
- (void)_renderBorderInContext:(struct CGContext { }*)arg1;
- (void)_renderSublayersInContext:(struct CGContext { }*)arg1;
- (void)_renderForegroundInContext:(struct CGContext { }*)arg1;
- (void)_prepareContext:(struct CGContext { }*)arg1;
- (void)_cancelAnimationTimer;
- (BOOL)_scheduleAnimationTimer;
- (BOOL)sortsSublayers;
- (BOOL)allowsHitTesting;
- (BOOL)ignoresHitTesting;
- (void)_renderBackgroundInContext:(struct CGContext { }*)arg1;
- (void)setMinificationFilterBias:(float)arg1;
- (float)minificationFilterBias;
- (unsigned int)_renderImageCopyFlags;
- (struct Layer { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct Data { unsigned int x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned int x_3_1_6 : 3; unsigned int x_3_1_7 : 3; unsigned int x_3_1_8 : 4; unsigned int x_3_1_9 : 4; unsigned int x_3_1_10 : 1; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 30; struct Vec2<double> { double x_31_2_1; double x_31_2_2; } x_3_1_31; struct Rect { double x_32_2_1; double x_32_2_2; double x_32_2_3; double x_32_2_4; } x_3_1_32; } x3; struct Ref<CA::Render::Object> { struct Object {} *x_4_1_1; } x4; struct Ref<CA::Render::TypedArray<CA::Render::Layer> > { struct TypedArray<CA::Render::Layer> {} *x_5_1_1; } x5; struct Layer {} *x6; struct Ref<CA::Render::Layer::Ext> { struct Ext {} *x_7_1_1; } x7; struct Ref<CA::Render::TypedArray<CA::Render::Animation> > { struct TypedArray<CA::Render::Animation> {} *x_8_1_1; } x8; struct Ref<CA::Render::Handle> { struct Handle {} *x_9_1_1; } x9; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; }*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (id)_initWithReference:(id)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_visibleRectOfLayer:(id)arg1;
- (void)_scrollRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (void)_scrollPoint:(struct CGPoint { float x1; float x2; })arg1 fromLayer:(id)arg2;
- (id)stateTransitionFrom:(id)arg1 to:(id)arg2;
- (id)dependentStatesOfState:(id)arg1;
- (id)stateWithName:(id)arg1;
- (void)removeState:(id)arg1;
- (void)addState:(id)arg1;
- (void)insertState:(id)arg1 atIndex:(unsigned int)arg2;
- (float)shadowOpacity;
- (BOOL)allowsEdgeAntialiasing;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)setAllowsDisplayCompositing:(BOOL)arg1;
- (void)setContentsGravity:(id)arg1;
- (struct CGPoint { float x1; float x2; })position;
- (void)setSublayerTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (id)valueForKey:(id)arg1;
- (BOOL)isHidden;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)removeAnimationForKey:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)context;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)initWithLayer:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (id)actionForKey:(id)arg1;
- (id)name;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setName:(id)arg1;
- (void)setMasksToBounds:(BOOL)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)removeFromSuperlayer;
- (id)contents;
- (void)setContentsChanged;
- (void)setEdgeAntialiasingMask:(unsigned int)arg1;
- (void)setFillMode:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setSpeed:(float)arg1;
- (float)speed;
- (double)timeOffset;
- (id)superlayer;
- (double)convertTime:(double)arg1 fromLayer:(id)arg2;
- (float)contentsScale;
- (void)setNeedsDisplay;
- (void)layoutSublayers;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)contentsAreFlipped;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (void)setNeedsLayout;
- (void)addSublayer:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setClearsContext:(BOOL)arg1;
- (void)setNeedsDisplayOnBoundsChange:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setContentsScale:(float)arg1;
- (id)retain;
- (oneway void)release;
- (id)init;
- (void)setShadowPathIsBounds:(BOOL)arg1;
- (double)convertTime:(double)arg1 toLayer:(id)arg2;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })convertDoubleRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (void)web_disableAllActions;
- (int)compareTextEffectsOrdering:(id)arg1;
- (BOOL)uiHasFilterWithName:(id)arg1;
- (void)setPerspectiveDistance:(float)arg1;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })_gkParentSublayerTransform;
- (id)_gkRecursiveDescription;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (void)_mapkit_removeAnimationImmediatelyForKey:(id)arg1;
- (BOOL)getPresentationValue:(id*)arg1 forKey:(id)arg2 removeAnimation:(BOOL)arg3;
- (BOOL)getPresentationValue:(id*)arg1 forValueKey:(id)arg2 animationKey:(id)arg3 removeAnimation:(BOOL)arg4;
- (id)currentLayer;
- (id)_mapKit_mapLayer;
- (void)_mapkit_addAnimation:(id)arg1 forKey:(id)arg2 completion:(id)arg3;
- (void)pkui_addAdditiveAnimation:(id)arg1;
- (double)pkui_remainingDurationForAnimationWithKey:(id)arg1;
- (double)pkui_elapsedDurationForAnimationWithKey:(id)arg1;
- (id)_pkui_nextAdditiveAnimationKey;
- (double)_pkui_elapsedDurationForAnimation:(id)arg1;
- (void)tsu_transformToQuadrilateralWithTopLeft:(struct CGPoint { float x1; float x2; })arg1 topRight:(struct CGPoint { float x1; float x2; })arg2 bottomLeft:(struct CGPoint { float x1; float x2; })arg3 bottomRight:(struct CGPoint { float x1; float x2; })arg4;
- (void)addCDEEditorFlipOutAnimationToPosition:(struct CGPoint { float x1; float x2; })arg1 toLeft:(BOOL)arg2 cameraDistance:(float)arg3;
- (void)addCDEEditorFlipInAnimationFromPosition:(struct CGPoint { float x1; float x2; })arg1 fromLeft:(BOOL)arg2 cameraDistance:(float)arg3;
- (void)addCDEChartFlipAnimationFromPosition:(struct CGPoint { float x1; float x2; })arg1 toLeft:(BOOL)arg2 cameraDistance:(float)arg3;
- (void)addCDEChartFlipAnimationToFinalPosition:(struct CGPoint { float x1; float x2; })arg1 fromLeft:(BOOL)arg2 cameraDistance:(float)arg3;
- (void)addCDEShieldOutAnimation;
- (void)addCDEShieldInAnimation;
- (void)addCallbackAnimationWithName:(id)arg1 duration:(float)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)addZoomAnimationFromPoint:(struct CGPoint { float x1; float x2; })arg1 speed:(float)arg2;
- (void)removeCDEEditorFlipOutAnimation;
- (void)removeCDEEditorFlipInAnimation;
- (void)removeCDEChartFlipAnimationFromPosition;
- (void)addPerspectiveProjectionWithDistance:(float)arg1;
- (void)removeCDEChartFlipAnimationToFinalPosition;
- (void)removeCDEShieldOutAnimation;
- (void)removeCDEShieldInAnimation;
- (void)removeCallbackAnimationWithName:(id)arg1;
- (void)removeZoomAnimation;
- (void)pause;
- (id)zoomDownAnimation;
- (void)resume;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)bakedLayer;
- (void)addZoomDownAnimationFromPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)addZoomDownAnimation;
- (void)addZoomAnimationFromPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)addZoomAnimation;
- (void)removeResetAnimation;
- (void)addResetAnimation;
- (void)addRippleAnimationFromPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)addRotateInAnimationWithDuration:(double)arg1 delay:(double)arg2;
- (void)addDistortAnimationWithVector:(struct CGPoint { float x1; float x2; })arg1;
- (void)addPopOutAnimation:(id)arg1;
- (BOOL)hasPopInAnimation;
- (void)addPopInAnimation:(id)arg1;
- (void)addSproingAnimationFromPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)addFlipTransitionAnimationToLayer:(id)arg1;
- (void)addDragRotationAnimationWithDelta:(struct CGPoint { float x1; float x2; })arg1;
- (void)removePulseAnimation;
- (void)addPulseAnimation;
- (void)addWaveAnimation;
- (void)addJiggleAnimation;
- (float)opacityByApplyingAnimation:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })transform3DByApplyingAnimation:(id)arg1 atTime:(double)arg2 offset:(struct CGPoint { float x1; float x2; })arg3 parentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 animationCache:(id)arg5;
- (double)durationOfAllAnimations;
- (void)addPerspectiveSublayerProjectionUsingScreenSize:(struct CGSize { float x1; float x2; })arg1;
- (void)addReflectionSubLayerWithHeight:(float)arg1 startOpacity:(float)arg2;
- (id)layerByAddingReflectionWithHeight:(float)arg1 startOpacity:(float)arg2;
- (void)resumeAtTime:(double)arg1;
- (void)pauseAtTime:(double)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameIncludingSublayers;
- (void)removeZoomDownAnimation;
- (void)addZoomDownAnimationFromPoint:(struct CGPoint { float x1; float x2; })arg1 endingScale:(float)arg2 delay:(double)arg3;
- (void)addZoomAnimationFromPoint:(struct CGPoint { float x1; float x2; })arg1 startingScale:(float)arg2;
- (void)addResetAnimationWithDelegate:(id)arg1;
- (void)removeRippleAnimation;
- (void)addRippleAnimationFromPosition:(struct CGPoint { float x1; float x2; })arg1 withScale:(float)arg2 addPerspectiveProjection:(BOOL)arg3;
- (void)addRippleAnimationFromPosition:(struct CGPoint { float x1; float x2; })arg1 withScale:(float)arg2;
- (void)removeRotateInAnimation;
- (void)removeDistortAnimation;
- (void)removePopOutAnimation;
- (void)removePopInAnimation;
- (void)removeSproingAnimation;
- (void)removeFlipTransitionAnimation;
- (void)removeDragRotationAnimation;
- (void)removeWaveAnimationAnimated:(BOOL)arg1;
- (void)addPerspectiveProjection;
- (void)removeWaveAnimation;
- (void)addWaveAnimationWithScale:(float)arg1 offset:(struct CGSize { float x1; float x2; })arg2 zPosition:(float)arg3 addPerspectiveProjection:(BOOL)arg4;
- (void)addWaveAnimationWithScale:(float)arg1 offset:(struct CGSize { float x1; float x2; })arg2 zPosition:(float)arg3;
- (void)addWaveAnimationWithOffset:(struct CGSize { float x1; float x2; })arg1 zPosition:(float)arg2;
- (void)removeJiggleAnimation;
- (void)addJiggleAnimationWithDuration:(double)arg1 angle:(float)arg2;
- (void)removeAllAnimationsOnLayerTree;
- (float)p_perspectiveZDistanceUsingSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGImage { }*)newRasterizedImageRef;
- (void)setIfDifferentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 orTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (void)removeZoomAnimation;
- (id)tileContentsLayer;
- (void)setNeedsDisplayForDirtyTiles:(id)arg1;
- (void)setTileContents:(id)arg1;
- (BOOL)tilingSafeHasContents;
- (void)cancelLayoutForTilingLayers;
- (void)tilingSafeSetSublayers:(id)arg1;
- (void)setNeedsLayoutForTilingLayers;
- (void)p_clearAllLayerDelegates;
- (void)makeStretchableLayerWithUIImage:(id)arg1 leftCap:(float)arg2 topCap:(float)arg3;
- (void)makeStretchableLayerWithoutImage:(struct CGImage { }*)arg1 leftCap:(float)arg2 topCap:(float)arg3;
- (void)makeStretchableLayerWithImage:(struct CGImage { }*)arg1 leftCap:(float)arg2 topCap:(float)arg3;
- (void)makeStretchableLayerWithUIImage:(id)arg1 leftCap:(float)arg2 rightCap:(float)arg3 topCap:(float)arg4 bottomCap:(float)arg5;
- (void)makeStretchableLayerWithoutImage:(struct CGImage { }*)arg1 leftCap:(float)arg2 rightCap:(float)arg3 topCap:(float)arg4 bottomCap:(float)arg5;
- (void)makeStretchableLayerWithImage:(struct CGImage { }*)arg1 leftCap:(float)arg2 rightCap:(float)arg3 topCap:(float)arg4 bottomCap:(float)arg5;

@end