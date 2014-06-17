/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCFAttributedString : NSMutableAttributedString  {
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withAttributedString:(id)arg2;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)appendAttributedString:(id)arg1;
- (id)attributesAtIndex:(unsigned int)arg1 longestEffectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)attributesAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withString:(id)arg2;
- (BOOL)isEqualToAttributedString:(id)arg1;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 longestEffectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (void)addAttributes:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)attribute:(id)arg1 atIndex:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (void)setAttributedString:(id)arg1;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (Class)classForCoder;
- (id)string;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)retainCount;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)length;
- (void)finalize;
- (id)retain;
- (oneway void)release;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned int)arg2;

@end