/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIAlertView, NSMutableArray, UILabel;

@interface _UIAlertExternalViewController : UIViewController  {
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    NSMutableArray *_buttons;
    UIAlertView *_representedAlert;
}

@property UIAlertView * representedAlert;


- (id)_messageAttributedStringSmallText;
- (id)_buttonWithTitle:(id)arg1 index:(int)arg2;
- (void)_buttonTapped:(id)arg1;
- (id)_messageAttributesSmallText;
- (id)_messageAttributes;
- (id)_titleAttributes;
- (id)representedAlert;
- (id)_textAttributes;
- (void)setRepresentedAlert:(id)arg1;
- (void)_dismissIfCapable;
- (id)_messageAttributedString;
- (id)_titleAttributedString;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)init;

@end