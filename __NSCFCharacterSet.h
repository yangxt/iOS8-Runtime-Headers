/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSCFCharacterSet : NSMutableCharacterSet  {
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)invertedSet;
- (void)addCharactersInString:(id)arg1;
- (void)removeCharactersInString:(id)arg1;
- (void)formUnionWithCharacterSet:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)characterIsMember:(unsigned short)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (id)retain;
- (oneway void)release;
- (void)makeCharacterSetFast;
- (void)makeCharacterSetCompact;
- (BOOL)isSupersetOfSet:(id)arg1;
- (id)bitmapRepresentation;
- (void)invert;
- (void)formIntersectionWithCharacterSet:(id)arg1;
- (void)removeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)addCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)hasMemberInPlane:(unsigned char)arg1;
- (BOOL)longCharacterIsMember:(unsigned long)arg1;

@end
