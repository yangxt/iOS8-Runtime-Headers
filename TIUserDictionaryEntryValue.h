/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSNumber, NSString;

@interface TIUserDictionaryEntryValue : NSObject <NSSecureCoding, TIUserDictionaryEntry> {
    NSString *_phrase;
    NSString *_shortcut;
    NSNumber *_timestamp;
}

@property(copy) NSString * phrase;
@property(copy) NSString * shortcut;
@property(retain) NSNumber * timestamp;

+ (id)valueWithEntry:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void)setShortcut:(id)arg1;
- (id)shortcut;
- (void)setPhrase:(id)arg1;
- (id)phrase;
- (BOOL)matchesEntry:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;

@end