/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@class NSArray, GEOPlaceResult, NSUUID;

@interface RTLocationOfInterest : NSObject <NSCopying, NSSecureCoding> {
    NSUUID *_identifier;
    int _type;
    GEOPlaceResult *_placeResult;
    NSArray *_visits;
    double _latitude;
    double _longitude;
    double _uncertainty;
    double _confidence;
}

@property(readonly) double latitude;
@property(readonly) double longitude;
@property(readonly) double uncertainty;
@property(readonly) double confidence;
@property(readonly) NSUUID * identifier;
@property(readonly) int type;
@property(readonly) GEOPlaceResult * placeResult;
@property(readonly) NSArray * visits;

+ (id)locationOfInterestTypeToString:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (id)visits;
- (id)placeResult;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 uncertainty:(double)arg3 confidence:(double)arg4 identifier:(id)arg5 type:(int)arg6 placeResult:(id)arg7 visits:(id)arg8;
- (int)frequencyCompare:(id)arg1;
- (int)recentCompare:(id)arg1;
- (id)localizedAllVisitsDescription;
- (id)localizedLastVisitDescription;
- (double)uncertainty;
- (id)relativeNameToPlaceResult:(id)arg1;
- (double)longitude;
- (double)latitude;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)description;
- (double)confidence;

@end
