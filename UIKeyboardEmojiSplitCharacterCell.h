/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, UIKeyboardEmojiInputController, UIView<UIKeyboardEmojiPressIndicationDelegate>;

@interface UIKeyboardEmojiSplitCharacterCell : UITableViewCell  {
    NSArray *_characters;
    NSString *_emojiString;
    UIKeyboardEmojiInputController *_inputController;
    UIView<UIKeyboardEmojiPressIndicationDelegate> *_delegate;
}

@property(retain) NSArray * characters;
@property UIKeyboardEmojiInputController * inputController;
@property(retain) UIView<UIKeyboardEmojiPressIndicationDelegate> * delegate;

+ (id)emojiFontAttributes;

- (id)characters;
- (void)setCharacters:(id)arg1;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)delegate;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
