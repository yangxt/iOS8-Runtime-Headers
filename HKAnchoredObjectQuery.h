/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSNumber;

@interface HKAnchoredObjectQuery : HKQuery <HKAnchoredObjectQueryClient> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    NSNumber *_anchor;
    unsigned int _limit;
}

@property(copy) id completionHandler;
@property(retain) NSNumber * anchor;
@property unsigned int limit;

+ (id)_serverInterfaceProtocol;
+ (id)_clientInterfaceProtocol;
+ (void)_configureClientInterface:(id)arg1;

- (unsigned int)limit;
- (void)setLimit:(unsigned int)arg1;
- (void)_validate;
- (void)setCompletionHandler:(id)arg1;
- (void).cxx_destruct;
- (void)setAnchor:(id)arg1;
- (id)anchor;
- (id)completionHandler;
- (id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(unsigned int)arg3 limit:(unsigned int)arg4 completionHandler:(id)arg5;
- (void)deliverDataObjects:(id)arg1 withAnchor:(id)arg2 queryUUID:(id)arg3;
- (void)_cleanupAfterDeactivation;
- (void)_requestServerProxyWithUUID:(id)arg1 connection:(id)arg2 handler:(id)arg3;
- (void)_prepareToActivateWithServerProxy:(id)arg1 isReactivation:(BOOL)arg2;
- (void)_deliverError:(id)arg1;

@end