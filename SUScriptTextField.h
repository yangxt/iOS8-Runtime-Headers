/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, WebScriptObject, SUScriptFunction, NSNumber;

@interface SUScriptTextField : SUScriptObject <SUScriptNavigationItem> {
    SUScriptFunction *_shouldFocusFunction;
    NSString *_style;
}

@property(readonly) BOOL canBecomeFirstResponder;
@property(retain) NSString * autocapitalizationType;
@property(retain) NSString * autocorrectionType;
@property(retain) NSString * keyboardType;
@property(retain) NSString * placeholder;
@property(retain) WebScriptObject * shouldFocusFunction;
@property(readonly) NSString * style;
@property(retain) NSString * value;
@property(retain) NSNumber * width;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (id)shouldFocusFunction;
- (void)setShouldFocusFunction:(id)arg1;
- (void)setNativeObjectWithTextField:(id)arg1;
- (void)setNativeObjectWithSearchBar:(id)arg1;
- (void)setNativeObjectWithBarButtonItem:(id)arg1;
- (float)_defaultWidth;
- (id)_newTextField;
- (id)_copyValue;
- (id)_copyPlaceholder;
- (id)_keyboardType;
- (id)_autocorrectionType;
- (id)_autocapitalizationType;
- (id)_boxedNativeTextField;
- (BOOL)_styleIsValid:(id)arg1;
- (id)initWithTextFieldStyle:(id)arg1;
- (id)buttonItem;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
- (BOOL)focus;
- (BOOL)blur;
- (void)setWidth:(id)arg1;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;
- (void)setKeyboardType:(id)arg1;
- (id)keyboardType;
- (void)setAutocorrectionType:(id)arg1;
- (id)autocorrectionType;
- (void)setAutocapitalizationType:(id)arg1;
- (id)autocapitalizationType;
- (id)width;
- (BOOL)canBecomeFirstResponder;
- (id)value;
- (id)style;
- (void)setValue:(id)arg1;
- (void)dealloc;
- (id)init;

@end
