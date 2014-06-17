/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class NSNumberFormatter, NSMutableDictionary;

@interface IKFormatting : NSObject  {
    NSMutableDictionary *_dateFormatters;
    NSMutableDictionary *_numberFormatters;
    NSNumberFormatter *_durationFormatter;
    NSNumberFormatter *_durationPaddedFormatter;
}

+ (id)rfc1123DateFormatter;
+ (id)isoDateFormatter;
+ (id)sharedInstance;

- (id)formatNumber:(id)arg1 style:(id)arg2 postiveFormat:(id)arg3 negativeFormat:(id)arg4;
- (id)formatDuration:(id)arg1;
- (id)formatDate:(id)arg1 format:(id)arg2;
- (void).cxx_destruct;
- (id)init;

@end