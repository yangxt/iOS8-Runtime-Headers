/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SAMicroblogTwitterPostAuthor;

@interface SAMicroblogMicroblogSearchResultBase : SADomainObject  {
}

@property(retain) SAMicroblogTwitterPostAuthor * author;

+ (id)microblogSearchResultBaseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)microblogSearchResultBase;

- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)author;
- (void)setAuthor:(id)arg1;
- (id)groupIdentifier;

@end