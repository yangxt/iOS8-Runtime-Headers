/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SASEnableServerEndpointer : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)enableServerEndpointerWithDictionary:(id)arg1 context:(id)arg2;
+ (id)enableServerEndpointer;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
