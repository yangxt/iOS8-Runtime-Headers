/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString, NSArray;

@interface SAAnswerDictionaryStructuredAnswer : AceObject <SAAnswerStructuredAnswer> {
}

@property(copy) NSString * category;
@property(copy) NSArray * definitionGroups;
@property(copy) NSString * phoneticPronunciation;
@property(copy) NSURL * sound;
@property(copy) NSArray * syllables;
@property(copy) NSString * word;

+ (id)dictionaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)dictionaryStructuredAnswer;

- (void)setWord:(id)arg1;
- (id)word;
- (void)setSyllables:(id)arg1;
- (id)syllables;
- (void)setPhoneticPronunciation:(id)arg1;
- (id)phoneticPronunciation;
- (void)setDefinitionGroups:(id)arg1;
- (id)definitionGroups;
- (id)encodedClassName;
- (void)setSound:(id)arg1;
- (id)sound;
- (void)setCategory:(id)arg1;
- (id)category;
- (id)groupIdentifier;

@end
