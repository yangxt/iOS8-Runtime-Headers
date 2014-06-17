/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDeliveryResult : NSObject  {
    int _status;
    double _duration;
    unsigned int _bytesSent;
    BOOL _isWifi;
}

@property int status;
@property double duration;
@property unsigned int bytesSent;
@property BOOL isWifi;


- (void)setIsWifi:(BOOL)arg1;
- (BOOL)isWifi;
- (unsigned int)bytesSent;
- (void)setBytesSent:(unsigned int)arg1;
- (id)initWithStatus:(int)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)description;
- (double)duration;
- (void)setDuration:(double)arg1;

@end