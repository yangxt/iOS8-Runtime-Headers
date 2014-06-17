/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <PUPhotoStreamComposeServiceDelegate>, NSString, NSArray;

@interface PUPhotoStreamComposeServiceViewController : SLComposeServiceViewController <PUPhotoStreamsAlbumsTableViewControllerDelegate, PUPhotoStreamCreateTitleDelegate, PUCloudSharedCreateAlbumViewControllerDelegate, SLSheetViewHostProtocol> {
    struct { 
        unsigned int hasDidPost : 1; 
        unsigned int hasDidCancel : 1; 
    } _delegateFlags;
    struct NSObject { Class x1; } *_selectedAlbum;
    NSArray *_actions;
    struct NSObject { Class x1; } *_albumList;
    BOOL _inCreateNewAlbum;
    NSArray *_recipients;
    BOOL _shouldShowPost;
    NSString *_itemCountString;
    BOOL _shouldAllowAlbumPicking;
    BOOL _addToExistingWorkflow;
    <PUPhotoStreamComposeServiceDelegate> *_delegate;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;

    NSString *_albumTitle;
}

@property <PUPhotoStreamComposeServiceDelegate> * delegate;
@property BOOL shouldAllowAlbumPicking;
@property(copy) id completion;
@property BOOL addToExistingWorkflow;
@property(retain) NSString * albumTitle;


- (void).cxx_destruct;
- (void)send;
- (void)viewDidLoad;
- (void)setCompletion:(id)arg1;
- (id)completion;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)title;
- (id)delegate;
- (void)cancel;
- (id)albumTitle;
- (void)setAddToExistingWorkflow:(BOOL)arg1;
- (BOOL)addToExistingWorkflow;
- (void)setShouldAllowAlbumPicking:(BOOL)arg1;
- (BOOL)shouldAllowAlbumPicking;
- (void)userDidCancelWithoutAnimation;
- (void)shouldShowNetworkActivityIndicator:(id)arg1;
- (void)sheetDidSendWithSucess:(id)arg1 error:(id)arg2;
- (void)sheetFailedWithError:(id)arg1;
- (void)failWithError:(id)arg1;
- (id)serviceIconImage;
- (id)sheetActions;
- (void)setAssetsToShare:(id)arg1;
- (void)userDidPost;
- (void)userDidCancel;
- (id)albumListAction;
- (void)createPreviewIfNeeded;
- (void)_pushTitleController;
- (void)titleController:(id)arg1 didSetTitle:(id)arg2;
- (void)titleControllerDidCancel:(id)arg1;
- (void)albumStreamingCreateViewController:(id)arg1 didSucceed:(BOOL)arg2;
- (void)setAlbumTitle:(id)arg1;
- (void)controller:(id)arg1 didSelectAlbum:(struct NSObject { Class x1; }*)arg2;
- (void)controllerWillCreateNewAlbum:(id)arg1;
- (void)setDelegate:(id)arg1;

@end