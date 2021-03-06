/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL;

@interface SANoteDelete : SADomainCommand  {
}

@property(copy) NSURL * identifier;

+ (id)deleteWithDictionary:(id)arg1 context:(id)arg2;
+ (id)delete;

- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)groupIdentifier;

@end
