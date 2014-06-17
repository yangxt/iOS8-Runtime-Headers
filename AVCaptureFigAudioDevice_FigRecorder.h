/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, NSDictionary;

@interface AVCaptureFigAudioDevice_FigRecorder : AVCaptureDevice_FigRecorder  {
    NSDictionary *_deviceProperties;
    BOOL _levelMeteringEnabled;
    BOOL _isConnected;
    NSString *_localizedName;
    struct OpaqueCMClock { } *_deviceClock;
}

+ (id)_devices;

- (id)uniqueID;
- (id)initWithProperties:(id)arg1;
- (id)localizedName;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)dealloc;
- (id)init;
- (id)devicePropertiesDictionary;
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)arg1;
- (void)audioInputDevicesDidChangeHandler:(id)arg1;
- (struct OpaqueCMClock { }*)deviceClock;
- (BOOL)isInUseByAnotherApplication;
- (BOOL)supportsAVCaptureSessionPreset:(id)arg1;
- (BOOL)hasMediaType:(id)arg1;
- (id)modelID;
- (void)stopUsingDevice;
- (BOOL)startUsingDevice:(id*)arg1;
- (BOOL)isConnected;

@end