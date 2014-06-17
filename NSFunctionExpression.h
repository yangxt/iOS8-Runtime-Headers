/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSArray, NSExpression;

@interface NSFunctionExpression : NSExpression  {
    NSExpression *_operand;
    SEL _selector;
    NSArray *_arguments;
}

+ (BOOL)supportsSecureCoding;

- (id)arguments;
- (SEL)selector;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)binaryOperatorForSelector;
- (BOOL)_shouldUseParensWithDescription;
- (id)initWithSelector:(SEL)arg1 argumentArray:(id)arg2;
- (id)initWithTarget:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3;
- (id)function;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (id)predicateFormat;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (id)initWithExpressionType:(unsigned int)arg1 operand:(id)arg2 selector:(SEL)arg3 argumentArray:(id)arg4;
- (id)operand;
- (void)allowEvaluation;
- (id)_mapKVCOperatorsToFunctionsInContext:(id)arg1;
- (id)minimalFormInContext:(id)arg1;

@end