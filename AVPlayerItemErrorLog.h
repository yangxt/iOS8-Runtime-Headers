/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVPlayerItemErrorLogInternal;

@interface AVPlayerItemErrorLog : NSObject <NSCopying> {
    AVPlayerItemErrorLogInternal *_playerItemErrorLog;
}

@property(readonly) unsigned int extendedLogDataStringEncoding;
@property(readonly) NSArray * events;


- (id)events;
- (unsigned int)extendedLogDataStringEncoding;
- (id)extendedLogData;
- (id)initWithLogArray:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)_errorLogArray;

@end
