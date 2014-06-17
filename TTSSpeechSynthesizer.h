/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@class TTSSpeechRequestOwner, NSString, NSObject<OS_dispatch_queue>, <TTSSpeechSynthesizerDelegate>, NSMutableArray, NSMutableDictionary;

@interface TTSSpeechSynthesizer : NSObject <TTSSpeechConnectionDelegate> {
    int _footprint;
    <TTSSpeechSynthesizerDelegate> *_delegate;
    BOOL _useSharedSession;
    BOOL _audioSessionIDIsValid;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    NSMutableDictionary *_channels;
    NSObject<OS_dispatch_queue> *_queue;
    TTSSpeechRequestOwner *_speechConnection;
    NSMutableArray *_speechRequests;
    struct { 
        unsigned int delegateStartWithRequest : 1; 
        unsigned int delegateFinishWithRequest : 1; 
        unsigned int delegateFinishWithPhonemesSpokenWithRequest : 1; 
        unsigned int delegatePauseWithRequest : 1; 
        unsigned int delegateContinueWithRequest : 1; 
        unsigned int delegateWillSpeakWithRequest : 1; 
        unsigned int willUseInput : 1; 
    } _synthesizerFlags;
    float _rate;
    float _pitch;
    float _volume;
    NSString *_voiceIdentifier;
}

@property <TTSSpeechSynthesizerDelegate> * delegate;
@property float rate;
@property float pitch;
@property float volume;
@property(retain) NSString * voiceIdentifier;

+ (id)availableLanguageCodes;
+ (id)availableVoices;
+ (BOOL)isSystemSpeaking;
+ (id)availableVoicesForLanguageCode:(id)arg1;
+ (void)initialize;

- (void)setRate:(float)arg1;
- (BOOL)continueSpeakingRequest:(id)arg1 withError:(id*)arg2;
- (BOOL)pauseSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 synchronously:(BOOL)arg3 error:(id*)arg4;
- (BOOL)pauseSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 error:(id*)arg3;
- (BOOL)stopSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 synchronously:(BOOL)arg3 error:(id*)arg4;
- (BOOL)stopSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 error:(id*)arg3;
- (BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 request:(id*)arg3 error:(id*)arg4;
- (BOOL)startSpeakingString:(id)arg1 request:(id*)arg2 error:(id*)arg3;
- (void)useAudioQueueFlags:(unsigned int)arg1;
- (void)useSharedAudioSession:(BOOL)arg1;
- (float)maximumRate;
- (float)minimumRate;
- (BOOL)continueSpeakingWithError:(id*)arg1;
- (BOOL)pauseSpeakingAtNextBoundary:(int)arg1 error:(id*)arg2;
- (BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (BOOL)startSpeakingString:(id)arg1 error:(id*)arg2;
- (void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(int)arg3 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(BOOL)arg3 phonemesSpoken:(id)arg4 error:(id)arg5;
- (void)connection:(id)arg1 speechRequestDidContinue:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidPause:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidStart:(id)arg2;
- (BOOL)_continueSpeakingRequest:(id)arg1 withError:(id*)arg2;
- (BOOL)_pauseSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 synchronously:(BOOL)arg3 error:(id*)arg4;
- (BOOL)pauseSpeakingAtNextBoundary:(int)arg1 synchronously:(BOOL)arg2 error:(id*)arg3;
- (BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id*)arg4;
- (BOOL)_stopSpeakingRequest:(id)arg1 atNextBoundary:(int)arg2 synchronously:(BOOL)arg3 error:(id*)arg4;
- (BOOL)_startSpeakingString:(id)arg1 orAttributedString:(id)arg2 toURL:(id)arg3 withLanguageCode:(id)arg4 request:(id*)arg5 error:(id*)arg6;
- (BOOL)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 error:(id*)arg3;
- (BOOL)startSpeakingAttributedString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id*)arg4;
- (BOOL)stopSpeakingAtNextBoundary:(int)arg1 error:(id*)arg2;
- (void)setPitch:(float)arg1;
- (int)footprint;
- (float)pitch;
- (id)_speechVoiceForIdentifier:(id)arg1 language:(id)arg2;
- (float)rate;
- (void)setVolume:(float)arg1;
- (float)volume;
- (BOOL)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 request:(id*)arg3 error:(id*)arg4;
- (BOOL)stopSpeakingAtNextBoundary:(int)arg1 synchronously:(BOOL)arg2 error:(id*)arg3;
- (void)useSpecificAudioSession:(unsigned int)arg1;
- (void)setFootprint:(int)arg1;
- (id)voiceIdentifier;
- (void)setVoiceIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)_setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;
- (BOOL)isSpeaking;
- (id)speechString;

@end