/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, ABUIPerson;

@interface ABActionsController : NSObject  {
    int _property;
    int _multiValueIdentifier;
    id _value;
    NSString *_stringValue;
    void *_context;
    int _lastPropertyForActions;
    struct __CFArray { } *_actionsForProperty;
    ABUIPerson *_person;
}

@property(retain) ABUIPerson * person;

+ (id)newActionsControllerForProperty:(int)arg1;
+ (int)defaultActionForProperty:(int)arg1;

- (id)initWithProperty:(int)arg1;
- (int)defaultAction;
- (void)setPerson:(id)arg1;
- (id)person;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)setContext:(void*)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (void*)context;
- (void)dealloc;
- (id)init;
- (void)setMultiValueIdentifier:(int)arg1;
- (void)performActionAtIndex:(int)arg1 forProperty:(int)arg2;
- (void)performDefaultAction;
- (void)resetPrimaryPropertyActions;
- (id)titleAtIndex:(int)arg1 forProperty:(int)arg2;
- (int)actionsCountForProperty:(int)arg1;
- (id)urlForAction:(int)arg1 forProperty:(int)arg2;
- (void)performAction:(int)arg1;
- (void)_performAction:(int)arg1 forProperty:(int)arg2;
- (id)titleForAction:(int)arg1;
- (int)_actionAtIndex:(int)arg1 forProperty:(int)arg2;
- (struct __CFArray { }*)_actionsForProperty:(int)arg1;

@end
