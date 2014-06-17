/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSPObject, <TSPLazyReferenceDelegate>, TSPComponent;

@interface TSPLazyReference : NSObject <NSCopying> {
    TSPObject *_strongObject;
    TSPObject *_weakObject;
    BOOL _isWeak;
    BOOL _allowUnknownObject;
    <TSPLazyReferenceDelegate> *_delegate;
    TSPComponent *_component;
    long long _identifier;
}

@property(readonly) id object;
@property(readonly) id objectIfLoaded;
@property <TSPLazyReferenceDelegate> * delegate;
@property(readonly) long long identifier;
@property TSPComponent * component;
@property(readonly) TSPObject * weakObject;
@property(retain) TSPObject * strongObject;
@property(readonly) BOOL isWeak;

+ (id)weakReferenceForObject:(id)arg1;
+ (id)referenceForObject:(id)arg1;

- (id)component;
- (void)setComponent:(id)arg1;
- (id)initWithObject:(id)arg1;
- (void).cxx_destruct;
- (id)object;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)identifier;
- (id)delegate;
- (id)debugDescription;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)init;
- (BOOL)isWeak;
- (void)resetIdentifier;
- (BOOL)discardStrongObjectIfPossible;
- (id)strongObject;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2;
- (BOOL)referencesObject:(id)arg1;
- (BOOL)isEqualToLazyReference:(id)arg1;
- (id)initWithObject:(id)arg1 isWeak:(BOOL)arg2;
- (id)initWeakReferenceWithObject:(id)arg1;
- (void)setStrongObject:(id)arg1;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 isWeak:(BOOL)arg3 allowUnknownObject:(BOOL)arg4;
- (id)objectIfLoaded;
- (id)weakObject;

@end