/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class RadioStation, NSArray, MPAVItem, NSMapTable;

@interface RURadioPlaybackContext : MPPlaybackContext  {
    NSMapTable *_preparedAdSlotByRadioTrack;
    MPAVItem *_prefixItem;
    RadioStation *_station;
    NSArray *_tracks;
}

@property(copy,readonly) NSArray * allPreparedAdSlotRadioTracks;
@property(retain) MPAVItem * prefixItem;
@property(readonly) RadioStation * station;
@property(copy) NSArray * tracks;

+ (Class)queueFeederClass;

- (id)tracks;
- (id)station;
- (void)setPrefixItem:(id)arg1;
- (id)prefixItem;
- (void)setTracks:(id)arg1;
- (void)addPreparedAdSlot:(id)arg1 forRadioTrack:(id)arg2;
- (id)preparedAdSlotForRadioTrack:(id)arg1;
- (id)allPreparedAdSlotRadioTracks;
- (void).cxx_destruct;
- (id)initWithStation:(id)arg1;

@end
