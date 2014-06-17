/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSNumber, NSString;

@interface AAFamilyInvite : NSObject  {
    BOOL _isChildTransferInvite;
    NSString *_code;
    NSString *_organizerFirstName;
    NSString *_organizerLastName;
    NSNumber *_organizerDSID;
    NSNumber *_recepientDSID;
    NSString *_childFirstName;
    NSString *_childLastName;
}

@property(copy) NSString * code;
@property(copy) NSString * organizerFirstName;
@property(copy) NSString * organizerLastName;
@property(copy) NSNumber * organizerDSID;
@property(copy) NSNumber * recepientDSID;
@property BOOL isChildTransferInvite;
@property(copy) NSString * childFirstName;
@property(copy) NSString * childLastName;


- (void)setCode:(id)arg1;
- (void)setChildLastName:(id)arg1;
- (id)childLastName;
- (void)setChildFirstName:(id)arg1;
- (id)childFirstName;
- (void)setIsChildTransferInvite:(BOOL)arg1;
- (BOOL)isChildTransferInvite;
- (void)setRecepientDSID:(id)arg1;
- (id)recepientDSID;
- (void)setOrganizerDSID:(id)arg1;
- (id)organizerDSID;
- (void)setOrganizerLastName:(id)arg1;
- (id)organizerLastName;
- (void)setOrganizerFirstName:(id)arg1;
- (id)organizerFirstName;
- (void).cxx_destruct;
- (id)code;

@end