/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPIdentifier, NSData;

@interface CKDPInvitationAcceptRequest : PBRequest <NSCopying> {
    CKDPIdentifier *_invitationId;
    NSData *_parameters;
}

@property(readonly) BOOL hasInvitationId;
@property(retain) CKDPIdentifier * invitationId;
@property(readonly) BOOL hasParameters;
@property(retain) NSData * parameters;

+ (id)options;

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setParameters:(id)arg1;
- (id)parameters;
- (BOOL)hasParameters;
- (id)invitationId;
- (BOOL)hasInvitationId;
- (void)setInvitationId:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
