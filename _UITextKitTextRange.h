/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UITextKitTextPosition, UITextPosition;

@interface _UITextKitTextRange : UITextRange <NSCopying> {
    _UITextKitTextPosition *_start;
    _UITextKitTextPosition *_end;
}

@property(retain) UITextPosition * start;
@property(retain) UITextPosition * end;
@property(readonly) int affinity;

+ (id)defaultRange;
+ (id)rangeWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 affinity:(int)arg2;
+ (id)rangeWithStart:(id)arg1 end:(id)arg2;
+ (id)rangeWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

- (void)setEnd:(id)arg1;
- (void)setStart:(id)arg1;
- (int)affinity;
- (id)end;
- (struct _NSRange { unsigned int x1; unsigned int x2; })asRange;
- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)start;
- (id)description;
- (void)dealloc;
- (id)init;

@end