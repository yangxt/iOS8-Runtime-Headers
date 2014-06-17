/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPRecord, NSString, CKDPRecordIdentifier;

@interface CKDPQueryRetrieveResponseQueryResult : PBCodable <NSCopying> {
    NSString *_etag;
    CKDPRecordIdentifier *_identifier;
    CKDPRecord *_record;
    int _type;
    struct { 
        unsigned int type : 1; 
    } _has;
}

@property(readonly) BOOL hasIdentifier;
@property(retain) CKDPRecordIdentifier * identifier;
@property(readonly) BOOL hasEtag;
@property(retain) NSString * etag;
@property BOOL hasType;
@property int type;
@property(readonly) BOOL hasRecord;
@property(retain) CKDPRecord * record;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasType;
- (void)setHasType:(BOOL)arg1;
- (BOOL)hasRecord;
- (BOOL)hasIdentifier;
- (void)setRecord:(id)arg1;
- (id)record;
- (id)etag;
- (BOOL)hasEtag;
- (void)setEtag:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)setIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)identifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end