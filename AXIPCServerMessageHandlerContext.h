/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface AXIPCServerMessageHandlerContext : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    id _target;
    SEL _selector;
}

@property(readonly) id handler;
@property(readonly) id target;
@property(readonly) SEL selector;


- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)initWithHandler:(id)arg1;
- (id)handler;
- (SEL)selector;
- (id)target;
- (void)dealloc;

@end