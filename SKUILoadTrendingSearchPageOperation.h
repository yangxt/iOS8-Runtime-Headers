/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURL, SKUIClientContext;

@interface SKUILoadTrendingSearchPageOperation : NSOperation  {
    SKUIClientContext *_clientContext;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _outputBlock;

    NSURL *_url;
}

@property(retain) SKUIClientContext * clientContext;
@property(copy) id outputBlock;
@property(copy) NSURL * URL;


- (id)outputBlock;
- (id)clientContext;
- (void)setClientContext:(id)arg1;
- (void)setOutputBlock:(id)arg1;
- (void).cxx_destruct;
- (void)main;
- (void)setURL:(id)arg1;
- (id)URL;

@end