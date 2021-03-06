/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSString, CKRecordID;

@interface CKShareParticipant : NSObject <NSSecureCoding, NSCopying> {
    BOOL _isCurrentUser;
    CKRecordID *_userRecordID;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_emailAddress;
    NSString *_participantID;
    int _acceptanceStatus;
    int _itemPermission;
    int _listPermission;
    int _originalAcceptanceStatus;
    int _originalItemPermission;
    int _originalListPermission;
}

@property(copy) CKRecordID * userRecordID;
@property(copy) NSString * firstName;
@property(copy) NSString * lastName;
@property(copy) NSString * emailAddress;
@property(copy) NSString * participantID;
@property BOOL isCurrentUser;
@property int acceptanceStatus;
@property int itemPermission;
@property int listPermission;
@property int originalAcceptanceStatus;
@property int originalItemPermission;
@property int originalListPermission;

+ (BOOL)supportsSecureCoding;

- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (id)lastName;
- (id)firstName;
- (void)setParticipantID:(id)arg1;
- (id)participantID;
- (void)setUserRecordID:(id)arg1;
- (void)setAcceptanceStatus:(int)arg1;
- (int)acceptanceStatus;
- (id)userRecordID;
- (void)setIsCurrentUser:(BOOL)arg1;
- (id)_initWithUserRecordID:(id)arg1 participantID:(id)arg2 emailAddress:(id)arg3 acceptanceStatus:(int)arg4 itemPermission:(int)arg5 listPermission:(int)arg6;
- (int)originalListPermission;
- (int)listPermission;
- (int)originalItemPermission;
- (int)itemPermission;
- (id)CKPropertiesDescription;
- (id)emailAddress;
- (void)setEmailAddress:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)init;
- (BOOL)isCurrentUser;
- (int)originalAcceptanceStatus;
- (void)setOriginalListPermission:(int)arg1;
- (void)setOriginalItemPermission:(int)arg1;
- (void)setOriginalAcceptanceStatus:(int)arg1;
- (void)setListPermission:(int)arg1;
- (void)setItemPermission:(int)arg1;
- (BOOL)isEquivalentToParticipant:(id)arg1;

@end
