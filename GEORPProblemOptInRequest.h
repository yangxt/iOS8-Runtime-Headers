/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEORPUserCredentials, NSData, NSString;

@interface GEORPProblemOptInRequest : PBRequest <NSCopying> {
    NSData *_devicePushToken;
    NSString *_problemId;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    BOOL _didOptIn;
    struct { 
        unsigned int didOptIn : 1; 
    } _has;
}

@property(readonly) BOOL hasProblemId;
@property(retain) NSString * problemId;
@property BOOL hasDidOptIn;
@property BOOL didOptIn;
@property(readonly) BOOL hasUserCredentials;
@property(retain) GEORPUserCredentials * userCredentials;
@property(readonly) BOOL hasDevicePushToken;
@property(retain) NSData * devicePushToken;
@property(readonly) BOOL hasUserEmail;
@property(retain) NSString * userEmail;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)userEmail;
- (id)devicePushToken;
- (BOOL)didOptIn;
- (BOOL)hasUserEmail;
- (BOOL)hasDevicePushToken;
- (BOOL)hasDidOptIn;
- (void)setHasDidOptIn:(BOOL)arg1;
- (void)setDidOptIn:(BOOL)arg1;
- (void)setUserEmail:(id)arg1;
- (void)setDevicePushToken:(id)arg1;
- (id)userCredentials;
- (BOOL)hasUserCredentials;
- (void)setUserCredentials:(id)arg1;
- (BOOL)hasProblemId;
- (void)setProblemId:(id)arg1;
- (id)initWithSubmissionID:(id)arg1 allowNotificationsAtPushToken:(id)arg2 allowContactBackAtEmailAddress:(id)arg3 traits:(id)arg4;
- (id)problemId;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
