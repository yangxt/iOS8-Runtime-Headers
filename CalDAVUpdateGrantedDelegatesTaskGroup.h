/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSSet;

@interface CalDAVUpdateGrantedDelegatesTaskGroup : CoreDAVTaskGroup <CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate> {
    int _state;
    NSSet *_addWriteURLs;
    NSSet *_addReadURLs;
    NSSet *_removeURLs;
    NSSet *_updatedWriteURLs;
    NSSet *_updatedReadURLs;
}

@property int state;
@property(retain) NSSet * addWriteURLs;
@property(retain) NSSet * addReadURLs;
@property(retain) NSSet * removeURLs;
@property(retain) NSSet * updatedWriteURLs;
@property(retain) NSSet * updatedReadURLs;


- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
- (id)initWithAccountInfoProvider:(id)arg1 addWriteURLs:(id)arg2 addReadURLs:(id)arg3 removeURLs:(id)arg4 taskManager:(id)arg5;
- (void)_updateDelegatesWithAllowWrite:(BOOL)arg1;
- (void)_populateUpdatesFromFetched:(id)arg1 allowWrite:(BOOL)arg2;
- (void)_fetchExistingGrantedDelegates;
- (void)setUpdatedReadURLs:(id)arg1;
- (void)setUpdatedWriteURLs:(id)arg1;
- (id)removeURLs;
- (id)addReadURLs;
- (id)addWriteURLs;
- (id)updatedReadURLs;
- (id)updatedWriteURLs;
- (void)setRemoveURLs:(id)arg1;
- (void)setAddReadURLs:(id)arg1;
- (void)setAddWriteURLs:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (void)dealloc;

@end
