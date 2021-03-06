/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUITrendingSearchPageView, <SKUITrendingSearchPageViewDelegate>, UIScrollView, SKUITrendingSearchPage;

@interface SKUIIPhoneTrendingSearchPageView : UIView  {
    SKUITrendingSearchPageView *_view;
    UIScrollView *_scrollView;
}

@property <SKUITrendingSearchPageViewDelegate> * delegate;
@property(retain) SKUITrendingSearchPage * page;
@property(readonly) SKUITrendingSearchPageView * trendingSearchPageView;


- (id)trendingSearchPageView;
- (void).cxx_destruct;
- (void)setPage:(id)arg1;
- (id)page;
- (id)delegate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;

@end
