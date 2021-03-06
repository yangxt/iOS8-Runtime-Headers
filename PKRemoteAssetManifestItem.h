/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSURL, NSString, NSNumber;

@interface PKRemoteAssetManifestItem : NSObject <NSSecureCoding> {
    NSURL *_localURL;
    NSURL *_remoteURL;
    NSURL *_passURL;
    NSString *_sha1Hex;
    NSNumber *_size;
}

@property(copy) NSURL * localURL;
@property(copy) NSURL * remoteURL;
@property(copy) NSURL * passURL;
@property(copy) NSString * sha1Hex;
@property(copy) NSNumber * size;
@property(readonly) NSString * relativeLocalPath;

+ (id)itemWithLocalURL:(id)arg1 passURL:(id)arg2 dictionary:(id)arg3 error:(id*)arg4;
+ (BOOL)supportsSecureCoding;

- (id)passURL;
- (id)initWithLocalURL:(id)arg1 passURL:(id)arg2 dictionary:(id)arg3 error:(id*)arg4;
- (void)setSha1Hex:(id)arg1;
- (void)setRemoteURL:(id)arg1;
- (void)setPassURL:(id)arg1;
- (id)remoteURL;
- (id)relativeLocalPath;
- (id)sha1Hex;
- (id)localURL;
- (void)setSize:(id)arg1;
- (id)size;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)setLocalURL:(id)arg1;

@end
