/* Generated by RuntimeBrowser.
   Image: /usr/lib/libextension.dylib
 */

@class NSData;

@interface _NSItemProviderSandboxedResource : NSObject <NSSecureCoding, NSCopying> {
    NSData *_bookmarkData;
}

@property(copy) NSData * bookmarkData;

+ (BOOL)supportsSecureCoding;

- (void)setBookmarkData:(id)arg1;
- (id)resolveURLAndReturnError:(id*)arg1;
- (id)bookmarkData;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end