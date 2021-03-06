/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSArray, <GEOCompletionItem>, NSString, MKMapItem;

@interface MKSearchCompletion : NSObject  {
    <GEOCompletionItem> *_item;
    NSString *_sourceID;
    NSString *_localizedSectionHeader;
}

@property(readonly) <GEOCompletionItem> * geoCompletionItem;
@property(readonly) NSArray * displayLines;
@property(readonly) MKMapItem * mapItem;
@property(copy) NSString * sourceID;
@property(copy) NSString * localizedSectionHeader;


- (void)setLocalizedSectionHeader:(id)arg1;
- (void)applyToLegacySearch:(id)arg1;
- (void)sendFeedback;
- (BOOL)getCoordinate:(struct { double x1; double x2; }*)arg1;
- (id)highlightsForLine:(unsigned int)arg1;
- (id)queryLine;
- (id)calloutTitle;
- (id)displayLines;
- (id)localizedSectionHeader;
- (void)setSourceID:(id)arg1;
- (id)sourceID;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mapItem;
- (id)description;
- (id)geoCompletionItem;
- (id)initWithGeoCompletionItem:(id)arg1;
- (id)iconWithScale:(float)arg1;

@end
