/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@class NSURL, NSArray;

@interface NEEvaluateConnectionRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {
    int _action;
    NSArray *_matchDomains;
    NSArray *_useDNSServers;
    NSURL *_probeURL;
}

@property(readonly) int action;
@property(readonly) NSArray * matchDomains;
@property(copy) NSArray * useDNSServers;
@property(copy) NSURL * probeURL;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)action;
- (void)setUseDNSServers:(id)arg1;
- (id)useDNSServers;
- (id)matchDomains;
- (id)initWithMatchDomains:(id)arg1 andAction:(int)arg2;
- (void)setProbeURL:(id)arg1;
- (id)probeURL;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
