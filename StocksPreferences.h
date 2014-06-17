/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StocksPreferences : NSObject  {
    BOOL _changeColorSwapped;
    unsigned int _textDirection;
    BOOL _textAttachmentDirectionIsRightToLeft;
}

@property(getter=isChangeColorSwapped,readonly) BOOL changeColorSwapped;
@property(readonly) unsigned int textDirection;
@property(readonly) BOOL textAttachmentDirectionIsRightToLeft;

+ (void)clearSharedPreferences;
+ (id)sharedPreferences;

- (void)resetLocale;
- (BOOL)isChangeColorSwapped;
- (BOOL)textAttachmentDirectionIsRightToLeft;
- (unsigned int)textDirection;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)synchronize;
- (void)dealloc;
- (id)init;

@end