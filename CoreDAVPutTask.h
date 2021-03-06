/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVTaskDelegate>, NSString;

@interface CoreDAVPutTask : CoreDAVPostOrPutTask  {
    NSString *_nextETag;
}

@property <CoreDAVTaskDelegate> * delegate;
@property(retain) NSString * nextETag;


- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)description;
- (void)dealloc;
- (id)nextETag;
- (void)setNextETag:(id)arg1;

@end
