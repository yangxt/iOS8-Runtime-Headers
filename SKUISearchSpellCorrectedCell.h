/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIImageView, UILabel, NSString, UIButton, UIControl, SKUIClientContext;

@interface SKUISearchSpellCorrectedCell : UICollectionViewCell  {
    BOOL _autoCorrected;
    SKUIClientContext *_clientContext;
    UIImageView *_imageView;
    UILabel *_label;
    int _preAutoCorrectCount;
    NSString *_searchTerm;
    NSString *_spellCorrectedTerm;
    UIButton *_spellCorrectionButton;
}

@property(retain) SKUIClientContext * clientContext;
@property(copy) NSString * searchTerm;
@property(copy) NSString * spellCorrectedTerm;
@property BOOL autoCorrected;
@property int preAutoCorrectCount;
@property(readonly) UIControl * spellCorrectionButton;


- (id)spellCorrectionButton;
- (void)_reloadLabel;
- (void)setPreAutoCorrectCount:(int)arg1;
- (int)preAutoCorrectCount;
- (void)setAutoCorrected:(BOOL)arg1;
- (BOOL)autoCorrected;
- (void)setSpellCorrectedTerm:(id)arg1;
- (id)spellCorrectedTerm;
- (id)clientContext;
- (void)setClientContext:(id)arg1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSearchTerm:(id)arg1;
- (id)searchTerm;

@end
