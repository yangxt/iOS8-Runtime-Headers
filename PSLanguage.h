/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString;

@interface PSLanguage : NSObject  {
    NSString *_languageCode;
    NSString *_languageName;
    NSString *_localizedLanguageName;
}

@property(retain) NSString * languageCode;
@property(retain) NSString * languageName;
@property(retain) NSString * localizedLanguageName;

+ (id)languageWithCode:(id)arg1 name:(id)arg2 localizedName:(id)arg3;

- (BOOL)displayNamesAreEqual;
- (id)localizedLanguageName;
- (id)languageName;
- (void)setLocalizedLanguageName:(id)arg1;
- (void)setLanguageName:(id)arg1;
- (id)languageCode;
- (void)dealloc;
- (void)setLanguageCode:(id)arg1;

@end