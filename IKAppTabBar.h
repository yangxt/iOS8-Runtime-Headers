/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class <IKAppTabBarController>, IKJSTabBar;

@interface IKAppTabBar : NSObject  {
    <IKAppTabBarController> *_controller;
    IKJSTabBar *_jsTabBar;
}

@property(readonly) <IKAppTabBarController> * controller;
@property IKJSTabBar * jsTabBar;


- (void)setJsTabBar:(id)arg1;
- (id)initWithTabBarController:(id)arg1;
- (void)onSelect;
- (void)onReload;
- (id)jsTabBar;
- (void).cxx_destruct;
- (id)controller;

@end