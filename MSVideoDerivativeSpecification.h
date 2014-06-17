/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSString;

@interface MSVideoDerivativeSpecification : NSObject  {
    BOOL _useCellular;
    BOOL _powerRequired;
    float _bitRate;
    NSString *_videoType;
    unsigned int _mediaAssetType;
}

@property(readonly) BOOL useCellular;
@property(readonly) BOOL powerRequired;
@property(readonly) float bitRate;
@property(readonly) NSString * videoType;
@property(readonly) unsigned int mediaAssetType;

+ (id)videoDerivativeSpecificationsWithDictionaryArray:(id)arg1;

- (unsigned int)mediaAssetType;
- (float)bitRate;
- (id)videoType;
- (BOOL)powerRequired;
- (BOOL)useCellular;
- (id)initWithDictionary:(id)arg1;

@end