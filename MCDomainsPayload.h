/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSDictionary;

@interface MCDomainsPayload : MCPayload  {
    NSDictionary *_restrictions;
}

@property(retain) NSDictionary * restrictions;

+ (BOOL)isPatternValid:(id)arg1 outError:(id*)arg2;
+ (id)invalidDomainPatternErrorWithPattern:(id)arg1;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void)setRestrictions:(id)arg1;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void).cxx_destruct;
- (id)restrictions;

@end
