/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSTimer, ISStoreURLOperation, NSString;

@interface SUNetworkObserver : NSObject <ISSingleton, ISStoreURLOperationDelegate> {
    ISStoreURLOperation *_partnerDetectOperation;
    BOOL _partnersEnabled;
    NSString *_partnerIdentifier;
    NSTimer *_startupTimer;
    int _storeServicesNetworkUsageCount;
}

@property(retain) NSString * partnerIdentifier;

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (void)startNetworkAvailabilityTimer;
- (void)setPartnersEnabled:(BOOL)arg1;
- (void)checkPartnerAvailability;
- (void)setPartnerIdentifier:(id)arg1;
- (void)_mainThreadHandleNetworkTypeChange:(id)arg1;
- (void)_mainThreadScheduleNetworkActivityUpdate;
- (void)_updateNetworkActivityIndicator;
- (void)_mainThreadSetPartnerIdentifier:(id)arg1;
- (void)_handleUsingNetworkChange:(id)arg1;
- (void)_handleNetworkTypeChange:(id)arg1;
- (void)_startupTimer:(id)arg1;
- (void)_cancelStartupTimer;
- (void)_networkUsageStateChanged:(id)arg1;
- (void)_storeServicesNetworkStopNotification:(id)arg1;
- (void)_storeServicesNetworkStartNotification:(id)arg1;
- (void)_partnerHeaderChanged:(id)arg1;
- (id)partnerIdentifier;
- (void)_networkTypeChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end