/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class <GKStateMachineDelegate>, NSString, NSDictionary;

@interface GKStateMachine : NSObject  {
    int _lock;
    NSString *_currentState;
    NSDictionary *_validTransitions;
    <GKStateMachineDelegate> *_delegate;
    BOOL _shouldLogStateTransitions;
}

@property(retain) NSString * currentState;
@property(retain) NSDictionary * validTransitions;
@property <GKStateMachineDelegate> * delegate;
@property BOOL shouldLogStateTransitions;


- (void)setValidTransitions:(id)arg1;
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;
- (void)setShouldLogStateTransitions:(BOOL)arg1;
- (BOOL)applyState:(id)arg1;
- (id)validTransitions;
- (void)_performTransitionFromState:(id)arg1 toState:(id)arg2;
- (id)_validateTransitionFromState:(id)arg1 toState:(id)arg2;
- (BOOL)shouldLogStateTransitions;
- (BOOL)_setCurrentState:(id)arg1;
- (void)setCurrentState:(id)arg1;
- (id)currentState;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end