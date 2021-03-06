/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class UIImageView, GKPlayerPickerInfo, UILabel;

@interface GKPlayerPickerCell : GKBasePlayerCell  {
    unsigned int _selectionStatus;
    GKPlayerPickerInfo *_pickerInfo;
    UILabel *_statusLabel;
    UILabel *_infoLabel;
    UIImageView *_selectionView;
}

@property unsigned int selectionStatus;
@property(retain) GKPlayerPickerInfo * pickerInfo;
@property(retain) UILabel * statusLabel;
@property(retain) UILabel * infoLabel;
@property(retain) UIImageView * selectionView;

+ (Class)cellClassForPickerInfo:(id)arg1;
+ (void)registerCellClassesWithCollectionView:(id)arg1;

- (id)infoLabel;
- (void)setSelectionView:(id)arg1;
- (id)pickerInfo;
- (void)setPickerInfo:(id)arg1;
- (void)setSelectionStatus:(unsigned int)arg1;
- (unsigned int)selectionStatus;
- (void)setInfoLabel:(id)arg1;
- (void)setStatusLabel:(id)arg1;
- (id)statusLabel;
- (void)didUpdateModel;
- (id)selectionView;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
