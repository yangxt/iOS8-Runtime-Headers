/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDPDateStatistics, NSString, CKDPRecord;

@interface CKDPRecordSaveResponse : PBCodable <NSCopying> {
    NSString *_etag;
    CKDPRecord *_serverFields;
    CKDPDateStatistics *_timeStatistics;
}

@property(readonly) BOOL hasEtag;
@property(retain) NSString * etag;
@property(readonly) BOOL hasTimeStatistics;
@property(retain) CKDPDateStatistics * timeStatistics;
@property(readonly) BOOL hasServerFields;
@property(retain) CKDPRecord * serverFields;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)serverFields;
- (id)timeStatistics;
- (BOOL)hasServerFields;
- (BOOL)hasTimeStatistics;
- (void)setServerFields:(id)arg1;
- (void)setTimeStatistics:(id)arg1;
- (id)etag;
- (BOOL)hasEtag;
- (void)setEtag:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
