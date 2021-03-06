/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
 */

@class NSString, NSDictionary;

@interface RTCReportingBackend : NSObject  {
    NSDictionary *_profile;
    NSString *_name;
    int _state;
    NSString *_productVersion;
    NSString *_buildVersion;
    NSString *_hardwareType;
    NSString *_productFamily;
    double _startTimeStamp;
    unsigned int _sessionID;
    int _compType;
    unsigned short _clientVersion;
    unsigned short _eventID;
    unsigned char _selfVersionMajor;
    unsigned char _selfVersionMinor;
    unsigned char _isInternal;
    unsigned char _requireUserInfo;
    NSDictionary *_userInfoDict;
    unsigned char _batchEvents;
    char *_udid;
    NSString *_displayURL;
    double _samplingFactor;
}

@property int state;
@property unsigned int sessionID;
@property int compType;
@property unsigned short clientVersion;
@property char * udid;
@property(copy) NSString * displayURL;
@property(copy) NSString * productVersion;
@property(copy) NSString * buildVersion;
@property(copy) NSString * hardwareType;
@property(copy) NSString * productFamily;
@property unsigned char isInternal;
@property unsigned char requireUserInfo;
@property unsigned char batchEvents;
@property double samplingFactor;


- (id)hardwareType;
- (void)setStartTimestamp:(const struct timeval { int x1; int x2; }*)arg1;
- (void)setClientVersion:(unsigned short)arg1;
- (unsigned short)clientVersion;
- (void)setSamplingFactor:(double)arg1;
- (double)samplingFactor;
- (void)setBatchEvents:(unsigned char)arg1;
- (unsigned char)batchEvents;
- (void)setRequireUserInfo:(unsigned char)arg1;
- (unsigned char)requireUserInfo;
- (void)setIsInternal:(unsigned char)arg1;
- (unsigned char)isInternal;
- (void)setProductFamily:(id)arg1;
- (id)productFamily;
- (void)setHardwareType:(id)arg1;
- (void)setDisplayURL:(id)arg1;
- (id)displayURL;
- (void)setUdid:(char *)arg1;
- (void)setCompType:(int)arg1;
- (int)compType;
- (id)sendMsgOfType:(int)arg1 timestamp:(const struct timeval { int x1; int x2; }*)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 dict:(id)arg5;
- (void)setSelfVersion:(id)arg1;
- (BOOL)uploadFileAtPath:(id)arg1;
- (id)sendMsgOfType:(int)arg1 timestamp:(const struct timeval { int x1; int x2; }*)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 eventID:(unsigned short)arg5 dict:(id)arg6;
- (id)setUserInfoDict:(id)arg1;
- (id)convertIntoSHA256:(id)arg1;
- (id)initWithName:(id)arg1 profile:(id)arg2 productFamily:(id)arg3;
- (char *)udid;
- (id)flushMessages;
- (void)setSessionID:(unsigned int)arg1;
- (unsigned int)sessionID;
- (id)productVersion;
- (void)cleanup;
- (id)buildVersion;
- (void)setState:(int)arg1;
- (int)state;
- (void)dealloc;
- (void)setBuildVersion:(id)arg1;
- (void)setProductVersion:(id)arg1;

@end
