/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSDictionary, NSArray;

@interface BWBracketSettings : NSObject  {
    BOOL _providePreBracketedEV0;
    NSArray *_exposureValues;
    NSDictionary *_bracketedCaptureOverrides;
    NSArray *_manualExposureBracketedCaptureParams;
    NSDictionary *_property1BracketedCaptureParams;
}

@property BOOL providePreBracketedEV0;
@property(copy) NSArray * exposureValues;
@property(copy) NSDictionary * bracketedCaptureOverrides;
@property(copy) NSArray * manualExposureBracketedCaptureParams;
@property(copy) NSDictionary * property1BracketedCaptureParams;

+ (id)bracketSettings;

- (void)setProperty1BracketedCaptureParams:(id)arg1;
- (id)property1BracketedCaptureParams;
- (void)setManualExposureBracketedCaptureParams:(id)arg1;
- (id)manualExposureBracketedCaptureParams;
- (void)setBracketedCaptureOverrides:(id)arg1;
- (id)bracketedCaptureOverrides;
- (void)setExposureValues:(id)arg1;
- (id)exposureValues;
- (void)setProvidePreBracketedEV0:(BOOL)arg1;
- (BOOL)providePreBracketedEV0;
- (void)dealloc;

@end
