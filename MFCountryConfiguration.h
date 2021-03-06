/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSConditionLock, NSString;

@interface MFCountryConfiguration : NSObject  {
    int _lock;
    NSConditionLock *_generatorLock;
    NSString *_lastCountryCode;
    NSString *_countryCode;
}

@property(copy,readonly) NSString * countryCode;

+ (id)sharedConfiguration;

- (id)countryCode;
- (void)updateCurrentCountry;
- (id)_countryCodeWithGenerator:(id)arg1;
- (id)_networkCountryCode;
- (id)_cellSimCountryCode;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end
