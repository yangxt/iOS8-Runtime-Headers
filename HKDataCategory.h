/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class UIImage, UIColor, NSString, NSArray, NSMutableArray, NSMutableDictionary;

@interface HKDataCategory : NSObject  {
    NSMutableArray *_dataUnitGroups;
    NSMutableDictionary *_cachedGradients;
    NSMutableDictionary *_cachedRoundedCornerGradients;
    UIColor *_topColor;
    UIColor *_bottomColor;
    BOOL _isMeCategory;
    unsigned int _categoryID;
    NSString *_displayName;
    UIImage *_listIcon;
    UIImage *_dashboardIcon;
    UIImage *_shareIcon;
}

@property(readonly) unsigned int categoryID;
@property(readonly) NSString * displayName;
@property(readonly) UIImage * listIcon;
@property(readonly) UIImage * dashboardIcon;
@property(readonly) UIImage * shareIcon;
@property(readonly) NSArray * dataUnitGroups;
@property(readonly) BOOL isMeCategory;


- (BOOL)isMeCategory;
- (id)dashboardIcon;
- (id)listIcon;
- (id)roundedCornerGradientWithHeight:(float)arg1;
- (id)gradientWithHeight:(float)arg1;
- (void)addDataUnitGroup:(id)arg1;
- (id)dataUnitGroups;
- (id)_generateRoundedCornerGradientWithHeight:(float)arg1;
- (id)_generateGradientOfHeight:(float)arg1;
- (unsigned int)categoryID;
- (id)shareIcon;
- (void).cxx_destruct;
- (id)displayName;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end
