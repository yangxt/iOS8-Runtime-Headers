/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString;

@interface MCProfileWarning : NSObject <NSSecureCoding> {
    NSString *_localizedTitle;
    NSString *_localizedBody;
    BOOL _isLongForm;
}

@property(retain) NSString * localizedTitle;
@property(retain) NSString * localizedBody;
@property BOOL isLongForm;

+ (id)warningWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(BOOL)arg3;
+ (BOOL)supportsSecureCoding;

- (void)setIsLongForm:(BOOL)arg1;
- (BOOL)isLongForm;
- (void)setLocalizedBody:(id)arg1;
- (id)localizedBody;
- (id)initWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(BOOL)arg3;
- (id)localizedTitle;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;

@end
