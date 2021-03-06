/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class SLComposeViewController, NSString, UIImage, NSExtension, _UIActivityBundleHelper;

@interface UISocialActivity : UIActivity  {
    NSString *_builtinActivityType;
    NSExtension *_applicationExtension;
    _UIActivityBundleHelper *_activityBundleHelper;
    SLComposeViewController *_socialComposeViewController;
    NSString *_localizedExtensionBundleName;
    UIImage *_renderedActivityImage;
    UIImage *_renderedActivitySettingsImage;
}

@property(copy) NSString * builtinActivityType;
@property(retain) NSExtension * applicationExtension;
@property(retain) _UIActivityBundleHelper * activityBundleHelper;
@property(retain) SLComposeViewController * socialComposeViewController;
@property(copy) NSString * localizedExtensionBundleName;
@property(retain) UIImage * renderedActivityImage;
@property(retain) UIImage * renderedActivitySettingsImage;

+ (id)availableCustomSocialActivities;
+ (int)activityCategory;

- (void)setSocialComposeViewController:(id)arg1;
- (id)socialComposeViewController;
- (int)_blockingActivityItemTypes;
- (int)_activityItemTypes;
- (id)builtinActivityType;
- (void)setBuiltinActivityType:(id)arg1;
- (void)setActivityBundleHelper:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setRenderedActivitySettingsImage:(id)arg1;
- (id)renderedActivitySettingsImage;
- (void)setRenderedActivityImage:(id)arg1;
- (id)renderedActivityImage;
- (void)setLocalizedExtensionBundleName:(id)arg1;
- (id)activityBundleHelper;
- (id)localizedExtensionBundleName;
- (id)applicationExtension;
- (void)setApplicationExtension:(id)arg1;
- (id)initWithApplicationExtension:(id)arg1;
- (id)initWithActivityType:(id)arg1;
- (id)activityViewController;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)_activitySettingsImage;
- (id)_activityImage;
- (id)activityTitle;
- (id)activityType;
- (struct CGSize { float x1; float x2; })_thumbnailSize;
- (void)_cleanup;
- (id)debugDescription;
- (void)dealloc;

@end
