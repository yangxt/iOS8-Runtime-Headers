/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString;

@interface EKPersistentSharee : EKPersistentObject <NSCopying> {
}

@property(readonly) NSString * UUID;
@property(copy) NSString * displayName;
@property(copy) NSString * emailAddress;
@property(copy) NSString * firstName;
@property(copy) NSString * lastName;
@property(copy) NSString * externalID;
@property int shareeStatus;
@property int shareeAccessLevel;

+ (id)shareeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)shareeWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3;
+ (id)relations;
+ (id)defaultPropertiesToLoad;

- (void)setOwner:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (id)lastName;
- (id)firstName;
- (id)emailAddress;
- (void)setEmailAddress:(id)arg1;
- (id)displayName;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (id)owner;
- (id)description;
- (id)init;
- (int)entityType;
- (void)setDisplayName:(id)arg1;
- (void)setShareeAccessLevel:(int)arg1;
- (int)shareeAccessLevel;
- (void)setShareeStatus:(int)arg1;
- (int)shareeStatus;
- (id)externalID;
- (void)setExternalID:(id)arg1;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3;

@end