/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSDocInfo;

@interface NSLeafProxy <NSCopying> {
    Class isa;
    NSString *dir;
    NSString *file;
    NSDocInfo *docInfo;
    int refCount;
    id realObject;
}

+ (void)forwardInvocation:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)alloc;
+ (/* Warning: Unrecognized filer type: '' using 'void*' */ void*)initialize;
     /* Encoded args for previous method:  */


- (void)forwardInvocation:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (unsigned int)retainCount;
- (BOOL)isProxy;
- (id)copy;
- (void)dealloc;
- (id)autorelease;
- (id)retain;
- (void)release;
- (void)reallyDealloc;
- (id)initDir:(id)arg1 file:(id)arg2 docInfo:(id)arg3;

@end
