/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSArray, NSString, CKNotificationID, NSNumber;

@interface CKNotification : NSObject <NSSecureCoding> {
    BOOL _isPruned;
    int _notificationType;
    CKNotificationID *_notificationID;
    NSString *_containerIdentifier;
    NSString *_alertBody;
    NSString *_alertLocalizationKey;
    NSArray *_alertLocalizationArgs;
    NSString *_alertActionLocalizationKey;
    NSString *_alertLaunchImage;
    NSNumber *_badge;
    NSString *_soundName;
}

@property int notificationType;
@property(copy) CKNotificationID * notificationID;
@property(copy) NSString * containerIdentifier;
@property BOOL isPruned;
@property(copy) NSString * alertBody;
@property(copy) NSString * alertLocalizationKey;
@property(copy) NSArray * alertLocalizationArgs;
@property(copy) NSString * alertActionLocalizationKey;
@property(copy) NSString * alertLaunchImage;
@property(copy) NSNumber * badge;
@property(copy) NSString * soundName;

+ (id)notificationFromRemoteNotificationDictionary:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)_realNotificationFromRemoteNotificationDictionary:(id)arg1;

- (int)notificationType;
- (id)badge;
- (void)setNotificationType:(int)arg1;
- (BOOL)isRead;
- (void)setBadge:(id)arg1;
- (void)setNotificationID:(id)arg1;
- (id)alertActionLocalizationKey;
- (id)alertLocalizationArgs;
- (id)alertLocalizationKey;
- (void)setAlertActionLocalizationKey:(id)arg1;
- (void)setAlertLocalizationArgs:(id)arg1;
- (void)setAlertLocalizationKey:(id)arg1;
- (id)_initBare;
- (id)notificationID;
- (id)CKPropertiesDescription;
- (void)setContainerIdentifier:(id)arg1;
- (id)containerIdentifier;
- (id)alertLaunchImage;
- (void)setSoundName:(id)arg1;
- (void)setAlertLaunchImage:(id)arg1;
- (void)setAlertBody:(id)arg1;
- (void).cxx_destruct;
- (id)soundName;
- (id)alertBody;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)init;
- (BOOL)isPruned;
- (void)setIsPruned:(BOOL)arg1;
- (id)initWithRemoteNotificationDictionary:(id)arg1;

@end
