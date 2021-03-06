/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSData, NSString;

@interface NSCoreDataXPCMessage : NSObject <NSSecureCoding> {
    unsigned int _messageCode;
    NSData *_messageBody;
    NSString *_token;
}

@property unsigned int messageCode;
@property(retain) NSData * messageBody;
@property(retain) NSString * token;

+ (BOOL)supportsSecureCoding;

- (void)setToken:(id)arg1;
- (id)token;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)setMessageBody:(id)arg1;
- (void)setMessageCode:(unsigned int)arg1;
- (id)messageBody;
- (unsigned int)messageCode;

@end
