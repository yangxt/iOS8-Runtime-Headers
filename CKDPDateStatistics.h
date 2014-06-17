/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPDate;

@interface CKDPDateStatistics : PBCodable <NSCopying> {
    CKDPDate *_creation;
    CKDPDate *_modification;
}

@property(readonly) BOOL hasCreation;
@property(retain) CKDPDate * creation;
@property(readonly) BOOL hasModification;
@property(retain) CKDPDate * modification;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)modification;
- (id)creation;
- (BOOL)hasModification;
- (BOOL)hasCreation;
- (void)setModification:(id)arg1;
- (void)setCreation:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end