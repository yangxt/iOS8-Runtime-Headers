/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKContainerID, NSString, NSDate, CKSharedItemID;

@interface CKComment : NSObject <NSSecureCoding, NSCopying> {
    NSString *_commentID;
    CKSharedItemID *_commentedItemID;
    NSString *_message;
    NSString *_context;
    NSString *_commenterID;
    NSDate *_creationDate;
    NSString *_localID;
    CKContainerID *_containerID;
}

@property(copy) NSString * commentID;
@property(copy) CKSharedItemID * commentedItemID;
@property(copy) NSString * message;
@property(copy) NSString * context;
@property(copy) NSString * commenterID;
@property(copy) NSDate * creationDate;
@property(copy) NSString * localID;
@property(copy) CKContainerID * containerID;

+ (BOOL)supportsSecureCoding;

- (void)setCreationDate:(id)arg1;
- (id)creationDate;
- (id)localID;
- (void)setLocalID:(id)arg1;
- (id)commenterID;
- (id)commentID;
- (id)sharedItemID;
- (id)_initBare;
- (void)setCommentedItemID:(id)arg1;
- (void)setCommenterID:(id)arg1;
- (void)setCommentID:(id)arg1;
- (id)commentedItemID;
- (id)CKPropertiesDescription;
- (void)setContainerID:(id)arg1;
- (id)containerID;
- (void).cxx_destruct;
- (void)setMessage:(id)arg1;
- (id)message;
- (void)setContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)context;
- (id)description;
- (id)init;
- (id)initWithMessage:(id)arg1 item:(id)arg2;
- (id)_initWithMessage:(id)arg1 itemID:(id)arg2;
- (void)CKAssignToContainerWithID:(id)arg1;

@end