/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSArray, NSCache, NSObject<OS_dispatch_queue>, PHPhotoLibrary;

@interface PHBatchFetchingArray : NSArray  {
    NSArray *_oids;
    PHPhotoLibrary *_photoLibrary;
    unsigned int _count;
    NSCache *_cache;
    unsigned int _firstBatchIndex;
    NSArray *_firstBatch;
    NSObject<OS_dispatch_queue> *_firstBatchQueue;
    unsigned int _batchSize;
    unsigned int _propertyHint;
}

@property(readonly) PHPhotoLibrary * photoLibrary;
@property(readonly) NSArray * oids;

+ (BOOL)accessInstanceVariablesDirectly;

- (unsigned int)batchSize;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)photoLibrary;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)subarrayWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)__batchHelper:(unsigned int)arg1;
- (id)initWithOIDs:(id)arg1 options:(id)arg2 photoLibrary:(id)arg3;
- (id)_phObjectsForOIDs:(id)arg1;
- (id)oids;
- (id)_phObjectAtIndex:(unsigned int)arg1;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)description;
- (unsigned int)indexOfObject:(id)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;

@end