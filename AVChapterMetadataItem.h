/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem  {
    AVChapterMetadataItemInternal *_privChapter;
}


- (id)keySpace;
- (int)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (void)cancelLoading;
- (id)extraAttributes;
- (id)commonKey;
- (id)key;
- (id)locale;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (id)value;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (long)_chapterIndex;
- (long)_chapterGroupIndex;
- (BOOL)_valueForKeyDependsOnMetadataValue:(id)arg1;
- (void)_takeValueFrom:(id)arg1;
- (int)_valueStatus;
- (void)_setValueStatus:(int)arg1 figErrorCode:(long)arg2;
- (void)_ensureValueLoadedSync;
- (void)_removeFigAssetNotifications;
- (void)_addFigAssetNotifications;
- (id)_initWithAsset:(id)arg1 chapterGroupIndex:(long)arg2 chapterIndex:(long)arg3 chapterType:(id)arg4 locale:(id)arg5 chapterDataType:(id)arg6 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg8;
- (id)dataType;

@end