/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSObject<OS_voucher>, NSString;

@interface _NSActivityAssertion : NSObject  {
    long long _ended;
    unsigned long long _options;
    NSString *_reason;
    unsigned int _systemSleepAssertionID;
    NSObject<OS_voucher> *_voucher;
    NSObject<OS_voucher> *_previousVoucher;
}

+ (void)_performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(id)arg3;

- (id)debugDescription;
- (void)dealloc;
- (void)_reactivate;
- (void)_end;
- (id)_initWithActivityOptions:(unsigned long long)arg1 reason:(id)arg2;

@end
