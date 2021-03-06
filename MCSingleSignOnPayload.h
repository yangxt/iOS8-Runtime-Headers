/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, MCSingleSignOnPayloadKerberosInfo;

@interface MCSingleSignOnPayload : MCPayload  {
    NSString *_humanReadableName;
    MCSingleSignOnPayloadKerberosInfo *_kerberosInfo;
}

@property(retain) NSString * humanReadableName;
@property(retain) MCSingleSignOnPayloadKerberosInfo * kerberosInfo;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (id)humanReadableName;
- (void)setKerberosInfo:(id)arg1;
- (void)setHumanReadableName:(id)arg1;
- (id)kerberosInfo;
- (id)payloadDescriptionKeyValuePairs;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void).cxx_destruct;
- (id)title;
- (id)description;

@end
