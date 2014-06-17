/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSObject<OS_dispatch_semaphore>, NSDictionary;

@interface TUTelephonyCallModel : TUCallModel  {
    NSDictionary *_callManagementState;
    NSObject<OS_dispatch_semaphore> *_callManagementStateSemaphore;
}

@property(retain) NSDictionary * callManagementState;
@property(retain) NSObject<OS_dispatch_semaphore> * callManagementStateSemaphore;


- (void)setCallManagementStateSemaphore:(id)arg1;
- (void)_invalidateNetworkCanTakeCallsPrivateCache;
- (void)setCallManagementState:(id)arg1;
- (BOOL)_valueExistsForKey:(struct __CFString { }*)arg1;
- (BOOL)_networkCanTakeCallsPrivate;
- (BOOL)_isAmbiguousMultiPartyCall;
- (BOOL)_isAmbiguousCallList;
- (BOOL)_booleanValueForKey:(struct __CFString { }*)arg1;
- (id)callManagementState;
- (id)callManagementStateSemaphore;
- (void)_invalidateCachedState;
- (BOOL)isSendToVoicemailAllowed;
- (BOOL)isHoldAndAnswerAllowed;
- (BOOL)isEndAndAnswerAllowed;
- (BOOL)isHardPauseAvailable;
- (BOOL)isTakingCallsPrivateAllowed;
- (int)ambiguityState;
- (BOOL)isAddCallAllowed;
- (BOOL)isHoldAllowed;
- (BOOL)isMergeable;
- (BOOL)isSwappable;
- (void)dealloc;
- (id)init;

@end