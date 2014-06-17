/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@class NSMutableDictionary;

@interface PLCoreOperator : NSObject  {
    NSMutableDictionary *_operators;
}

@property(retain) NSMutableDictionary * operators;

+ (id)registeredOperators;
+ (void)registerOperator:(Class)arg1;
+ (id)registeredOperatorsOfSuperClassType:(Class)arg1;

- (void)initOperatorDependancies;
- (void)setOperators:(id)arg1;
- (void)startOperatorsOfSuperClassType:(Class)arg1;
- (id)operators;
- (void).cxx_destruct;
- (void)log;
- (void)dealloc;
- (id)init;

@end