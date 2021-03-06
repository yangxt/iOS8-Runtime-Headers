/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSData, NSMutableArray;

@interface CKDPQueryRetrieveResponse : PBCodable <NSCopying> {
    NSData *_continuationMarker;
    NSMutableArray *_queryResults;
}

@property(retain) NSMutableArray * queryResults;
@property(readonly) BOOL hasContinuationMarker;
@property(retain) NSData * continuationMarker;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setQueryResults:(id)arg1;
- (id)queryResultsAtIndex:(unsigned int)arg1;
- (void)clearQueryResults;
- (unsigned int)queryResultsCount;
- (void)addQueryResults:(id)arg1;
- (id)continuationMarker;
- (BOOL)hasContinuationMarker;
- (id)queryResults;
- (void)setContinuationMarker:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
