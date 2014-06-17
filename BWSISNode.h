/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSDictionary, NSNumber, FigCaptureStillImageSettings;

@interface BWSISNode : BWNode <BWBracketSettingsProvider> {
    int (*_createSampleBufferProcessorFunction)();
    struct OpaqueFigSampleBufferProcessor { } *_sampleBufferProcessor;
    NSDictionary *_sensorIDDictionary;
    NSDictionary *_noiseModelParamsDictionary;
    BOOL _allowExperimentalOverrides;
    NSNumber *_fusionStrengthFactor;
    int _outputMode;
    int _lensShadingCorrectionMode;
    double _integrationTimeThreshold;
    int _maxIntegrationTimeLimitMsec;
    float _bracketGainCap;
    NSArray *_exposureValues;
    NSArray *_afWindowParamsArray;
    int _sisBracketCount;
    NSArray *_property1Value0Types;
    int _property1Count;
    FigCaptureStillImageSettings *_currentCaptureSettings;
    BOOL _preBracketedFrameReceived;
    int _numberFramesReceived;
}

@property(readonly) double integrationTimeThreshold;

+ (void)initialize;

- (void)_sisProcessorOutputReady:(long)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (id)_property1BracketSettingsWithCurrentFrameStats:(struct { double x1; float x2; float x3; float x4; double x5; float x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; long long x11; }*)arg1 stillImageSettings:(id)arg2;
- (id)_sisBracketSettingsWithCurrentFrameStats:(struct { double x1; float x2; float x3; float x4; double x5; float x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; long long x11; }*)arg1 stillImageSettings:(id)arg2;
- (long)_unpackSISOptions;
- (id)_initWithSensorIDDictionary:(id)arg1 allowExperimentalOverrides:(BOOL)arg2;
- (double)integrationTimeThreshold;
- (id)initWithSensorIDDictionary:(id)arg1;
- (id)bracketSettingsForBracketingMode:(int)arg1 withCurrentFrameStats:(struct { double x1; float x2; float x3; float x4; double x5; float x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; long long x11; }*)arg2 stillImageSettings:(id)arg3;
- (int)bracketCountForBracketingMode:(int)arg1 withCurrentFrameStats:(struct { double x1; float x2; float x3; float x4; double x5; float x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; long long x11; }*)arg2 stillImageSettings:(id)arg3;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (long)_setupSampleBufferProcessor;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)_clearCaptureRequestState;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)nodeSubType;
- (id)nodeType;
- (void)dealloc;

@end