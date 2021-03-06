/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class NSInputStream, NSString, NSDictionary;

@interface NUCMultiPart : NSObject <NSCopying> {
    BOOL _hasInitialBoundary;
    BOOL _hasFinalBoundary;
    unsigned int _stringEncoding;
    NSDictionary *_headers;
    id _body;
    NSString *_boundary;
    NSInputStream *_inputStream;
    unsigned int _readPhase;
    unsigned int _readPhaseOffset;
    unsigned long long _bodyContentLength;
}

@property(readonly) unsigned int stringEncoding;
@property(readonly) NSDictionary * headers;
@property(readonly) id body;
@property(readonly) unsigned long long bodyContentLength;
@property(copy,readonly) NSString * boundary;
@property(readonly) NSInputStream * inputStream;
@property BOOL hasInitialBoundary;
@property BOOL hasFinalBoundary;
@property unsigned int readPhase;
@property unsigned int readPhaseOffset;


- (id)headers;
- (void)setHasFinalBoundary:(BOOL)arg1;
- (void)setHasInitialBoundary:(BOOL)arg1;
- (id)initWithEncoding:(unsigned int)arg1 andHeaders:(id)arg2 forBody:(id)arg3 withLength:(unsigned long long)arg4 andBoundary:(id)arg5;
- (unsigned long long)bodyContentLength;
- (void)setReadPhase:(unsigned int)arg1;
- (unsigned int)readPhaseOffset;
- (void)setReadPhaseOffset:(unsigned int)arg1;
- (void)transitionToNextPhase;
- (int)readData:(id)arg1 intoBuffer:(char *)arg2 maxLength:(unsigned int)arg3;
- (unsigned int)readPhase;
- (id)multipartLastBoundary;
- (BOOL)hasFinalBoundary;
- (id)dataForHeaders;
- (id)multipartInternalBoundary;
- (id)multipartFirstBoundary;
- (BOOL)hasInitialBoundary;
- (id)boundary;
- (unsigned int)stringEncoding;
- (id)inputStream;
- (void).cxx_destruct;
- (id)body;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)hasBytesAvailable;
- (int)read:(char *)arg1 maxLength:(unsigned int)arg2;
- (unsigned long long)contentLength;

@end
