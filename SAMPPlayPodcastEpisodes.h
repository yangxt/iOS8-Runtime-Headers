/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, SAMPPodcast;

@interface SAMPPlayPodcastEpisodes : SADomainCommand  {
}

@property(copy) NSString * episodePlaybackOrder;
@property(retain) SAMPPodcast * podcast;

+ (id)playPodcastEpisodesWithDictionary:(id)arg1 context:(id)arg2;
+ (id)playPodcastEpisodes;

- (void)setEpisodePlaybackOrder:(id)arg1;
- (id)episodePlaybackOrder;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)podcast;
- (void)setPodcast:(id)arg1;
- (id)groupIdentifier;

@end