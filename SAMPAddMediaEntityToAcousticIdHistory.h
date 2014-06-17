/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAMPAddMediaEntityToAcousticIdHistory : SABaseClientBoundCommand  {
}

@property(copy) NSString * adamId;
@property(copy) NSString * affiliateId;

+ (id)addMediaEntityToAcousticIdHistoryWithDictionary:(id)arg1 context:(id)arg2;
+ (id)addMediaEntityToAcousticIdHistory;

- (void)setAffiliateId:(id)arg1;
- (id)affiliateId;
- (void)setAdamId:(id)arg1;
- (id)adamId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end