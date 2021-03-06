/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface AXThreadTimerTask : NSObject  {
    BOOL cancel;
    BOOL finished;
    BOOL active;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _block;

}

@property(copy) id block;
@property(getter=isCancelled) BOOL cancel;
@property(getter=isFinished) BOOL finished;
@property(getter=isActive) BOOL active;


- (void)setBlock:(id)arg1;
- (id)block;
- (void)setFinished:(BOOL)arg1;
- (void)setCancel:(BOOL)arg1;
- (void)runAfterDelay:(float)arg1;
- (BOOL)isFinished;
- (void)setActive:(BOOL)arg1;
- (void)run;
- (BOOL)isCancelled;
- (BOOL)isActive;
- (void)dealloc;

@end
