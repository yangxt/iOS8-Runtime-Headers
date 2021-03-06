/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIGiftConfiguration, UIImageView, UILabel, SKUIGiftItemView, SKUIGift, UIImage, SKUIGiftTheme;

@interface SKUIGiftThemeCollectionViewCell : UICollectionViewCell  {
    SKUIGiftConfiguration *_giftConfiguration;
    SKUIGift *_gift;
    UIImageView *_headerImageView;
    SKUIGiftItemView *_itemView;
    UILabel *_messageLabel;
    UILabel *_priceLabel;
    UILabel *_senderNameLabel;
    UILabel *_senderNameLabelLabel;
    SKUIGiftTheme *_theme;
}

@property(retain) SKUIGiftConfiguration * giftConfiguration;
@property(retain) SKUIGift * gift;
@property(retain) SKUIGiftTheme * theme;
@property(retain) UIImage * itemImage;


- (void)_reloadItemView;
- (void)_setPrice:(id)arg1;
- (void)_setSenderName:(id)arg1;
- (void)_setMessage:(id)arg1;
- (void)_setHeaderImage:(id)arg1;
- (void)setGiftConfiguration:(id)arg1;
- (void)reloadThemeHeaderImage;
- (void)setGift:(id)arg1;
- (id)_itemView;
- (id)giftConfiguration;
- (id)gift;
- (void)setTheme:(id)arg1;
- (id)theme;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setItemImage:(id)arg1;
- (id)itemImage;
- (void)setBackgroundColor:(id)arg1;

@end
