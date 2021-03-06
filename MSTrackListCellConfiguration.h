/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

@interface MSTrackListCellConfiguration : SUMediaItemCellConfiguration  {
    struct { 
        unsigned int localIndex; 
        unsigned int localCount; 
        unsigned int globalIndex; 
        unsigned int globalCount; 
    } _position;
}

@property struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } position;

+ (id)copyDefaultContext;
+ (float)rowHeightForContext:(id)arg1 representedObject:(id)arg2;

- (BOOL)showContentRating;
- (void)reloadLayoutInformation;
- (void)reloadStrings;
- (void)reloadImages;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (void)drawBackgroundWithModifiers:(unsigned int)arg1;
- (unsigned int)indexOfLabelForPurchaseAnimation;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })position;
- (void)setPosition:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
- (id)init;

@end
