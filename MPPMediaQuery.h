/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableArray;

@interface MPPMediaQuery : PBCodable <NSCopying> {
    int _entityOrder;
    NSMutableArray *_filterPredicates;
    int _groupingType;
    NSMutableArray *_staticEntityIdentifiers;
    int _staticEntityType;
    BOOL _filteringDisabled;
    struct { 
        unsigned int entityOrder : 1; 
        unsigned int groupingType : 1; 
        unsigned int staticEntityType : 1; 
        unsigned int filteringDisabled : 1; 
    } _has;
}

@property(retain) NSMutableArray * filterPredicates;
@property BOOL hasGroupingType;
@property int groupingType;
@property BOOL hasFilteringDisabled;
@property BOOL filteringDisabled;
@property BOOL hasEntityOrder;
@property int entityOrder;
@property(retain) NSMutableArray * staticEntityIdentifiers;
@property BOOL hasStaticEntityType;
@property int staticEntityType;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)setHasStaticEntityType:(BOOL)arg1;
- (void)setHasEntityOrder:(BOOL)arg1;
- (void)setHasFilteringDisabled:(BOOL)arg1;
- (void)setHasGroupingType:(BOOL)arg1;
- (BOOL)hasStaticEntityType;
- (id)staticEntityIdentifiersAtIndex:(unsigned int)arg1;
- (void)clearStaticEntityIdentifiers;
- (BOOL)hasEntityOrder;
- (BOOL)hasFilteringDisabled;
- (BOOL)hasGroupingType;
- (id)filterPredicatesAtIndex:(unsigned int)arg1;
- (void)clearFilterPredicates;
- (void)setStaticEntityIdentifiers:(id)arg1;
- (void)addStaticEntityIdentifiers:(id)arg1;
- (void)setStaticEntityType:(int)arg1;
- (void)setEntityOrder:(int)arg1;
- (void)setFilteringDisabled:(BOOL)arg1;
- (void)setGroupingType:(int)arg1;
- (void)addFilterPredicates:(id)arg1;
- (int)staticEntityType;
- (id)staticEntityIdentifiers;
- (unsigned int)staticEntityIdentifiersCount;
- (BOOL)filteringDisabled;
- (int)entityOrder;
- (int)groupingType;
- (id)filterPredicates;
- (unsigned int)filterPredicatesCount;
- (void)setFilterPredicates:(id)arg1;

@end