/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray;

@interface TSKCommandContainer : TSPObject <TSKInnerCommandsProvider> {
    NSMutableArray *mCommands;
}


- (id)initWithContext:(id)arg1;
- (void)redo;
- (void)undo;
- (void)dealloc;
- (BOOL)hasCommands;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (BOOL)modifiesAnyObjectPassingTest:(id)arg1;
- (void)addCommand:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end