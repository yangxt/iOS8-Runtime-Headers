/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAUpdateRestrictions : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * restrictionsToAdd;
@property(copy) NSArray * restrictionsToRemove;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)updateRestrictionsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)updateRestrictions;

- (void)setRestrictionsToRemove:(id)arg1;
- (id)restrictionsToRemove;
- (void)setRestrictionsToAdd:(id)arg1;
- (id)restrictionsToAdd;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
