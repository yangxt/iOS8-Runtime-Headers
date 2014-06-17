/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying> {
    NSString *_clientLocation;
    NSMutableArray *_uploadTokens;
}

@property(readonly) BOOL hasClientLocation;
@property(retain) NSString * clientLocation;
@property(retain) NSMutableArray * uploadTokens;


- (id)clientLocation;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setUploadTokens:(id)arg1;
- (id)uploadTokens;
- (BOOL)hasClientLocation;
- (void)clearUploadTokens;
- (unsigned int)uploadTokensCount;
- (void)setClientLocation:(id)arg1;
- (void)addUploadTokens:(id)arg1;
- (id)uploadTokensAtIndex:(unsigned int)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end