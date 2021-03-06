/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSSPropertyMap, NSString;

@interface TSCHConfiguration : NSObject  {
    BOOL mSupportsChartDataEditor;
    BOOL mSupportsChartRangeEditingMode;
    BOOL mSupportsNumberFormatSameAsSource;
    BOOL mShowMessageOnSelection;
    BOOL mDisableHighQualityRenderingIfNecessary;
    BOOL mSupports3DFillDataEmbeddingRecovery;
    BOOL mUse3DFillFor3DChartFallback;
    BOOL mShouldForceDiscreteGraphicsFor3D;
    BOOL mExportsUsingSageKeynoteChartNonStyleDefaultsOverride;
    BOOL mSupportsTextBackground;
    Class mMultiDataChartOptionsControllerBuildSupportClass;
    NSString *mSaveChartStyleHelpKey;
}

@property BOOL supportsChartDataEditor;
@property BOOL supportsChartRangeEditingMode;
@property BOOL supportsNumberFormatSameAsSource;
@property BOOL showMessageOnSelection;
@property BOOL disableHighQualityRenderingIfNecessary;
@property BOOL supports3DFillDataEmbeddingRecovery;
@property BOOL use3DFillFor3DChartFallback;
@property BOOL shouldForceDiscreteGraphicsFor3D;
@property BOOL exportsUsingSageKeynoteChartNonStyleDefaultsOverride;
@property BOOL supportsTextBackground;
@property Class multiDataChartOptionsControllerBuildSupportClass;
@property(copy) NSString * saveChartStyleHelpKey;
@property(readonly) TSSPropertyMap * appSpecificPropertyOverrides;

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedChartConfiguration;
+ (void)resetSharedChartConfiguration;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)retainCount;
- (id)autorelease;
- (id)retain;
- (oneway void)release;
- (id)init;
- (void)setSaveChartStyleHelpKey:(id)arg1;
- (id)saveChartStyleHelpKey;
- (void)setMultiDataChartOptionsControllerBuildSupportClass:(Class)arg1;
- (Class)multiDataChartOptionsControllerBuildSupportClass;
- (void)setSupportsTextBackground:(BOOL)arg1;
- (BOOL)supportsTextBackground;
- (void)setExportsUsingSageKeynoteChartNonStyleDefaultsOverride:(BOOL)arg1;
- (BOOL)exportsUsingSageKeynoteChartNonStyleDefaultsOverride;
- (void)setShouldForceDiscreteGraphicsFor3D:(BOOL)arg1;
- (BOOL)shouldForceDiscreteGraphicsFor3D;
- (void)setUse3DFillFor3DChartFallback:(BOOL)arg1;
- (BOOL)supports3DFillDataEmbeddingRecovery;
- (void)setDisableHighQualityRenderingIfNecessary:(BOOL)arg1;
- (void)setShowMessageOnSelection:(BOOL)arg1;
- (BOOL)showMessageOnSelection;
- (void)setSupportsNumberFormatSameAsSource:(BOOL)arg1;
- (void)setSupportsChartRangeEditingMode:(BOOL)arg1;
- (void)setSupportsChartDataEditor:(BOOL)arg1;
- (BOOL)supportsChartDataEditor;
- (id)appSpecificPropertyOverrides;
- (BOOL)supportsChartRangeEditingMode;
- (BOOL)supportsNumberFormatSameAsSource;
- (BOOL)disableHighQualityRenderingIfNecessary;
- (BOOL)use3DFillFor3DChartFallback;
- (void)setSupports3DFillDataEmbeddingRecovery:(BOOL)arg1;

@end
