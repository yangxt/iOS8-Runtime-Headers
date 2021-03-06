/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDBezierNode, CAShapeLayer;

@interface TSDPathKnob : TSDKnob  {
    TSDBezierNode *mNode;
    TSDBezierNode *mNextNode;
    TSDBezierNode *mPrevNode;
    unsigned int mSubpathIndex;
    unsigned int mNodeIndex;
    float mParametricT;
    float mBendParameter;
    BOOL mHovering;
    BOOL mHoveringSharp;
    CAShapeLayer *mHandleLine;
}

@property(retain) TSDBezierNode * node;
@property(retain) TSDBezierNode * nextNode;
@property(retain) TSDBezierNode * prevNode;
@property unsigned int subpathIndex;
@property unsigned int nodeIndex;
@property float tValue;
@property float bendParameter;
@property BOOL hovering;
@property BOOL hoveringSharp;


- (void)setNextNode:(id)arg1;
- (void)setPrevNode:(id)arg1;
- (id)prevNode;
- (id)knobImage;
- (void)updateImage;
- (void)setNode:(id)arg1;
- (id)nextNode;
- (id)node;
- (void)dealloc;
- (float)bendParameter;
- (float)tValue;
- (void)setHoveringSharp:(BOOL)arg1;
- (void)setHovering:(BOOL)arg1;
- (id)initBendKnobOnRep:(id)arg1;
- (BOOL)hoveringSharp;
- (BOOL)hovering;
- (void)setBendParameter:(float)arg1;
- (id)p_knobHitPath;
- (unsigned int)nodeIndex;
- (unsigned int)subpathIndex;
- (id)pathEditableRep;
- (void)updatePositionWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setTValue:(float)arg1;
- (id)initWithOutControlForNode:(id)arg1 onRep:(id)arg2;
- (id)initWithInControlForNode:(id)arg1 onRep:(id)arg2;
- (void)setSubpathIndex:(unsigned int)arg1;
- (void)setNodeIndex:(unsigned int)arg1;
- (id)initWithNode:(id)arg1 onRep:(id)arg2;
- (id)underlayLayerForRep:(id)arg1;
- (int)dragType;
- (BOOL)obscuresKnob:(id)arg1;
- (BOOL)overlapsWithKnob:(id)arg1;
- (BOOL)isHitByUnscaledPoint:(struct CGPoint { float x1; float x2; })arg1 andRep:(id)arg2 returningDistance:(float*)arg3;

@end
