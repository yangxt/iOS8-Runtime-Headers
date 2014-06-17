/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSCachedURLResponseInternal, NSURLResponse, NSData, NSDictionary;

@interface NSCachedURLResponse : NSObject <NSSecureCoding, NSCopying> {
    NSCachedURLResponseInternal *_internal;
}

@property(copy,readonly) NSURLResponse * response;
@property(copy,readonly) NSData * data;
@property(copy,readonly) NSDictionary * userInfo;
@property(readonly) unsigned int storagePolicy;

+ (BOOL)supportsSecureCoding;

- (struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFCachedURLResponse {} *x2; }*)_CFCachedURLResponse;
- (id)_initWithCFCachedURLResponse:(struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFCachedURLResponse {} *x2; }*)arg1;
- (id)response;
- (id)userInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)data;
- (void)dealloc;
- (id)initWithResponse:(id)arg1 data:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned int)arg4;
- (void)_deallocInternalCFCachedURLResponse;
- (id)dataArray;
- (id)initWithResponse:(id)arg1 dataArray:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned int)arg4;
- (id)initWithResponse:(id)arg1 data:(id)arg2;
- (void)_reestablishInternalCFCachedURLResponse:(struct _CFCachedURLResponse { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFCachedURLResponse {} *x2; }*)arg1;
- (unsigned int)storagePolicy;
- (id)_cacheTime;

@end