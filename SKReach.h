/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class NSMutableArray, SKNode;

@interface SKReach : SKAction  {
    SKNode *_ikRoot;
    struct CGPoint { 
        float x; 
        float y; 
    } _goalPosition;
    NSMutableArray *_ikChain;
    float _velocity;
    BOOL _timeConstrained;
    float _zRotationSpeed;
}

+ (id)reachTo:(struct CGPoint { float x1; float x2; })arg1 rootNode:(id)arg2 duration:(double)arg3 maxZRotationSpeed:(float)arg4;
+ (id)reachTo:(struct CGPoint { float x1; float x2; })arg1 rootNode:(id)arg2 zRotationSpeed:(float)arg3 maxDuration:(double)arg4;
+ (id)reachToNode:(id)arg1 rootNode:(id)arg2 velocity:(float)arg3;
+ (id)reachToNode:(id)arg1 rootNode:(id)arg2 duration:(double)arg3;
+ (id)reachTo:(struct CGPoint { float x1; float x2; })arg1 rootNode:(id)arg2 velocity:(float)arg3;
+ (id)reachTo:(struct CGPoint { float x1; float x2; })arg1 rootNode:(id)arg2 duration:(double)arg3;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)solveIKWithTarget:(id)arg1;
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;
- (id)init;

@end