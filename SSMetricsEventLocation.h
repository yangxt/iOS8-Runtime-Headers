/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSDictionary, NSString, NSMutableDictionary;

@interface SSMetricsEventLocation : NSObject  {
    int _position;
    NSString *_type;
    NSMutableDictionary *_values;
}

@property int locationPosition;
@property(copy) NSString * locationType;
@property(readonly) NSDictionary * reportingDictionary;


- (id)locationType;
- (int)locationPosition;
- (id)valueForLocationKey:(id)arg1;
- (id)reportingDictionary;
- (void)setValue:(id)arg1 forLocationKey:(id)arg2;
- (void)setLocationType:(id)arg1;
- (void)setLocationPosition:(int)arg1;
- (void).cxx_destruct;

@end
