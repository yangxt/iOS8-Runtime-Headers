/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAudioMixInternal, NSArray;

@interface AVAudioMix : NSObject <NSCopying, NSMutableCopying> {
    AVAudioMixInternal *_audioMix;
}

@property(copy,readonly) NSArray * inputParameters;


- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)setInputParameters:(id)arg1;
- (id)_audioMixInputParametersForTrackID:(int)arg1;
- (id)inputParameters;

@end