/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSString;

@interface CKNotificationID : NSObject <NSCopying, NSSecureCoding> {
    NSString *_notificationUUID;
}

@property(copy) NSString * notificationUUID;

+ (BOOL)supportsSecureCoding;

- (id)notificationUUID;
- (void)setNotificationUUID:(id)arg1;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end