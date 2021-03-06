/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SALocalSearchNavigationEndCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)navigationEndCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)navigationEndCompleted;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
