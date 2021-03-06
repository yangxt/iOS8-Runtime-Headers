/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAMPBasicPodcastAppSearch : SADomainCommand  {
}

@property BOOL acceptPodcastCollections;
@property BOOL acceptPodcastStations;
@property int maxResults;
@property(copy) NSString * query;

+ (id)basicPodcastAppSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)basicPodcastAppSearch;

- (void)setAcceptPodcastStations:(BOOL)arg1;
- (BOOL)acceptPodcastStations;
- (void)setAcceptPodcastCollections:(BOOL)arg1;
- (BOOL)acceptPodcastCollections;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setQuery:(id)arg1;
- (id)query;
- (id)groupIdentifier;
- (int)maxResults;
- (void)setMaxResults:(int)arg1;

@end
