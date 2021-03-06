/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class RadarPerson, NSString, RadarProblemRelationshipTreeOrderedSet, NSNumber, RadarComponent;

@interface RadarProblemRelatedProblemDetails : NUCModel <NSCoding> {
}

@property(retain) NSNumber * id;
@property(copy) RadarPerson * assignee;
@property(copy) RadarComponent * component;
@property(copy) NSString * title;
@property(copy) NSString * state;
@property BOOL hasRelatedProblems;
@property(copy) RadarProblemRelationshipTreeOrderedSet * relatedProblems;

+ (id)radarProblemRelatedProblemDetailsFromDictionary:(id)arg1;

- (id)description;

@end
