/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSSet, NSString;

@interface AVMediaFileType : NSObject <NSCopying> {
    NSString *_uti;
    long _supportsSampleReferencesOnce;
    BOOL _supportsSampleReferences;
}

@property(readonly) NSString * defaultFileExtension;
@property(readonly) NSSet * supportedMediaTypes;
@property(readonly) BOOL supportsSampleReferences;
@property(readonly) NSString * UTI;
@property(readonly) NSString * figFormatReaderFileFormat;
@property(readonly) unsigned long audioFileTypeID;

+ (void)initialize;
+ (id)isoFileTypes;
+ (id)mediaFileTypeWithFileTypeIdentifier:(id)arg1;
+ (id)_mediaFileTypeWithFileTypeIdentifier:(id)arg1 exceptionReason:(id*)arg2;
+ (id)allFileTypeIdentifiers;

- (id)UTI;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)dealloc;
- (id)defaultFileExtension;
- (id)initWithFileTypeIdentifier:(id)arg1 exceptionReason:(id*)arg2;
- (unsigned long)audioFileTypeID;
- (BOOL)supportsOutputSettings:(id)arg1 reason:(id*)arg2;
- (BOOL)supportsFormat:(struct opaqueCMFormatDescription { }*)arg1;
- (id)supportedMediaTypes;
- (id)figFormatReaderFileFormat;
- (BOOL)supportsSampleReferences;

@end
