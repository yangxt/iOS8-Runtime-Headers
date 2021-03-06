/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class RadarProductSecurityReporterOrderedSet, RadarProblemSecurityVulnerability, RadarProductSecurityExternalOrderedSet, RadarProductSecurityTargetOrderedSet, RadarProblemCWE, NSString, RadarPerson, NSDate, NSNumber;

@interface RadarProblemProductSecurity : NUCModel <NSCoding> {
}

@property(copy) NSString * type;
@property BOOL isPrivacyIssue;
@property(retain) RadarProblemCWE * cwe;
@property(copy) NSString * color;
@property(retain) RadarProblemSecurityVulnerability * vulnerabilityClassification;
@property(copy) NSString * visibility;
@property(copy) RadarPerson * securityDRI;
@property(copy) RadarPerson * securityVerifier;
@property(copy) NSNumber * securityMasterID;
@property(retain) NSDate * foundAt;
@property(retain) NSDate * disclosedAt;
@property BOOL isColorOverridden;
@property(copy) RadarProductSecurityTargetOrderedSet * targets;
@property(copy) RadarProductSecurityReporterOrderedSet * reporters;
@property(copy) RadarProductSecurityExternalOrderedSet * externals;


- (id)dateFormat;
- (id)dictionary;

@end
