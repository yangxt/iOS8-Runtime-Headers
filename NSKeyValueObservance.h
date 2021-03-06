/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSObject, NSKeyValueProperty, NSPointerArray;

@interface NSKeyValueObservance : NSWeakCallback  {
    int _retainCountMinusOne;
    NSObject *_observer;
    NSKeyValueProperty *_property;
    unsigned int _options;
    void *_context;
    NSObject *_originalObservable;
    unsigned int _cachedUnrotatedHashComponent;
    BOOL _cachedIsShareable;
    NSPointerArray *_observationInfos;
}


- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)description;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)_initWithObserver:(id)arg1 property:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4 originalObservable:(id)arg5;

@end
