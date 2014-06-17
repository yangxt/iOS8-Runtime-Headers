/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class NSMutableArray, NSArray;

@interface _SBFForkJoinObservable : SBFObservable  {
    NSArray *_observables;
    NSMutableArray *_results;
    unsigned int _uncompletedObservableCount;
}


- (id)initWithWithObservables:(id)arg1;
- (void)_observableFinishedForObserver:(id)arg1;
- (void)_setResult:(id)arg1 atIndex:(unsigned int)arg2;
- (id)subscribe:(id)arg1;
- (void)dealloc;

@end