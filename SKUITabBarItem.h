/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, UITabBarItem, UIColor, NSURL;

@interface SKUITabBarItem : NSObject <NSCopying> {
    BOOL _alwaysCreatesRootViewController;
    int _barTintStyle;
    NSString *_metricsIdentifier;
    NSURL *_rootURL;
    Class _rootViewControllerClass;
    NSString *_tabIdentifier;
    UITabBarItem *_underlyingTabBarItem;
    UIColor *_userInterfaceTintColor;
}

@property(readonly) NSString * tabIdentifier;
@property BOOL alwaysCreatesRootViewController;
@property int barTintStyle;
@property(copy) NSString * metricsIdentifier;
@property(copy) NSURL * rootURL;
@property(retain) Class rootViewControllerClass;
@property(retain) UITabBarItem * underlyingTabBarItem;
@property(retain) UIColor * userInterfaceTintColor;


- (void)setUserInterfaceTintColor:(id)arg1;
- (void)setUnderlyingTabBarItem:(id)arg1;
- (void)setRootViewControllerClass:(Class)arg1;
- (void)setRootURL:(id)arg1;
- (void)setMetricsIdentifier:(id)arg1;
- (void)setBarTintStyle:(int)arg1;
- (void)setAlwaysCreatesRootViewController:(BOOL)arg1;
- (id)initWithTabIdentifier:(id)arg1;
- (id)userInterfaceTintColor;
- (id)metricsIdentifier;
- (int)barTintStyle;
- (Class)rootViewControllerClass;
- (BOOL)alwaysCreatesRootViewController;
- (id)tabIdentifier;
- (id)underlyingTabBarItem;
- (id)rootURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
