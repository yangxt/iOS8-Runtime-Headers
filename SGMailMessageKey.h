/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@class NSString;

@interface SGMailMessageKey : NSObject <NSCopying, NSSecureCoding> {
    long long _messageIdHash;
    NSString *_source;
    NSString *_messageId;
}

@property(readonly) NSString * source;
@property(readonly) NSString * messageId;
@property(readonly) long long messageIdHash;

+ (BOOL)supportsSecureCoding;

- (id)initWithSource:(id)arg1 messageId:(id)arg2;
- (long long)messageIdHash;
- (BOOL)isEqualToMailMessageKey:(id)arg1;
- (id)initWithSource:(id)arg1 messageIdHash:(long long)arg2;
- (void).cxx_destruct;
- (id)source;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)messageId;

@end
