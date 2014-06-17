/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@class NSError, NSDate;

@interface MBStateInfo : NSObject <NSCoding, NSCopying> {
    int _state;
    float _progress;
    unsigned int _estimatedTimeRemaining;
    NSError *_error;
    NSDate *_date;
}

@property(readonly) int state;
@property(readonly) float progress;
@property(readonly) unsigned int estimatedTimeRemaining;
@property(readonly) NSError * error;
@property(readonly) NSDate * date;


- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)setEstimatedTimeRemaining:(unsigned int)arg1;
- (unsigned int)estimatedTimeRemaining;
- (id)error;
- (void)setError:(id)arg1;
- (id)initWithState:(int)arg1 progress:(float)arg2 estimatedTimeRemaining:(unsigned int)arg3 error:(id)arg4;
- (float)progress;
- (id)dictionaryRepresentation;
- (void)setProgress:(float)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)setState:(int)arg1;
- (int)state;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;

@end