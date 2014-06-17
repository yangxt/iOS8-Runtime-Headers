/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSString;

@interface AFDictationOptions : NSObject <NSSecureCoding, NSCopying> {
    NSString *_applicationName;
    NSString *_applicationVersion;
    NSString *_fieldLabel;
    NSString *_fieldIdentifier;
    NSString *_interactionIdentifier;
    int _keyboardType;
    NSString *_prefixText;
    NSString *_postfixText;
    NSString *_selectedText;
    int _returnKeyType;
    int _transcriptionMode;
    NSString *_languageCodeOverride;
}

@property(copy) NSString * applicationName;
@property(copy) NSString * applicationVersion;
@property(copy) NSString * fieldLabel;
@property(copy) NSString * fieldIdentifier;
@property(copy) NSString * interactionIdentifier;
@property int keyboardType;
@property(copy) NSString * prefixText;
@property(copy) NSString * postfixText;
@property(copy) NSString * selectedText;
@property int returnKeyType;
@property int transcriptionMode;
@property(copy) NSString * languageCodeOverride;

+ (BOOL)supportsSecureCoding;

- (id)applicationName;
- (id)applicationVersion;
- (id)fieldLabel;
- (id)dictationOptionsWithoutTextContext;
- (void)setTranscriptionMode:(int)arg1;
- (int)transcriptionMode;
- (void)setLanguageCodeOverride:(id)arg1;
- (id)languageCodeOverride;
- (void)setInteractionIdentifier:(id)arg1;
- (id)interactionIdentifier;
- (id)fieldIdentifier;
- (id)postfixText;
- (id)prefixText;
- (void)setSelectedText:(id)arg1;
- (void)setPostfixText:(id)arg1;
- (void)setPrefixText:(id)arg1;
- (void)setFieldIdentifier:(id)arg1;
- (void)setFieldLabel:(id)arg1;
- (void)setApplicationVersion:(id)arg1;
- (void)setApplicationName:(id)arg1;
- (void).cxx_destruct;
- (id)selectedText;
- (void)setReturnKeyType:(int)arg1;
- (int)returnKeyType;
- (void)setKeyboardType:(int)arg1;
- (int)keyboardType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end