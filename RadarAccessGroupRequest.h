/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class NSString, RadarWorkGroupRole;

@interface RadarAccessGroupRequest : NUCModel <NSCoding, NUCJSONObjectCusomKeyValue> {
}

@property(copy) NSString * name;
@property(copy) NSString * workgroupDescription;
@property(copy) NSString * dsGroup;
@property(retain) RadarWorkGroupRole * roles;


- (id)initWithName:(id)arg1 workgroupDescription:(id)arg2;
- (id)customJSONKeysForProperties;
- (id)dictionary;

@end
