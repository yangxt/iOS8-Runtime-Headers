/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
 */

@interface AudioTier : NSObject <NSCopying> {
    unsigned int mode;
    unsigned int tier;
    unsigned int duplication;
    unsigned int bundling;
    unsigned int codecPayload;
    unsigned int codecBitrate;
    double duration;
}

@property unsigned int mode;
@property unsigned int tier;
@property unsigned int duplication;
@property unsigned int bundling;
@property unsigned int codecPayload;
@property unsigned int codecBitrate;
@property double duration;


- (void)setCodecBitrate:(unsigned int)arg1;
- (void)setCodecPayload:(unsigned int)arg1;
- (void)setBundling:(unsigned int)arg1;
- (void)setDuplication:(unsigned int)arg1;
- (void)setTier:(unsigned int)arg1;
- (unsigned int)codecBitrate;
- (unsigned int)codecPayload;
- (unsigned int)bundling;
- (unsigned int)duplication;
- (unsigned int)tier;
- (id)initWithMode:(unsigned int)arg1 tier:(unsigned int)arg2 duplication:(unsigned int)arg3 bundling:(unsigned int)arg4 codecPayload:(unsigned int)arg5 codecBitrate:(unsigned int)arg6;
- (unsigned int)mode;
- (void)setMode:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id)init;

@end
