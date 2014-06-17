/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class _UISettings, NSString;

@interface PTSButton : UIButton <PTSHUDControl, _UISettingsKeyPathObserver> {
    _UISettings *_settings;
    int _alignment;
    NSString *_valueKeyPath;
}

@property _UISettings * settings;
@property(copy) NSString * valueKeyPath;
@property int alignment;
@property BOOL enabled;

+ (id)showControlsModeButton;
+ (id)addSettingsButton;
+ (id)editSavedModeTableButton;
+ (id)showSavedModeButton;
+ (id)saveSettingsButton;
+ (id)restoreDefaultValuesButton;
+ (id)hideHUDButton;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })defaultFrame;
+ (id)button;

- (id)initWithDefaultFrame;
- (id)valueKeyPath;
- (void)setValueKeyPath:(id)arg1;
- (void).cxx_destruct;
- (void)setSettings:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (int)alignment;
- (id)settings;
- (void)setAlignment:(int)arg1;
- (void)dealloc;

@end