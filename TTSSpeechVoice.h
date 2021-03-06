/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@class <TTSSpeechService>, NSString;

@interface TTSSpeechVoice : NSObject  {
    <TTSSpeechService> *_service;
    BOOL _isDefault;
    BOOL _isCustomVoice;
    NSString *_name;
    NSString *_language;
    NSString *_identifier;
    int _footprint;
    int _gender;
}

@property(retain) NSString * name;
@property(retain) NSString * language;
@property(retain) NSString * identifier;
@property int footprint;
@property(readonly) BOOL isDefault;
@property BOOL isCustomVoice;
@property int gender;


- (int)footprint;
- (void)setIsCustomVoice:(BOOL)arg1;
- (BOOL)isCustomVoice;
- (void)setService:(id)arg1;
- (BOOL)isDefault;
- (void)setFootprint:(int)arg1;
- (void)setLanguage:(id)arg1;
- (id)language;
- (void).cxx_destruct;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setGender:(int)arg1;
- (int)gender;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (id)service;

@end
