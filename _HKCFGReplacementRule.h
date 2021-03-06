/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSArray;

@interface _HKCFGReplacementRule : NSObject  {
    NSString *_description;
    NSArray *_rightHandSide;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _nodeEvaluator;

    unsigned int _lengthIncrease;
}

@property(copy,readonly) NSArray * rightHandSide;
@property(copy,readonly) id nodeEvaluator;
@property(readonly) unsigned int lengthIncrease;

+ (id)ruleWithLHS:(id)arg1 RHS:(id)arg2 nodeEvaluator:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (unsigned int)lengthIncrease;
- (id)rightHandSide;
- (id)nodeEvaluator;

@end
