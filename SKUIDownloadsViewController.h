/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SSDownloadManager, SKUIIPhoneDownloadsViewController, SKUIImageDataConsumer, SKUIIPadDownloadsViewController, NSCache, NSMutableDictionary, NSArray;

@interface SKUIDownloadsViewController : SKUIViewController <SSDownloadManagerObserver, SKUIDownloadsChildViewControllerDelegate> {
    SKUIIPhoneDownloadsViewController *_iphoneViewController;
    SKUIIPadDownloadsViewController *_ipadViewController;
    SSDownloadManager *_downloadManager;
    NSArray *_downloads;
    NSMutableDictionary *_imageOperations;
    NSCache *_images;
    SKUIImageDataConsumer *_consumer;
}

+ (int)_sizeClassForSize:(struct CGSize { float x1; float x2; })arg1;

- (void)_setArtwork:(id)arg1 forURLString:(id)arg2;
- (void)_reloadViewControllerWithSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_reloadBadge;
- (void)_reloadManagerFromServer;
- (void)childViewController:(id)arg1 removeDownloads:(id)arg2;
- (void)childViewController:(id)arg1 performActionForDownload:(id)arg2;
- (id)childViewController:(id)arg1 artworkForDownload:(id)arg2;
- (void)_reloadView;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;

@end
