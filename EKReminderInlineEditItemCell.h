/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKExpandingTextView, NSString;

@interface EKReminderInlineEditItemCell : UITableViewCell  {
    float _lastSeenContentWidth;
    EKExpandingTextView *_textView;
    float _verticalPadding;
}

@property(readonly) EKExpandingTextView * textView;
@property(copy) NSString * placeholder;
@property float verticalPadding;


- (void)setVerticalPadding:(float)arg1;
- (float)verticalPadding;
- (float)heightNeededForContentWidth:(float)arg1;
- (void).cxx_destruct;
- (id)textView;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (float)_textViewWidthForContentWidth:(float)arg1;

@end
