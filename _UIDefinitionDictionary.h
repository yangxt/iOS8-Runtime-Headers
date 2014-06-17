/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class ASAsset, NSString;

@interface _UIDefinitionDictionary : NSObject  {
    struct __DCSDictionary { } *_dictionary;
    BOOL _activated;
    ASAsset *_rawAsset;
    NSString *_definitionLanguage;
}

@property(readonly) ASAsset * rawAsset;
@property(readonly) NSString * localizedDictionaryName;
@property(readonly) NSString * definitionLanguage;
@property BOOL activated;


- (void)setActivated:(BOOL)arg1;
- (id)definitionLanguage;
- (id)_definitionValueForTerm:(id)arg1;
- (BOOL)_hasDefinitionForTerm:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (BOOL)activated;
- (id)_fullHTMLDefinitionForTerm:(id)arg1;
- (id)_attributedDefinitionForTerm:(id)arg1;
- (id)_shortHTMLDefinitionForTerm:(id)arg1;
- (id)_HTMLDefinitionForTerm:(id)arg1 type:(long)arg2;
- (id)rawAsset;
- (id)localizedDictionaryName;
- (id)description;
- (void)dealloc;

@end