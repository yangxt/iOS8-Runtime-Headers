/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class IMLocalObject, NSObject<OS_xpc_object>;

@interface IMMessageContext : NSObject  {
    NSObject<OS_xpc_object> *_xpcMessage;
    IMLocalObject *_localObject;
    id _context;
    BOOL _boost;
}

@property(retain) IMLocalObject * localObject;
@property(retain) id context;
@property BOOL shouldBoost;
@property NSObject<OS_xpc_object> * xpcMessage;


- (void)setShouldBoost:(BOOL)arg1;
- (id)localObject;
- (id)xpcMessage;
- (BOOL)shouldBoost;
- (void)setLocalObject:(id)arg1;
- (void)setXpcMessage:(id)arg1;
- (void)setContext:(id)arg1;
- (id)context;
- (void)dealloc;
- (id)init;

@end