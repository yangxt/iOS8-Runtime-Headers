/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class NSNumber, NSString, NSDictionary;

@interface TLITunesTone : NSObject  {
    BOOL _purchased;
    BOOL _ringtone;
    BOOL _protected;
    BOOL _private;
    NSString *_identifier;
    NSString *_name;
    NSString *_filePath;
    NSNumber *_pid;
    NSString *_artworkFile;
    unsigned int _duration;
    NSDictionary *_playbackProperties;
}

@property(copy) NSString * identifier;
@property(copy) NSString * name;
@property(copy) NSString * filePath;
@property(copy) NSNumber * pid;
@property(getter=isPurchased) BOOL purchased;
@property(getter=isRingtone) BOOL ringtone;
@property(copy) NSString * artworkFile;
@property unsigned int duration;
@property(getter=isProtected) BOOL protected;
@property(getter=isPrivate) BOOL private;
@property(copy) NSDictionary * playbackProperties;


- (id)artworkFile;
- (void)_setPlaybackProperties:(id)arg1;
- (void)_setRingtone:(BOOL)arg1;
- (void)_setPrivate:(BOOL)arg1;
- (void)_setProtected:(BOOL)arg1;
- (void)_setArtworkFile:(id)arg1;
- (void)_setPid:(id)arg1;
- (void)_setPurchased:(BOOL)arg1;
- (void)_setFilePath:(id)arg1;
- (id)playbackProperties;
- (id)initWithPropertyListRepresentation:(id)arg1 filePath:(id)arg2;
- (BOOL)isPurchased;
- (BOOL)isRingtone;
- (BOOL)isProtected;
- (BOOL)isPrivate;
- (id)pid;
- (id)filePath;
- (void)_setDuration:(unsigned int)arg1;
- (id)identifier;
- (id)name;
- (unsigned int)duration;
- (void)dealloc;
- (void)_setIdentifier:(id)arg1;
- (void)_setName:(id)arg1;

@end
