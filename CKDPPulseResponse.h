/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSString, NSMutableArray;

@interface CKDPPulseResponse : PBCodable <NSCopying> {
    NSString *_currentEtag;
    NSMutableArray *_userDatas;
}

@property(readonly) BOOL hasCurrentEtag;
@property(retain) NSString * currentEtag;
@property(retain) NSMutableArray * userDatas;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setUserDatas:(id)arg1;
- (BOOL)hasCurrentEtag;
- (id)userDataAtIndex:(unsigned int)arg1;
- (void)clearUserDatas;
- (unsigned int)userDatasCount;
- (void)setCurrentEtag:(id)arg1;
- (void)addUserData:(id)arg1;
- (id)currentEtag;
- (id)userDatas;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
