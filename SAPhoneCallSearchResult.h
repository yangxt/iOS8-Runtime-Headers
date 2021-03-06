/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDate, NSNumber, SAPersonAttribute;

@interface SAPhoneCallSearchResult : SADomainObject  {
}

@property(copy) NSDate * callTime;
@property(retain) SAPersonAttribute * contact;
@property(copy) NSNumber * isNew;

+ (id)callSearchResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)callSearchResult;

- (void)setCallTime:(id)arg1;
- (id)callTime;
- (void)setIsNew:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)isNew;
- (void)setContact:(id)arg1;
- (id)contact;

@end
