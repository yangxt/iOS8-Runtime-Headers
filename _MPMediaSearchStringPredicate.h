/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSSet, NSString;

@interface _MPMediaSearchStringPredicate : MPMediaPredicate <MPPProtobufferCoding> {
    NSString *_searchString;
    NSSet *_properties;
}

@property(copy) NSString * searchString;
@property(copy) NSSet * properties;

+ (id)predicateWithSearchString:(id)arg1 forProperties:(id)arg2;

- (void)setSearchString:(id)arg1;
- (void)setProperties:(id)arg1;
- (void).cxx_destruct;
- (id)properties;
- (id)searchString;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)_ML3PredicateForEntityClass:(Class)arg1;
- (id)ML3PredicateForTrack;
- (id)ML3PredicateForContainer;
- (id)protobufferEncodableObject;
- (id)initWithProtobufferDecodableObject:(id)arg1;

@end
