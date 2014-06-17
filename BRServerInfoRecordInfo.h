/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class NSData, NSString;

@interface BRServerInfoRecordInfo : PBCodable <NSCopying> {
    unsigned long long _bounceNo;
    NSData *_encryptedBasename;
    NSString *_etag;
    NSString *_extension;
    NSString *_recordID;
    NSData *_recordProtectionInfo;
    NSString *_zoneName;
    NSData *_zoneProtectionInfo;
    struct { 
        unsigned int bounceNo : 1; 
    } _has;
}

@property(readonly) BOOL hasRecordID;
@property(retain) NSString * recordID;
@property(readonly) BOOL hasEtag;
@property(retain) NSString * etag;
@property(readonly) BOOL hasEncryptedBasename;
@property(retain) NSData * encryptedBasename;
@property BOOL hasBounceNo;
@property unsigned long long bounceNo;
@property(readonly) BOOL hasExtension;
@property(retain) NSString * extension;
@property(readonly) BOOL hasRecordProtectionInfo;
@property(retain) NSData * recordProtectionInfo;
@property(readonly) BOOL hasZoneName;
@property(retain) NSString * zoneName;
@property(readonly) BOOL hasZoneProtectionInfo;
@property(retain) NSData * zoneProtectionInfo;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)recordID;
- (void)setRecordID:(id)arg1;
- (id)zoneName;
- (id)etag;
- (BOOL)hasEtag;
- (void)setEtag:(id)arg1;
- (void)setHasBounceNo:(BOOL)arg1;
- (id)zoneProtectionInfo;
- (BOOL)hasZoneProtectionInfo;
- (BOOL)hasZoneName;
- (id)recordProtectionInfo;
- (BOOL)hasRecordProtectionInfo;
- (BOOL)hasExtension;
- (void)setBounceNo:(unsigned long long)arg1;
- (unsigned long long)bounceNo;
- (BOOL)hasBounceNo;
- (id)encryptedBasename;
- (BOOL)hasEncryptedBasename;
- (BOOL)hasRecordID;
- (void)setZoneProtectionInfo:(id)arg1;
- (void)setRecordProtectionInfo:(id)arg1;
- (void)setEncryptedBasename:(id)arg1;
- (id)dictionaryRepresentation;
- (id)extension;
- (void)setExtension:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)setZoneName:(id)arg1;

@end