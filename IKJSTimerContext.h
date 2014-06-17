/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class IKJSManagedArray, NSTimer, JSManagedValue;

@interface IKJSTimerContext : NSObject  {
    BOOL _isRepeating;
    NSTimer *_timer;
    id _ownerObject;
    JSManagedValue *_managedCallback;
    IKJSManagedArray *_managedArgs;
}

@property(retain) NSTimer * timer;
@property(readonly) id ownerObject;
@property(retain,readonly) JSManagedValue * managedCallback;
@property(retain,readonly) IKJSManagedArray * managedArgs;
@property(readonly) BOOL isRepeating;


- (id)managedArgs;
- (id)managedCallback;
- (id)initWithCallback:(id)arg1 callbackArgs:(id)arg2 repeating:(BOOL)arg3 ownerObject:(id)arg4 timer:(id)arg5;
- (void)removeManagedReferences;
- (id)ownerObject;
- (BOOL)isRepeating;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end