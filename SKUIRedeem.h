/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIArtworkList, NSArray, NSString, UIImage, NSDictionary, NSURL;

@interface SKUIRedeem : NSObject  {
    BOOL _hideItemView;
    NSArray *_items;
    NSString *_inAppPurchase;
    NSString *_credit;
    NSString *_balance;
    NSDictionary *_thankYouDictionary;
    NSURL *_redirectURL;
    UIImage *_headerImage;
    SKUIArtworkList *_headerArtworkList;
    NSString *_title;
    NSString *_message;
    NSArray *_links;
    double _ITunesPassLearnMoreAlertInterval;
}

@property(retain) NSArray * items;
@property(retain) NSString * inAppPurchase;
@property(copy) NSString * credit;
@property(copy) NSString * balance;
@property(retain) NSDictionary * thankYouDictionary;
@property(retain) NSURL * redirectURL;
@property(retain) UIImage * headerImage;
@property(retain) SKUIArtworkList * headerArtworkList;
@property(copy) NSString * title;
@property(copy) NSString * message;
@property(retain) NSArray * links;
@property BOOL hideItemView;
@property double ITunesPassLearnMoreAlertInterval;


- (double)ITunesPassLearnMoreAlertInterval;
- (void)setHideItemView:(BOOL)arg1;
- (BOOL)hideItemView;
- (void)setHeaderArtworkList:(id)arg1;
- (void)setRedirectURL:(id)arg1;
- (void)setThankYouDictionary:(id)arg1;
- (void)setBalance:(id)arg1;
- (void)setCredit:(id)arg1;
- (void)setInAppPurchase:(id)arg1;
- (void)setITunesPassLearnMoreAlertInterval:(double)arg1;
- (id)thankYouDictionary;
- (id)balance;
- (id)credit;
- (id)inAppPurchase;
- (id)redirectURL;
- (id)headerArtworkList;
- (void)setLinks:(id)arg1;
- (void)setHeaderImage:(id)arg1;
- (id)headerImage;
- (void).cxx_destruct;
- (id)links;
- (void)setMessage:(id)arg1;
- (id)message;
- (void)setItems:(id)arg1;
- (id)items;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)init;

@end
