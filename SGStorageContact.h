/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@class NSArray, SGRecordId, NSMutableSet, NSString;

@interface SGStorageContact : NSObject  {
    NSMutableSet *_profiles;
    long detectedPhonesOnce;
    NSArray *internalDetectedPhones;
    long detectedAddressesOnce;
    NSArray *internalDetectedAddresses;
    long detectedEmailAddressesOnce;
    NSArray *internalDetectedEmailAddresses;
    SGRecordId *_recordId;
    long long _masterEntityId;
}

@property(readonly) long long masterEntityId;
@property(readonly) NSString * name;
@property(readonly) SGRecordId * recordId;

+ (id)mergeAll:(id)arg1;
+ (id)contactWithMasterEntityId:(long long)arg1;
+ (id)contactFromContactEntity:(id)arg1;

- (id)convertToContact:(id)arg1;
- (id)allNames;
- (id)profiles;
- (id)loadEmailAddressDetailsFrom:(id)arg1;
- (id)loadAddressDetailsFrom:(id)arg1;
- (id)loadPhoneDetailsFrom:(id)arg1;
- (BOOL)canMerge:(id)arg1;
- (BOOL)isEqualToStorageContact:(id)arg1;
- (void)addProfile:(id)arg1;
- (long long)masterEntityId;
- (id)recordId;
- (void)merge:(id)arg1;
- (void).cxx_destruct;
- (void)reload;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)description;
- (id)init;

@end