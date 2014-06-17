/* Generated by RuntimeBrowser.
   Image: /usr/lib/libmecabra.dylib
 */

@class NSMutableDictionary, NSString;

@interface MecabraCoreDataProperties : NSObject  {
    NSMutableDictionary *_descriptionDictionary;
    NSString *_identifier;
    NSString *_type;
}

@property(retain,readonly) NSString * type;
@property(readonly) NSString * ubiquityContainerIdentifier;
@property(retain) NSMutableDictionary * descriptionDictionary;
@property(retain) NSString * identifier;

+ (id)ubiquityContainerURL;
+ (id)defaultDescriptionPath;
+ (void)setDefaultDescriptionPath:(id)arg1;
+ (id)sharedInstanceForType:(id)arg1;

- (id)ubiquitousTransactionURLForIdentifier:(id)arg1;
- (id)ubiquitousStoreDirectoryURLForIdentifier:(id)arg1;
- (id)ubiquitousURLWithSuffix:(id)arg1;
- (id)ubiquityContainerIdentifier;
- (id)entityDescriptionURL;
- (BOOL)databaseSyncs;
- (id)entityModelName;
- (id)requiredKeys;
- (void)forceNoSync;
- (id)uniqueKeys;
- (void)setDescriptionDictionary:(id)arg1;
- (id)descriptionDictionary;
- (id)initWithIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)sortDescriptors;
- (id)type;
- (id)identifier;
- (id)valueForKey:(id)arg1;
- (void)dealloc;

@end