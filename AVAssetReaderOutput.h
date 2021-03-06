/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, AVWeakReference, AVAssetReaderOutputInternal, NSDictionary;

@interface AVAssetReaderOutput : NSObject  {
    AVAssetReaderOutputInternal *_internal;
}

@property(readonly) NSString * mediaType;
@property BOOL alwaysCopiesSampleData;
@property(getter=_weakReferenceToAssetReader,readonly) AVWeakReference * weakReferenceToAssetReader;
@property(getter=_extractionID,setter=_setExtractionID:) int extractionID;
@property(getter=_figAssetReaderExtractionOptions,readonly) NSDictionary * figAssetReaderExtractionOptions;
@property(getter=_trimsSampleDurations,readonly) BOOL trimsSampleDurations;

+ (void)initialize;

- (struct opaqueCMSampleBuffer { }*)copyNextSampleBuffer;
- (id)mediaType;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)_figAssetReaderFailed;
- (void)_figAssetReaderDecodeError;
- (void)resetForReadingTimeRanges:(id)arg1;
- (void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)arg1;
- (id)_figAssetReaderExtractionOptions;
- (void)_setExtractionID:(int)arg1;
- (void)setSupportsRandomAccess:(BOOL)arg1;
- (void)setAlwaysCopiesSampleData:(BOOL)arg1;
- (BOOL)_updateTimeRangesOnFigAssetReaderReturningError:(id*)arg1;
- (void)markConfigurationAsFinal;
- (void)_markAsFinished;
- (BOOL)_enableTrackExtractionReturningError:(id*)arg1;
- (int)_extractionID;
- (BOOL)_trimsSampleDurations;
- (id)_weakReferenceToAssetReader;
- (void)_setFigAssetReader:(struct OpaqueFigAssetReader { }*)arg1;
- (id)currentTimeRanges;
- (BOOL)supportsRandomAccess;
- (BOOL)alwaysCopiesSampleData;
- (struct OpaqueFigAssetReader { }*)_figAssetReader;
- (void)_cancelReading;
- (BOOL)_prepareForReadingReturningError:(id*)arg1;
- (BOOL)_isFinished;
- (void)_attachToWeakReferenceToAssetReader:(id)arg1;
- (id)_errorForOSStatus:(long)arg1;
- (int)_status;
- (id)_asset;

@end
