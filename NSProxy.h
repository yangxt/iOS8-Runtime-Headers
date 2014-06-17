/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface NSProxy <NSObject> {
    Class isa;
}

@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (BOOL)isFault;
+ (void)doesNotRecognizeSelector:(SEL)arg1;
+ (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)retainWeakReference;
+ (BOOL)allowsWeakReference;
+ (void)forwardInvocation:(id)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (id)forwardingTargetForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (int (*)())methodForSelector:(SEL)arg1;
+ (BOOL)_isDeallocating;
+ (BOOL)_tryRetain;
+ (void)initialize;
+ (int (*)())instanceMethodForSelector:(SEL)arg1;
+ (id)copyWithZone:(struct _NSZone { }*)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)methodSignatureForSelector:(SEL)arg1;
+ (BOOL)isSubclassOfClass:(Class)arg1;
+ (id)debugDescription;
+ (unsigned int)retainCount;
+ (BOOL)conformsToProtocol:(id)arg1;
+ (BOOL)isMemberOfClass:(Class)arg1;
+ (BOOL)isProxy;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2;
+ (id)performSelector:(SEL)arg1;
+ (struct _NSZone { }*)zone;
+ (id)self;
+ (Class)superclass;
+ (unsigned int)hash;
+ (BOOL)isEqual:(id)arg1;
+ (BOOL)respondsToSelector:(SEL)arg1;
+ (id)copy;
+ (BOOL)isKindOfClass:(Class)arg1;
+ (id)mutableCopy;
+ (Class)class;
+ (id)description;
+ (void)dealloc;
+ (void)finalize;
+ (id)autorelease;
+ (id)retain;
+ (oneway void)release;
+ (id)alloc;
+ (id)init;
+ (BOOL)isAncestorOfObject:(id)arg1;
+ (id)_copyDescription;

- (BOOL)isFault;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)debugDescription;
- (unsigned int)retainCount;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (struct _NSZone { }*)zone;
- (id)self;
- (Class)superclass;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (Class)class;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)autorelease;
- (id)retain;
- (oneway void)release;
- (BOOL)_allowsDirectEncoding;
- (id)_copyDescription;

@end