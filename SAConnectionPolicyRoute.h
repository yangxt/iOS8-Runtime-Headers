/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SAConnectionPolicyRoute : AceObject <SAAceSerializable> {
}

@property(copy) NSString * cname;
@property(copy) NSString * host;
@property(copy) NSNumber * mptcp;
@property int priority;
@property(copy) NSString * resolver;
@property(copy) NSString * resolverProtocol;
@property(copy) NSString * routeId;
@property(copy) NSNumber * timeout;
@property(copy) NSString * type;

+ (id)connectionPolicyRouteWithDictionary:(id)arg1 context:(id)arg2;
+ (id)connectionPolicyRoute;

- (void)setRouteId:(id)arg1;
- (id)routeId;
- (void)setResolverProtocol:(id)arg1;
- (id)resolverProtocol;
- (void)setResolver:(id)arg1;
- (void)setMptcp:(id)arg1;
- (id)mptcp;
- (void)setCname:(id)arg1;
- (id)cname;
- (id)encodedClassName;
- (id)resolver;
- (id)timeout;
- (void)setPriority:(int)arg1;
- (int)priority;
- (id)host;
- (id)type;
- (void)setType:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setTimeout:(id)arg1;
- (id)groupIdentifier;

@end