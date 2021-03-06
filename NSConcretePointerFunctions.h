/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSWeakCallback;

@interface NSConcretePointerFunctions : NSPointerFunctions  {
    struct NSSlice { 
        void **items; 
        BOOL wantsStrong; 
        BOOL wantsWeak; 
        BOOL wantsARC; 
        BOOL shouldCopyIn; 
        BOOL usesStrong; 
        BOOL usesWeak; 
        BOOL usesARC; 
        BOOL usesSentinel; 
        BOOL pointerPersonality; 
        BOOL integerPersonality; 
        BOOL simpleReadClear; 
        NSWeakCallback *callback; 
        int (*sizeFunction)(); 
        int (*hashFunction)(); 
        int (*isEqualFunction)(); 
        int (*describeFunction)(); 
        int (*acquireFunction)(); 
        int (*relinquishFunction)(); 
        int (*allocateFunction)(); 
        int (*freeFunction)(); 
        int (*readAt)(); 
        int (*clearAt)(); 
        int (*storeAt)(); 
    } slice;
}

+ (void)initializeBackingStore:(struct NSSlice { void **x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; id x13; int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); int (*x24)(); }*)arg1 sentinel:(BOOL)arg2 compactable:(BOOL)arg3;
+ (bool)initializeSlice:(struct NSSlice { void **x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; id x13; int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); int (*x24)(); }*)arg1 withOptions:(unsigned int)arg2;

- (id)initWithOptions:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setDescriptionFunction:(int (*)())arg1;
- (void)setSizeFunction:(int (*)())arg1;
- (void)setIsEqualFunction:(int (*)())arg1;
- (void)setHashFunction:(int (*)())arg1;
- (void)setRelinquishFunction:(int (*)())arg1;
- (void)setAcquireFunction:(int (*)())arg1;
- (BOOL)usesWeakReadAndWriteBarriers;
- (BOOL)usesStrongWriteBarrier;
- (int (*)())relinquishFunction;
- (int (*)())acquireFunction;
- (int (*)())descriptionFunction;
- (int (*)())isEqualFunction;
- (int (*)())hashFunction;
- (int (*)())sizeFunction;
- (void)setUsesWeakReadAndWriteBarriers:(BOOL)arg1;
- (void)setUsesStrongWriteBarrier:(BOOL)arg1;

@end
