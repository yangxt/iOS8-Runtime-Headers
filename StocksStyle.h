/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class UIColor, UIFont;

@interface StocksStyle : NSObject  {
    UIColor *_chartHighlightColor;
    UIFont *_mainFont;
    UIFont *_chartLabelFont;
}

+ (id)sharedStyle;

- (void)resetLocale;
- (id)boldFontOfSize:(float)arg1;
- (id)mediumFontOfSize:(float)arg1;
- (id)fontOfSize:(float)arg1;
- (id)lightFontOfSize:(float)arg1;
- (id)chartHighlightColor;
- (id)lossColor;
- (id)gainColor;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end