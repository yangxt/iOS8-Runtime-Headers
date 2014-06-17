/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSArray, NSString, NSData, NSDate;

@interface CPLMasterChange : CPLItemChange  {
    NSArray *_resources;
    NSDate *_creationDate;
    NSDate *_importDate;
    NSString *_filename;
    NSString *_importGroupIdentifier;
    NSString *_mediaMetaDataType;
    NSData *_mediaMetaData;
    int _originalOrientation;
}

@property(copy) NSArray * resources;
@property(copy) NSDate * creationDate;
@property(copy) NSDate * importDate;
@property(copy) NSString * filename;
@property(copy) NSString * importGroupIdentifier;
@property(copy) NSString * mediaMetaDataType;
@property(retain) NSData * mediaMetaData;
@property int originalOrientation;


- (void)setResources:(id)arg1;
- (void)setImportDate:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setOriginalOrientation:(int)arg1;
- (id)resources;
- (int)originalOrientation;
- (id)importDate;
- (id)creationDate;
- (void)setFilename:(id)arg1;
- (id)filename;
- (void)setMediaMetaData:(id)arg1;
- (id)mediaMetaData;
- (void)setMediaMetaDataType:(id)arg1;
- (id)mediaMetaDataType;
- (void)setImportGroupIdentifier:(id)arg1;
- (id)importGroupIdentifier;
- (BOOL)supportsResources;
- (void)awakeFromStorage;
- (void)prepareForStorage;
- (id)propertiesDescription;
- (id)propertiesForChangeType:(unsigned int)arg1;
- (void).cxx_destruct;
- (id)name;
- (void)setName:(id)arg1;
- (id)init;

@end