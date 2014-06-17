/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAAIRequestSearch : SABaseClientBoundCommand  {
}

@property(copy) NSString * acousticIdSearchSessionId;

+ (id)requestSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)requestSearch;

- (void)setAcousticIdSearchSessionId:(id)arg1;
- (id)acousticIdSearchSessionId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end