/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACDataclassAction : NSObject <NSSecureCoding> {
    BOOL _isDestructive;
    int _type;
}

@property(readonly) int type;
@property(readonly) BOOL isDestructive;

+ (id)actionWithType:(int)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)destructiveActionWithType:(int)arg1;

- (BOOL)isDestructive;
- (int)type;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithType:(int)arg1 destructivity:(BOOL)arg2;

@end
