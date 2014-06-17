/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class NSNumber, NSString, RadarPerson;

@interface RadarComponentFollowOnComponent : NUCModel <NSCoding> {
    NSString *_privilege;
}

@property(copy) NSString * name;
@property(copy) NSString * version;
@property(retain) NSNumber * id;
@property(copy) NSString * componentDescription;
@property BOOL isClosed;
@property BOOL isRestricted;
@property BOOL isRootLevel;
@property BOOL isOpenToExternals;
@property BOOL isDropBox;
@property BOOL doesInheritAccessGroups;
@property BOOL doesInheritBuildsAndMilestones;
@property BOOL doesInheritDescriptionTemplates;
@property(retain) RadarPerson * owner;
@property(retain) RadarPerson * epm;
@property(retain) RadarPerson * screener;
@property(retain) RadarPerson * integrator;
@property(retain) RadarPerson * builder;
@property(retain) RadarPerson * verifier;
@property BOOL treeLimited;
@property(copy) NSString * privilege;

+ (id)radarComponentFollowOnComponentFromDictionary:(id)arg1;

- (void)setPrivilege:(id)arg1;
- (id)privilege;
- (id)propertyNamesForKeysInJSON;
- (void).cxx_destruct;
- (id)description;

@end