/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class NSNumber, NSString, NSArray;

@interface AVAudioSessionDataSourceDescription : NSObject  {
    void *_impl;
}

@property(readonly) NSNumber * dataSourceID;
@property(readonly) NSString * dataSourceName;
@property(readonly) NSString * location;
@property(readonly) NSString * orientation;
@property(readonly) NSArray * supportedPolarPatterns;
@property(readonly) NSString * selectedPolarPattern;
@property(readonly) NSString * preferredPolarPattern;

+ (id)privateCreateOrConfigure:(id)arg1 withRawSourceDescription:(id)arg2 portID:(id)arg3;
+ (id)privateCreateOrConfigureArray:(id)arg1 withRawSourceArray:(id)arg2 portID:(id)arg3;

- (id)location;
- (id)orientation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (BOOL)setPreferredPolarPattern:(id)arg1 error:(id*)arg2;
- (id)supportedPolarPatterns;
- (id)preferredPolarPattern;
- (void)configurePolarPatterns:(id)arg1;
- (id)initWithRawSourceDescription:(id)arg1 andOwningPortID:(id)arg2;
- (id)selectedPolarPattern;
- (id)privateGetOwningPortID;
- (BOOL)isEqualToDataSource:(id)arg1;
- (BOOL)privateMatchesRawDescription:(id)arg1;
- (id)dataSourceName;
- (id)dataSourceID;
- (struct DataSourceDescriptionImpl { id x1; id x2; id x3; id x4; id x5; id x6; id x7; }*)privateGetImplementation;

@end