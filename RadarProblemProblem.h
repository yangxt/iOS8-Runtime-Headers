/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class RadarProblemComponent, NSString, NSNumber, RadarPerson;

@interface RadarProblemProblem : NUCModel <NSCoding> {
}

@property(retain) NSNumber * id;
@property(retain) RadarPerson * assignee;
@property(retain) RadarProblemComponent * component;
@property(copy) NSString * state;
@property(copy) NSString * title;

+ (id)radarProblemProblemFromDictionary:(id)arg1;

- (id)description;

@end
