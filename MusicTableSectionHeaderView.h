/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class UILabel, MPUEmphasizedText, NSDictionary;

@interface MusicTableSectionHeaderView : UITableViewHeaderFooterView  {
    BOOL _needsTitleLabelUpdate;
    NSDictionary *_titleEmphasizedTextAttributes;
    NSDictionary *_titleRegularTextAttributes;
    UILabel *_titleLabel;
    float _backgroundTransitionWeighting;
    MPUEmphasizedText *_titleEmphasizedText;
}

@property float backgroundTransitionWeighting;
@property(copy) MPUEmphasizedText * titleEmphasizedText;


- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (float)backgroundTransitionWeighting;
- (id)titleEmphasizedTextAttributes;
- (id)titleRegularTextAttributes;
- (id)titleEmphasizedText;
- (void)setBackgroundTransitionWeighting:(float)arg1;
- (void)setTitleEmphasizedText:(id)arg1;
- (void)contentSizeCategoryDidChange;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setTableViewStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end