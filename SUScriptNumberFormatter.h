/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumberFormatter, NSString;

@interface SUScriptNumberFormatter : SUScriptObject  {
    NSNumberFormatter *_numberFormatter;
}

@property(retain) NSString * localeIdentifier;
@property(retain) NSString * style;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (void)setLocaleIdentifier:(id)arg1;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)stringFromNumber:(id)arg1;
- (id)localeIdentifier;
- (id)numberFromString:(id)arg1;
- (void)setStyle:(id)arg1;
- (id)style;
- (void)dealloc;
- (id)init;

@end