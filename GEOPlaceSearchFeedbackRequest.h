/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceSearchFeedbackRequest : PBRequest <NSCopying> {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionGUID;
    long long _businessID;
    double _timestamp;
    int _feedbackType;
    int _localSearchProviderID;
    int _numberOfResults;
    int _positionInResults;
    int _sequenceNumber;
    struct { 
        unsigned int sessionGUID : 1; 
        unsigned int businessID : 1; 
        unsigned int timestamp : 1; 
        unsigned int feedbackType : 1; 
        unsigned int localSearchProviderID : 1; 
        unsigned int numberOfResults : 1; 
        unsigned int positionInResults : 1; 
        unsigned int sequenceNumber : 1; 
    } _has;
}

@property BOOL hasTimestamp;
@property double timestamp;
@property BOOL hasSessionGUID;
@property struct { unsigned long long x1; unsigned long long x2; } sessionGUID;
@property BOOL hasBusinessID;
@property long long businessID;
@property BOOL hasFeedbackType;
@property int feedbackType;
@property BOOL hasNumberOfResults;
@property int numberOfResults;
@property BOOL hasPositionInResults;
@property int positionInResults;
@property BOOL hasSequenceNumber;
@property int sequenceNumber;
@property BOOL hasLocalSearchProviderID;
@property int localSearchProviderID;


- (long long)businessID;
- (BOOL)hasBusinessID;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)positionInResults;
- (int)numberOfResults;
- (int)feedbackType;
- (BOOL)hasPositionInResults;
- (void)setHasPositionInResults:(BOOL)arg1;
- (void)setPositionInResults:(int)arg1;
- (BOOL)hasNumberOfResults;
- (void)setHasNumberOfResults:(BOOL)arg1;
- (void)setNumberOfResults:(int)arg1;
- (BOOL)hasFeedbackType;
- (void)setHasFeedbackType:(BOOL)arg1;
- (void)setFeedbackType:(int)arg1;
- (void)setHasBusinessID:(BOOL)arg1;
- (void)setBusinessID:(long long)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })sessionGUID;
- (BOOL)hasSequenceNumber;
- (void)setHasSequenceNumber:(BOOL)arg1;
- (void)setSequenceNumber:(int)arg1;
- (BOOL)hasSessionGUID;
- (void)setHasSessionGUID:(BOOL)arg1;
- (void)setSessionGUID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (int)localSearchProviderID;
- (BOOL)hasLocalSearchProviderID;
- (void)setHasLocalSearchProviderID:(BOOL)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (int)sequenceNumber;

@end