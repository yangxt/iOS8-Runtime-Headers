/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSValueTransformer : NSObject  {
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
+ (void)setValueTransformer:(id)arg1 forName:(id)arg2;
+ (id)valueTransformerForName:(id)arg1;
+ (id)valueTransformerNames;
+ (id)_transformerRegistry;

- (id)transformedValue:(id)arg1;
- (id)reverseTransformedValue:(id)arg1;

@end
