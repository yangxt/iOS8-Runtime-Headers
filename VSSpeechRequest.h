/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURL, NSString, NSAttributedString;

@interface VSSpeechRequest : NSObject <NSSecureCoding> {
    BOOL _useCustomVoice;
    BOOL _maintainsInput;
    BOOL _audioSessionIDIsValid;
    NSString *_text;
    NSAttributedString *_attributedText;
    NSString *_languageCode;
    NSString *_voiceName;
    int _footprint;
    int _gender;
    NSURL *_outputPath;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _stopHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _pauseHandler;

    double _rate;
    double _pitch;
    double _volume;
}

@property(copy) NSString * text;
@property(copy) NSAttributedString * attributedText;
@property(copy) NSString * languageCode;
@property(copy) NSString * voiceName;
@property int footprint;
@property BOOL useCustomVoice;
@property int gender;
@property(copy) NSURL * outputPath;
@property double rate;
@property double pitch;
@property double volume;
@property BOOL maintainsInput;
@property BOOL audioSessionIDIsValid;
@property unsigned int audioSessionID;
@property unsigned int audioQueueFlags;
@property(copy) id stopHandler;
@property(copy) id pauseHandler;

+ (BOOL)supportsSecureCoding;

- (void)setRate:(double)arg1;
- (void)setPauseHandler:(id)arg1;
- (id)pauseHandler;
- (void)setStopHandler:(id)arg1;
- (id)stopHandler;
- (void)setAudioQueueFlags:(unsigned int)arg1;
- (unsigned int)audioQueueFlags;
- (void)setAudioSessionIDIsValid:(BOOL)arg1;
- (BOOL)audioSessionIDIsValid;
- (void)setMaintainsInput:(BOOL)arg1;
- (BOOL)maintainsInput;
- (void)setOutputPath:(id)arg1;
- (id)outputPath;
- (BOOL)useCustomVoice;
- (void)setPitch:(double)arg1;
- (int)footprint;
- (double)pitch;
- (double)rate;
- (void)setVolume:(double)arg1;
- (double)volume;
- (void)setFootprint:(int)arg1;
- (void)setUseCustomVoice:(BOOL)arg1;
- (void)setAudioSessionID:(unsigned int)arg1;
- (unsigned int)audioSessionID;
- (id)voiceName;
- (void)setVoiceName:(id)arg1;
- (id)languageCode;
- (void).cxx_destruct;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)setGender:(int)arg1;
- (int)gender;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)setLanguageCode:(id)arg1;

@end
