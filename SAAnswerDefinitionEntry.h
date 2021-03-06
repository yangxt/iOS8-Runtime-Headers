/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAAnswerDefinitionEntry : AceObject <SAAceSerializable> {
}

@property(copy) NSString * definition;
@property(copy) NSArray * examples;
@property(copy) NSArray * variations;

+ (id)definitionEntryWithDictionary:(id)arg1 context:(id)arg2;
+ (id)definitionEntry;

- (void)setVariations:(id)arg1;
- (id)variations;
- (void)setExamples:(id)arg1;
- (id)examples;
- (void)setDefinition:(id)arg1;
- (id)encodedClassName;
- (id)definition;
- (id)groupIdentifier;

@end
