/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NEAOVPN, NEProfileIngestionPayloadInfo, NSUUID, NEVPNApp, NSString, NEContentFilter, NEVPN;

@interface NEConfiguration : NSObject <NEProfilePayloadHandlerDelegate, NEConfigurationValidating, NSSecureCoding, NSCopying> {
    int _grade;
    NSUUID *_identifier;
    NSString *_application;
    NSString *_name;
    NSString *_applicationName;
    NSString *_applicationIdentifier;
    NSString *_externalIdentifier;
    NEVPN *_VPN;
    NEAOVPN *_alwaysOnVPN;
    NEVPNApp *_appVPN;
    NEContentFilter *_contentFilter;
    NEProfileIngestionPayloadInfo *_payloadInfo;
}

@property(readonly) int grade;
@property(readonly) NSUUID * identifier;
@property(copy) NSString * application;
@property(copy) NSString * name;
@property(copy) NSString * applicationName;
@property(copy) NSString * applicationIdentifier;
@property(copy) NSString * externalIdentifier;
@property(copy) NEVPN * VPN;
@property(copy) NEAOVPN * alwaysOnVPN;
@property(copy) NEVPNApp * appVPN;
@property(copy) NEContentFilter * contentFilter;
@property(copy) NEProfileIngestionPayloadInfo * payloadInfo;
@property(readonly) NSString * pluginType;

+ (BOOL)supportsSecureCoding;
+ (BOOL)removeSCServiceWithIdentifier:(id)arg1 fromPreferences:(struct __SCPreferences { }*)arg2;
+ (BOOL)SCServiceWithIdentifier:(id)arg1 existsInPreferences:(struct __SCPreferences { }*)arg2;
+ (struct __CFDictionary { }*)copyConfigurationForProtocol:(struct __CFString { }*)arg1 inService:(struct __SCNetworkService { }*)arg2;
+ (BOOL)setConfiguration:(struct __CFDictionary { }*)arg1 forProtocol:(struct __CFString { }*)arg2 inService:(struct __SCNetworkService { }*)arg3;
+ (void)addError:(id)arg1 toList:(id)arg2;

- (id)application;
- (id)applicationName;
- (void)setApplicationIdentifier:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (BOOL)setCertificates:(id)arg1;
- (void)setApplicationName:(id)arg1;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)applicationIdentifier;
- (id)identifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)setAppLayerVPNUUID:(id)arg1 andSafariDomains:(id)arg2;
- (BOOL)setProfileInfo:(id)arg1;
- (BOOL)setPayloadInfoCommon:(id)arg1 payloadOrganization:(id)arg2;
- (BOOL)setPayloadInfoIdentity:(id)arg1;
- (id)getConfigurationIdentifier;
- (id)getPendingCertificateUUIDs:(id)arg1;
- (id)initWithContentFilterPayload:(id)arg1 configurationName:(id)arg2;
- (id)initWithAlwaysOnVPNPayload:(id)arg1 configurationName:(id)arg2;
- (id)initWithAppLayerVPNPayload:(id)arg1 configurationName:(id)arg2;
- (id)initWithVPNPayload:(id)arg1 configurationName:(id)arg2;
- (BOOL)setPayloadInfoIdentityPIN:(id)arg1;
- (BOOL)setPayloadInfoIdentityIPSecSharedSecret:(id)arg1;
- (BOOL)setPayloadInfoIdentityProxy:(id)arg1;
- (BOOL)setPayloadInfoIdentityUserNameAndPassword:(id)arg1;
- (BOOL)setConfigurationSharedSecret:(id)arg1;
- (BOOL)setConfigurationHTTPPassword:(id)arg1;
- (id)getPendingCertificateUUIDsContentFilter:(id)arg1;
- (id)getPendingCertificateUUIDsAOVpn:(id)arg1;
- (id)getPendingCertificateUUIDsAppVPN:(id)arg1;
- (id)getPendingCertificateUUIDsVPN:(id)arg1;
- (BOOL)setCertificateContentFilter:(id)arg1;
- (BOOL)setCertificatesAOVpn:(id)arg1;
- (BOOL)setCertificatesAppVPN:(id)arg1;
- (BOOL)setCertificatesVPN:(id)arg1;
- (id)getConfigurationPasswordPersist:(id)arg1 account:(id)arg2 description:(id)arg3;
- (BOOL)setConfigurationPassword:(id)arg1 account:(id)arg2 password:(id)arg3 description:(id)arg4;
- (id)configureAOVPNTunnelFromTunnelDict:(id)arg1 payloadBase:(id)arg2;
- (BOOL)setAppLayerVPNRuleSettings:(id)arg1 withAppIdentifier:(id)arg2;
- (BOOL)ingestProxyOptions:(id)arg1;
- (BOOL)ingestDNSOptions:(id)arg1;
- (BOOL)configurePluginWithPayload:(id)arg1 pluginType:(id)arg2 payloadType:(id)arg3;
- (BOOL)ingestIPSecDict:(id)arg1 vpnType:(id)arg2 vpn:(id)arg3;
- (BOOL)configurePPPWithVPNOptions:(id)arg1 payloadBase:(id)arg2;
- (BOOL)ingestPPPData:(id)arg1 vnpType:(id)arg2;
- (BOOL)configureIKE:(id)arg1 vpnType:(id)arg2 payloadBase:(id)arg3 vpn:(id)arg4;
- (BOOL)configurePPTPWithPPPOptions:(id)arg1;
- (BOOL)configureL2TPWithPPPOptions:(id)arg1;
- (BOOL)configurePPPCommon:(id)arg1;
- (BOOL)ingestPPPDict:(id)arg1;
- (id)getConfigurationProtocol;
- (BOOL)configureVpnOnDemand:(id)arg1;
- (BOOL)ingestDiconnectOptions:(id)arg1;
- (BOOL)setConfigurationVPNPassword:(id)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (void)copyPasswordsFromSystemKeychain;
- (id)copyProfileDictionary;
- (void)clearKeychainInDomain:(int)arg1;
- (void)syncWithKeychainInDomain:(int)arg1;
- (void)setPayloadInfo:(id)arg1;
- (void)setAppVPN:(id)arg1;
- (void)setAlwaysOnVPN:(id)arg1;
- (void)setApplication:(id)arg1;
- (void)setVPN:(id)arg1;
- (void)setContentFilter:(id)arg1;
- (id)initWithName:(id)arg1 grade:(int)arg2;
- (id)externalIdentifier;
- (void)clearUserKeychain;
- (void)syncWithUserKeychain;
- (id)initFromSCService:(struct __SCNetworkService { }*)arg1;
- (BOOL)updateFromSCService:(struct __SCNetworkService { }*)arg1;
- (id)payloadInfo;
- (void)clearSystemKeychain;
- (BOOL)applyChangesToSCServiceInPreferences:(struct __SCPreferences { }*)arg1;
- (BOOL)isSupportedBySC;
- (id)generateSignature;
- (void)syncWithSystemKeychain;
- (int)grade;
- (id)contentFilter;
- (id)alwaysOnVPN;
- (id)appVPN;
- (id)VPN;
- (id)pluginType;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;

@end
