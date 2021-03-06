/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class PUEditPlugin;

@interface PUEditPluginActivity : UIActivity  {
    PUEditPlugin *_plugin;
}

@property(readonly) PUEditPlugin * plugin;

+ (int)activityCategory;

- (BOOL)_isHiddenByDefault;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)_activitySettingsImage;
- (id)_activityImage;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityType;
- (id)plugin;
- (id)initWithPlugin:(id)arg1;

@end
