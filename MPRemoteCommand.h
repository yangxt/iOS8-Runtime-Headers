/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableArray;

@interface MPRemoteCommand : NSObject  {
    NSMutableArray *_targetInvocations;
    unsigned int _mediaRemoteCommandType;
    BOOL _enabled;
}

@property(getter=isEnabled) BOOL enabled;


- (id)addTargetWithHandler:(id)arg1;
- (void).cxx_destruct;
- (void)removeTarget:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (id)init;
- (id)_mediaRemoteCommandInfoOptions;
- (void)_addTarget:(id)arg1 action:(SEL)arg2 retainTarget:(BOOL)arg3;
- (struct _MRMediaRemoteCommandInfo { }*)createCommandInfoRepresentation;
- (BOOL)hasTargets;
- (id)keyPathsForValuesTriggeringCommandsChanged;
- (id)invokeCommandWithEvent:(id)arg1;
- (unsigned int)mediaRemoteCommandType;
- (BOOL)isSupported;
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;

@end
