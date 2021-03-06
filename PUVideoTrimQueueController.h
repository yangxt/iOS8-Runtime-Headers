/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class PLManagedAlbum, NSMutableArray, <PUVideoTrimQueueControllerDelegate>, NSDictionary, NSString, UIViewController, NSMutableDictionary, NSArray;

@interface PUVideoTrimQueueController : NSObject  {
    UIViewController *_displayingViewController;
    double _startTime;
    double _endTime;
    NSMutableArray *_sourcesToTransform;
    NSMutableArray *_trimQueue;
    NSMutableDictionary *_trimmedVideoInfo;
    struct { 
        unsigned int hasWillTrim : 1; 
        unsigned int hasDidTrim : 1; 
        unsigned int hasDidFinish : 1; 
        unsigned int hasDidCancel : 1; 
    } _delegateFlags;
    <PUVideoTrimQueueControllerDelegate> *_delegate;
    NSArray *_videosSources;
    PLManagedAlbum *_album;
    NSString *_albumName;
    NSArray *_recipients;
    NSString *_commentText;
}

@property <PUVideoTrimQueueControllerDelegate> * delegate;
@property(readonly) NSArray * videosSources;
@property(readonly) NSDictionary * trimmedVideoInfo;
@property(readonly) PLManagedAlbum * album;
@property(retain) NSString * albumName;
@property(retain) NSArray * recipients;
@property(retain) NSString * commentText;


- (id)albumName;
- (void)setAlbumName:(id)arg1;
- (void)setCommentText:(id)arg1;
- (id)commentText;
- (id)album;
- (void).cxx_destruct;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (id)delegate;
- (void)setRecipients:(id)arg1;
- (id)recipients;
- (id)trimmedVideoInfo;
- (id)videosSources;
- (id)initWithViewController:(id)arg1 videoSources:(id)arg2 album:(id)arg3;
- (void)_trimVideoSource:(id)arg1;
- (id)_videoTooLongAlert;
- (void)_showTrimViewControllerForSource:(id)arg1;
- (id)_videoTooLongAlertController;
- (void)_sendDidFinish;
- (void)_dequeueTrimmingControl;
- (BOOL)_shouldShowVideoTooLongAlertForVideoSource:(id)arg1;
- (void)start;
- (void)setDelegate:(id)arg1;

@end
