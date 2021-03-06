/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDate, NSString;

@interface SAWebNewsResult : SAWebWebResult  {
}

@property(copy) NSDate * publicationDate;
@property(copy) NSString * source;

+ (id)newsResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)newsResult;

- (id)encodedClassName;
- (void)setPublicationDate:(id)arg1;
- (id)publicationDate;
- (void)setSource:(id)arg1;
- (id)source;
- (id)groupIdentifier;

@end
