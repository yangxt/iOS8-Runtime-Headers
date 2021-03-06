/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSOperationQueue, NSHashTable, NSObject<OS_dispatch_queue>, NSMutableArray, NSURL, NSMutableDictionary, NSURLSession;

@interface TSUDownloadManager : NSObject <NSURLSessionDownloadDelegate> {
    NSOperationQueue *_downloadSessionsQueue;
    NSHashTable *_downloadSessions;
    NSObject<OS_dispatch_queue> *_activeTasksQueue;
    NSMutableDictionary *_activeTasks;
    NSMutableDictionary *_inProgressDownloadItems;
    NSMutableArray *_inProcessDownloadQueue;
    NSMutableArray *_completionHandlers;
    NSURLSession *_defaultURLSession;
}

@property(readonly) NSURL * downloadInboxDirectory;

+ (id)sharedManager;
+ (void)wakeUp;
+ (BOOL)isUnitTest;
+ (id)newFilteredDownloadItems:(id)arg1;
+ (void)registerDownloadItemClass:(Class)arg1;

- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void).cxx_destruct;
- (id)init;
- (id)initPrivate;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)notifyWhenAllTasksAreCompletedWithCompletionHandler:(id)arg1;
- (id)outstandingDownloadSessionForItems:(id)arg1 description:(id)arg2 delegate:(id)arg3;
- (id)downloadItems:(id)arg1 description:(id)arg2 delegate:(id)arg3;
- (id)downloadInboxDirectory;
- (void)handleEventsForBackgroundURLSession:(id)arg1 completionHandler:(id)arg2;
- (id)downloadSessionForItems:(id)arg1 description:(id)arg2 willRequestDownload:(BOOL)arg3 delegate:(id)arg4 taskHandler:(id)arg5;
- (BOOL)beginDownloadTaskForDownloadItem:(id)arg1 isInProcessDownloadTask:(BOOL)arg2 taskDescription:(id)arg3 urlOrNil:(id)arg4;
- (void)cancelTasksWithDescriptions:(id)arg1 forDownloadSession:(id)arg2;

@end
