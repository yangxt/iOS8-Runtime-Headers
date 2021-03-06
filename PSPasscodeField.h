/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class <PSPasscodeFieldDelegate>, NSMutableArray, NSMutableString;

@interface PSPasscodeField : UIView <UIKeyInput> {
    NSMutableArray *_dashViews;
    NSMutableArray *_dotViews;
    NSMutableArray *_digitViews;
    NSMutableString *_stringValue;
    BOOL _securePasscodeEntry;
    <PSPasscodeFieldDelegate> *_delegate;
    unsigned int _numberOfEntryFields;
}

@property <PSPasscodeFieldDelegate> * delegate;
@property(readonly) unsigned int numberOfEntryFields;
@property BOOL securePasscodeEntry;
@property int autocapitalizationType;
@property int autocorrectionType;
@property int spellCheckingType;
@property int keyboardType;
@property int keyboardAppearance;
@property int returnKeyType;
@property BOOL enablesReturnKeyAutomatically;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;


- (id)initWithNumberOfEntryFields:(unsigned int)arg1;
- (void)setSecurePasscodeEntry:(BOOL)arg1;
- (BOOL)securePasscodeEntry;
- (unsigned int)numberOfEntryFields;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (int)keyboardType;
- (BOOL)isSecureTextEntry;
- (void)setSecureTextEntry:(BOOL)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (BOOL)hasText;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)delegate;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
