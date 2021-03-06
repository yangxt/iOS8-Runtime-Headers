/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class NSArray, NSString, IDSAccount;

@interface IMDAppleServiceSession : IMDServiceSession  {
    NSString *_serviceName;
    NSString *_GUID;
}

@property(retain,readonly) IDSAccount * idsAccount;
@property(retain,readonly) NSArray * aliases;
@property(retain,readonly) NSArray * vettedAliases;
@property(retain,readonly) NSString * callerID;
@property(readonly) NSString * serviceType;
@property(retain,readonly) NSString * callerURI;
@property(readonly) NSArray * registeredURIs;
@property(retain,readonly) NSString * GUID;


- (id)GUID;
- (id)callerID;
- (void)reIdentify;
- (void)reregister;
- (void)activeDevicesUpdated;
- (id)callerURI;
- (int)_validationStatusForAlias:(id)arg1;
- (id)_aliasStrings;
- (id)certForURI:(id)arg1;
- (void)clearCallerID;
- (BOOL)_isDeviceRegistered;
- (void)deactivateAndPurgeIdentify;
- (void)_updateAccountStatusToUnregistered:(BOOL)arg1;
- (id)registeredURIs;
- (void)refreshRegistration;
- (void)loginServiceSession;
- (void)passwordUpdated;
- (void)logoutServiceSession;
- (id)idsAccount;
- (void)sessionWillBecomeInactive;
- (void)sessionDidBecomeActive;
- (id)initWithAccount:(id)arg1 service:(id)arg2;
- (void)validateProfile;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)unregisterAccount;
- (void)registerAccount;
- (int)validationStatusForAlias:(id)arg1;
- (void)validateAliases:(id)arg1;
- (void)unvalidateAliases:(id)arg1;
- (void)removeAliases:(id)arg1;
- (void)addAliases:(id)arg1;
- (void)authenticateAccount;
- (id)_aliases;
- (id)vettedAliases;
- (id)aliases;
- (id)serviceType;
- (void)dealloc;

@end
