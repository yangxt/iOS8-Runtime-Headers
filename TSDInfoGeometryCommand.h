/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDInfoGeometry, TSPObject<TSDChangeableInfo>;

@interface TSDInfoGeometryCommand : TSKCommand <TSDCoalesceableInfoPositioningCommmand, TSDPropagatableCommand> {
    TSPObject<TSDChangeableInfo> *mInfo;
    TSDInfoGeometry *mOldGeometry;
    TSDInfoGeometry *mNewGeometry;
    BOOL mDidMatchObjectPlaceholderGeometry;
    BOOL mShouldClearObjectPlaceholderFlag;
}

@property(readonly) TSPObject<TSDChangeableInfo> * info;
@property(readonly) TSDInfoGeometry * newGeometry;


- (id)actionString;
- (BOOL)process;
- (id)info;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)dealloc;
- (id)newGeometry;
- (BOOL)shouldBeCoalescedWithInsertionCommandOfInfo:(id)arg1;
- (void)p_do;
- (void)applyGeometryToInfoForCommit:(id)arg1;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (BOOL)modifiesAnyObjectPassingTest:(id)arg1;
- (id)initWithInfo:(id)arg1 newGeometry:(id)arg2 shouldClearObjectPlaceholderFlag:(BOOL)arg3 context:(id)arg4;
- (id)initWithInfo:(id)arg1 newGeometry:(id)arg2 context:(id)arg3;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
