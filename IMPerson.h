/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSData, NSString, NSArray;

@interface IMPerson : NSObject  {
    BOOL _registered;
    int _recordID;
}

@property(retain,readonly) NSString * uniqueID;
@property(readonly) int recordID;
@property(readonly) BOOL isInAddressBook;
@property(retain,readonly) NSArray * groups;
@property(retain,readonly) NSString * name;
@property(retain,readonly) NSString * fullName;
@property(retain,readonly) NSString * displayName;
@property(retain,readonly) NSString * abbreviatedName;
@property(copy) NSString * nickname;
@property(copy) NSString * firstName;
@property(copy) NSString * lastName;
@property(readonly) BOOL isCompany;
@property(readonly) NSString * companyName;
@property(copy) NSArray * emails;
@property(readonly) NSArray * allEmails;
@property NSArray * phoneNumbers;
@property(readonly) NSArray * mobileNumbers;
@property(retain) NSData * imageData;
@property(readonly) NSData * imageDataWithoutLoading;
@property(readonly) unsigned int status;
@property(readonly) void* _recordRef;
@property(readonly) int _recordID;
@property(readonly) BOOL _registered;

+ (id)existingABPersonForPerson:(id)arg1;
+ (id)existingABPersonWithFirstName:(id)arg1 lastName:(id)arg2;
+ (id)allPeople;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5 identifier:(int*)arg6;
+ (void)_setCachedRecordResult:(int)arg1 identifier:(int)arg2 forQuery:(id)arg3 addressBook:(void*)arg4;
+ (id)_cachedRecordResultForQuery:(id)arg1 addressBook:(void*)arg2;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 orEmail:(id)arg3;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5;
+ (void)_setCachedQueriesEnabled:(BOOL)arg1;
+ (id)existingABPeopleWithInstantMessageAddress:(id)arg1 onServices:(id)arg2 allowSubstringMatch:(BOOL)arg3;
+ (id)existingABPersonWithInstantMessageAddress:(id)arg1 onServices:(id)arg2 allowSubstringMatch:(BOOL)arg3;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 andNickName:(id)arg3 orEmail:(id)arg4 orNumber:(id)arg5 countryCode:(id)arg6 identifier:(int*)arg7;
+ (id)existingABPersonWithFirstName:(id)arg1 andLastName:(id)arg2 orEmail:(id)arg3 orNumber:(id)arg4;

- (id)uniqueID;
- (void)setNickname:(id)arg1;
- (id)nickname;
- (id)allEmails;
- (int)recordID;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setEmails:(id)arg1;
- (id)emails;
- (id)fullName;
- (id)lastName;
- (id)firstName;
- (void)setImageData:(id)arg1;
- (id)imageData;
- (BOOL)_registered;
- (int)_recordID;
- (void)_abPersonChanged:(id)arg1;
- (void)setValues:(id)arg1 forIMProperty:(id)arg2;
- (BOOL)isInAddressBook;
- (id)emailHandlesForService:(id)arg1;
- (BOOL)containsHandle:(id)arg1 forServiceProperty:(id)arg2;
- (id)valuesForProperty:(id)arg1;
- (id)emailHandlesForService:(id)arg1 includeBaseEmail:(BOOL)arg2;
- (BOOL)isCompany;
- (id)allHandlesForProperty:(id)arg1;
- (id)imHandleRegistrarGUID;
- (id)imageDataWithoutLoading;
- (void)setFirstName:(id)arg1 lastName:(id)arg2;
- (id)abbreviatedName;
- (BOOL)isEqualToIMPerson:(id)arg1;
- (void)setValues:(id)arg1 forProperty:(id)arg2;
- (void)appendID:(id)arg1 toProperty:(id)arg2;
- (id)initWithABRecordID:(int)arg1;
- (id)valuesForIMProperty:(id)arg1;
- (id)idsAddresses;
- (id)mobileNumbers;
- (id)phoneNumbers;
- (id)companyName;
- (void*)_recordRef;
- (unsigned int)status;
- (id)displayName;
- (void)save;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)groups;
- (void)setPhoneNumbers:(id)arg1;

@end