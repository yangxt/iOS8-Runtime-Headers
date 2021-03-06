/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NEConfiguration, NSString, NSMutableArray, NEConfigurationManager;

@interface NEProfileIngestion : NSObject <NEProfileIngestionDelegate> {
    NSString *_clientName;
    NSString *_payloadType;
    NEConfigurationManager *_manager;
    NSMutableArray *_currentConfigurations;
    NEConfiguration *_ingestedConfiguration;
}

@property(readonly) NSString * clientName;
@property(readonly) NSString * payloadType;
@property(readonly) NEConfigurationManager * manager;
@property(retain) NSMutableArray * currentConfigurations;
@property(retain) NEConfiguration * ingestedConfiguration;

+ (void)profileMigrationComplete;
+ (id)getServiceIDForPayload:(id)arg1;

- (id)manager;
- (id)payloadType;
- (id)initWithName:(id)arg1;
- (void).cxx_destruct;
- (id)clientName;
- (BOOL)updateAppLayerVPNMappingRules:(id)arg1;
- (id)copyManagedConfigurationIDs;
- (BOOL)updateDefaultAfterDeletingConfiguration;
- (BOOL)updateDefaultAfterAddingConfiguration;
- (BOOL)enableAlwaysOnVpn;
- (void)enableDefaultService;
- (void)unlockConfigurations;
- (BOOL)lockConfigurations;
- (BOOL)isInstalled:(id)arg1;
- (id)setAsideConfigurationName:(id)arg1 unsetAside:(BOOL)arg2;
- (BOOL)removeConfigurationWithIdentifier:(id)arg1;
- (BOOL)removeIngestedConfiguration;
- (BOOL)saveIngestedConfiguration;
- (BOOL)createConfigurationFromPayload:(id)arg1 payloadType:(id)arg2;
- (BOOL)enableAlwaysOnVpnInternal:(BOOL)arg1;
- (BOOL)loadConfigurationsForceReloadFromDisk;
- (id)resolveConfigurationNameConflict:(id)arg1;
- (id)findConfigurationByPayloadUUID:(id)arg1;
- (BOOL)saveConfiguration:(id)arg1;
- (id)findConfigurationByName:(id)arg1;
- (BOOL)loadConfigurationsWithRefreshOption:(BOOL)arg1;
- (void)setIngestedConfiguration:(id)arg1;
- (id)findConfigurationByConfigurationID:(id)arg1;
- (id)ingestedConfiguration;
- (void)setCurrentConfigurations:(id)arg1;
- (id)currentConfigurations;
- (id)initWithNameAndType:(id)arg1 payloadType:(id)arg2;
- (BOOL)removeConfiguration:(id)arg1;
- (void)dealloc;

@end
