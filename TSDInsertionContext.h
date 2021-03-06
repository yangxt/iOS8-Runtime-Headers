/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDInsertionContext : NSObject  {
}

@property(readonly) BOOL hasPreferredCenter;
@property(getter=isPreferredCenterRequired,readonly) BOOL preferredCenterRequired;
@property(readonly) struct CGPoint { float x1; float x2; } preferredCenter;
@property(readonly) BOOL shouldEndEditing;
@property(readonly) BOOL insertFloating;
@property(readonly) BOOL insertFromDrag;
@property(readonly) BOOL fromDragToInsertController;
@property(getter=isInteractive,readonly) BOOL interactive;

+ (id)dragInsertionContextWithPreferredCenter:(struct CGPoint { float x1; float x2; })arg1 required:(BOOL)arg2 fromDragToInsertController:(BOOL)arg3 insertFloating:(BOOL)arg4;
+ (id)nonInteractiveFloatingInsertionContext;
+ (id)nonInteractiveInsertionContext;
+ (id)dragInsertionContextWithPreferredCenter:(struct CGPoint { float x1; float x2; })arg1 required:(BOOL)arg2 shouldEndEditing:(BOOL)arg3 fromDragToInsertController:(BOOL)arg4 insertFloating:(BOOL)arg5;

- (BOOL)isInteractive;
- (id)init;
- (BOOL)fromDragToInsertController;
- (BOOL)insertFromDrag;
- (BOOL)insertFloating;
- (struct CGPoint { float x1; float x2; })preferredCenter;
- (BOOL)isPreferredCenterRequired;
- (BOOL)hasPreferredCenter;
- (BOOL)shouldEndEditing;

@end
