/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class NSString, NSDate, NSNumber, RadarPerson;

@interface RadarSharedReportResponse : NUCModel <NSCoding> {
}

@property(retain) NSNumber * id;
@property(copy) NSString * name;
@property(copy) NSString * reportDescription;
@property(copy) NSString * type;
@property BOOL isPublic;
@property BOOL isActive;
@property(retain) RadarPerson * owner;
@property(retain) NSDate * createdAt;
@property(retain) RadarPerson * lastModifiedBy;
@property(retain) NSDate * lastModifiedAt;

+ (id)radarSharedReportResponseFromDictionary:(id)arg1;

- (id)dateFormat;
- (id)propertyNamesForKeysInJSON;
- (id)description;

@end
