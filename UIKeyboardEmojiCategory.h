/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSArray;

@interface UIKeyboardEmojiCategory : NSObject  {
    int _categoryType;
    NSArray *_emoji;
    int _lastVisibleFirstEmojiIndex;
}

@property int categoryType;
@property(retain) NSArray * emoji;
@property int lastVisibleFirstEmojiIndex;
@property(getter=name,readonly) NSString * name;
@property(getter=displayName,readonly) NSString * displayName;
@property(getter=displaySymbol,readonly) NSString * displaySymbol;
@property(getter=recentDescription,readonly) NSString * recentDescription;

+ (id)categoryForType:(int)arg1;
+ (id)localizedStringForKey:(id)arg1;
+ (id)emojiRecentsFromPreferences;
+ (BOOL)hasVariantsForEmoji:(id)arg1;
+ (int)numberOfCategories;
+ (id)categories;

- (void)setLastVisibleFirstEmojiIndex:(int)arg1;
- (int)lastVisibleFirstEmojiIndex;
- (id)recentDescription;
- (id)displaySymbol;
- (void)releaseCategories;
- (id)displayName;
- (int)categoryType;
- (void)setEmoji:(id)arg1;
- (id)emoji;
- (void)setCategoryType:(int)arg1;
- (id)name;
- (id)description;
- (void)dealloc;

@end