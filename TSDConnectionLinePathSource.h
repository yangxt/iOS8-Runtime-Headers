/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSDConnectionLinePathSource : TSDBezierPathSource <TSDSmartPathSource> {
    int mType;
    float mOutsetFrom;
    float mOutsetTo;
}

@property int type;
@property float outsetFrom;
@property float outsetTo;
@property(readonly) unsigned int numberOfControlKnobs;

+ (id)pathSourceOfLength:(float)arg1;
+ (id)pathSourceAtAngleOfSize:(struct CGSize { float x1; float x2; })arg1 forType:(int)arg2;

- (id)initWithArchive:(const struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct PointPathSourceArchive {} *x3; struct ScalarPathSourceArchive {} *x4; struct BezierPathSourceArchive {} *x5; struct CalloutPathSourceArchive {} *x6; struct ConnectionLinePathSourceArchive {} *x7; struct EditableBezierPathSourceArchive {} *x8; boolx9; boolx10; int x11; unsigned int x12[1]; }*)arg1;
- (BOOL)isCircular;
- (BOOL)isRectangular;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)bezierPath;
- (int)type;
- (void)setType:(int)arg1;
- (id)description;
- (int)pathElementIndexForKnobTag:(unsigned int)arg1;
- (void)setOutsetTo:(float)arg1;
- (void)setOutsetFrom:(float)arg1;
- (void)p_setBezierPath:(id)arg1;
- (float)outsetTo;
- (float)outsetFrom;
- (unsigned int)numberOfControlKnobs;
- (struct CGPoint { float x1; float x2; })fixedPointForControlKnobChange;
- (struct CGPath { }*)newFeedbackPathForKnob:(unsigned int)arg1;
- (id)getFeedbackStringForKnob:(unsigned int)arg1;
- (struct CGPoint { float x1; float x2; })getControlKnobPosition:(unsigned int)arg1;
- (void)setControlKnobPosition:(unsigned int)arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2;
- (BOOL)isLineSegment;
- (void)scaleToNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (void)bend;
- (id)initWithBezierPath:(id)arg1;
- (void)saveToArchive:(struct PathSourceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct PointPathSourceArchive {} *x3; struct ScalarPathSourceArchive {} *x4; struct BezierPathSourceArchive {} *x5; struct CalloutPathSourceArchive {} *x6; struct ConnectionLinePathSourceArchive {} *x7; struct EditableBezierPathSourceArchive {} *x8; boolx9; boolx10; int x11; unsigned int x12[1]; }*)arg1;

@end
