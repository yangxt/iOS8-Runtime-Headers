/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSMethodSignature, NSString, CKObjCType;

@interface CKObjCProperty : NSObject  {
    Class _classHandle;
    CKObjCType *_type;
    NSString *_name;
    unsigned int _flags;
    SEL _getterSelector;
    NSString *_getterSelectorName;
    NSMethodSignature *_getterMethodSignature;
    SEL _setterSelector;
    NSString *_setterSelectorName;
    NSMethodSignature *_setterMethodSignature;
    NSString *_instanceVariableName;
}

@property(readonly) Class classHandle;
@property(readonly) CKObjCType * type;
@property(readonly) NSString * name;
@property(readonly) unsigned int flags;
@property(readonly) SEL getterSelector;
@property(readonly) NSString * getterSelectorName;
@property(readonly) NSMethodSignature * getterMethodSignature;
@property(readonly) SEL setterSelector;
@property(readonly) NSString * setterSelectorName;
@property(readonly) NSMethodSignature * setterMethodSignature;
@property(readonly) NSString * instanceVariableName;


- (unsigned int)flags;
- (void).cxx_destruct;
- (int)compare:(id)arg1;
- (id)type;
- (id)name;
- (id)instanceVariableName;
- (id)setterMethodSignature;
- (id)setterSelectorName;
- (SEL)setterSelector;
- (id)getterMethodSignature;
- (id)getterSelectorName;
- (SEL)getterSelector;
- (Class)classHandle;
- (void)setValue:(id)arg1 onObject:(id)arg2;
- (int)compareToProperty:(id)arg1;
- (id)initWithClass:(Class)arg1 property:(struct objc_property { }*)arg2;
- (id)getFromObject:(id)arg1;

@end
