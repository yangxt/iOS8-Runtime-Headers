/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSOperationQueue, SKUIReviewConfiguration, UIWindow, SKUIClientContext;

@interface SKUIStarRatingQueue : NSObject  {
    SKUIClientContext *_clientContext;
    NSOperationQueue *_queue;
    SKUIReviewConfiguration *_reviewConfiguration;
    UIWindow *_window;
}

@property UIWindow * window;


- (void)_setRating:(int)arg1 forItem:(id)arg2 account:(id)arg3 completionBlock:(id)arg4;
- (void)setRating:(int)arg1 forItem:(id)arg2 completionBlock:(id)arg3;
- (id)initWithClientContext:(id)arg1 reviewConfiguration:(id)arg2;
- (void).cxx_destruct;
- (void)setWindow:(id)arg1;
- (id)window;
- (id)init;

@end
