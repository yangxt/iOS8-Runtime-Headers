/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class SKStarRatingControl;

@interface SKStarRatingAlertView : UIAlertView  {
    SKStarRatingControl *_ratingControl;
}

@property float rating;


- (void)showWithCompletionBlock:(id)arg1;
- (void)_ratingControlChanged:(id)arg1;
- (id)initSKStarRatingAlertView;
- (void)dealloc;
- (float)rating;
- (void)setRating:(float)arg1;

@end