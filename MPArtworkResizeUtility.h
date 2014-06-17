/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSOperationQueue, NSMapTable, NSObject<OS_dispatch_queue>;

@interface MPArtworkResizeUtility : NSObject  {
    NSObject<OS_dispatch_queue> *_artworkResizingAccessQueue;
    NSOperationQueue *_artworkResizingOperationQueue;
    NSMapTable *_artworkResizingOperations;
}

@property(retain) NSObject<OS_dispatch_queue> * artworkResizingAccessQueue;
@property(retain) NSOperationQueue * artworkResizingOperationQueue;
@property(retain) NSMapTable * artworkResizingOperations;


- (void).cxx_destruct;
- (id)init;
- (id)resizeImage:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 saveToDestinationURL:(id)arg3 completionHandler:(id)arg4;
- (void)cancelResizeImage:(id)arg1;
- (id)artworkResizingOperations;
- (id)artworkResizingAccessQueue;
- (void)setArtworkResizingOperations:(id)arg1;
- (id)artworkResizingOperationQueue;
- (void)setArtworkResizingOperationQueue:(id)arg1;
- (void)setArtworkResizingAccessQueue:(id)arg1;

@end