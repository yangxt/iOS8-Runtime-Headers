/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSDictionary, NSArray;

@interface BWMRCNode : BWNode  {
    int (*_createSampleBufferProcessorFunction)();
    struct OpaqueFigSampleBufferProcessor { } *_sampleBufferProcessor;
    NSArray *_symbologiesArray;
    NSArray *_mrcIdentifiers;
    int _metadataOutputRate;
    int _lastMRCCount;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _rectOfInterest;
    NSDictionary *_metadataIdentifierToSymbologyDictionary;
}

+ (void)initialize;

- (BOOL)_shouldEmitSBuf:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfInterest;
- (id)mrcIdentifiers;
- (void)_teardownSampleBufferProcessor;
- (id)_newSymbologiesArrayFromIdentifiers:(id)arg1;
- (void)setRectOfInterest:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMrcIdentifiers:(id)arg1;
- (long)_setupSampleBufferProcessor;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeType;
- (void)dealloc;
- (id)init;

@end
