/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSData, NSString;

@interface SASStartSpeechDictation : SASStartSpeech  {
}

@property(copy) NSData * activationToken;
@property(copy) NSString * applicationName;
@property(copy) NSString * applicationVersion;
@property BOOL censorSpeech;
@property(copy) NSString * fieldId;
@property(copy) NSString * fieldLabel;
@property(copy) NSString * interactionId;
@property(copy) NSString * keyboardReturnKey;
@property(copy) NSString * keyboardType;
@property(copy) NSString * language;
@property(copy) NSString * postfixText;
@property(copy) NSString * prefixText;
@property(copy) NSString * region;
@property(copy) NSString * selectedText;

+ (id)startSpeechDictationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startSpeechDictation;

- (void)setKeyboardReturnKey:(id)arg1;
- (id)keyboardReturnKey;
- (void)setInteractionId:(id)arg1;
- (id)interactionId;
- (void)setCensorSpeech:(BOOL)arg1;
- (BOOL)censorSpeech;
- (void)setActivationToken:(id)arg1;
- (id)activationToken;
- (id)encodedClassName;
- (id)applicationName;
- (void)setFieldId:(id)arg1;
- (id)fieldId;
- (id)applicationVersion;
- (id)fieldLabel;
- (void)setLanguage:(id)arg1;
- (id)postfixText;
- (id)prefixText;
- (void)setSelectedText:(id)arg1;
- (void)setPostfixText:(id)arg1;
- (void)setPrefixText:(id)arg1;
- (void)setFieldLabel:(id)arg1;
- (id)language;
- (void)setApplicationVersion:(id)arg1;
- (void)setApplicationName:(id)arg1;
- (id)region;
- (void)setRegion:(id)arg1;
- (id)selectedText;
- (void)setKeyboardType:(id)arg1;
- (id)keyboardType;
- (id)groupIdentifier;

@end