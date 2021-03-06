/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSData, GEOBusinessOptions, GEOLatLng, GEOLocation, GEOSuggestionsOptions, NSMutableArray, GEOAddress, NSString, GEOMapRegion, GEOClientCapabilities, GEOIndexQueryNode;

@interface GEOPlaceSearchRequest : PBRequest <NSCopying> {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionGUID;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _additionalPlaceTypes;
    struct { 
        unsigned long long *list; 
        unsigned int count; 
        unsigned int size; 
    } _businessIDs;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    } _optionalSuppressionReasons;
    struct { 
        int _beginIndex; 
        int _endIndex; 
        int _stringType; 
    } _searchContextSubstring;
    struct { int x1; int x2; int x3; } *_searchSubstrings;
    unsigned int _searchSubstringsCount;
    unsigned int _searchSubstringsSpace;
    long long _geoId;
    unsigned long long _intersectingGeoId;
    double _timeSinceMapEnteredForeground;
    double _timeSinceMapViewportChanged;
    double _timestamp;
    GEOAddress *_address;
    GEOBusinessOptions *_businessOptions;
    int _businessSortOrder;
    GEOClientCapabilities *_clientCapabilities;
    NSString *_deviceCountryCode;
    GEOLatLng *_deviceLocation;
    NSString *_deviceTimeZone;
    NSMutableArray *_filterByBusinessCategorys;
    GEOIndexQueryNode *_indexFilter;
    NSString *_inputLanguage;
    int _knownAccuracy;
    GEOLatLng *_knownLocation;
    int _localSearchProviderID;
    GEOLocation *_location;
    GEOMapRegion *_mapRegion;
    int _maxBusinessReviews;
    int _maxResults;
    NSString *_phoneticLocaleIdentifier;
    int _placeTypeLimit;
    GEOAddress *_preserveFields;
    NSString *_search;
    NSString *_searchContext;
    int _searchSource;
    int _sequenceNumber;
    NSMutableArray *_serviceTags;
    GEOSuggestionsOptions *_suggestionsOptions;
    NSString *_suggestionsPrefix;
    int _transportTypeForTravelTimes;
    NSData *_zilchPoints;
    BOOL _excludeAddressInResults;
    BOOL _includeBusinessCategories;
    BOOL _includeBusinessRating;
    BOOL _includeEntryPoints;
    BOOL _includeFeatureSets;
    BOOL _includeGeoId;
    BOOL _includeMatchedToken;
    BOOL _includePhonetics;
    BOOL _includeQuads;
    BOOL _includeRevgeoRequestTemplate;
    BOOL _includeSpokenNames;
    BOOL _includeStatusCodeInfo;
    BOOL _includeSuggestionsOnly;
    BOOL _includeTravelDistance;
    BOOL _includeTravelTime;
    BOOL _includeUnmatchedStrings;
    BOOL _isFromAPI;
    BOOL _isStrictGeocoding;
    BOOL _isStrictMapRegion;
    BOOL _structuredSearch;
    BOOL _suppressResultsRequiringAttribution;
    struct { 
        unsigned int sessionGUID : 1; 
        unsigned int searchContextSubstring : 1; 
        unsigned int geoId : 1; 
        unsigned int intersectingGeoId : 1; 
        unsigned int timeSinceMapEnteredForeground : 1; 
        unsigned int timeSinceMapViewportChanged : 1; 
        unsigned int timestamp : 1; 
        unsigned int businessSortOrder : 1; 
        unsigned int knownAccuracy : 1; 
        unsigned int localSearchProviderID : 1; 
        unsigned int maxBusinessReviews : 1; 
        unsigned int maxResults : 1; 
        unsigned int placeTypeLimit : 1; 
        unsigned int searchSource : 1; 
        unsigned int sequenceNumber : 1; 
        unsigned int transportTypeForTravelTimes : 1; 
        unsigned int excludeAddressInResults : 1; 
        unsigned int includeBusinessCategories : 1; 
        unsigned int includeBusinessRating : 1; 
        unsigned int includeEntryPoints : 1; 
        unsigned int includeFeatureSets : 1; 
        unsigned int includeGeoId : 1; 
        unsigned int includeMatchedToken : 1; 
        unsigned int includePhonetics : 1; 
        unsigned int includeQuads : 1; 
        unsigned int includeRevgeoRequestTemplate : 1; 
        unsigned int includeSpokenNames : 1; 
        unsigned int includeStatusCodeInfo : 1; 
        unsigned int includeSuggestionsOnly : 1; 
        unsigned int includeTravelDistance : 1; 
        unsigned int includeTravelTime : 1; 
        unsigned int includeUnmatchedStrings : 1; 
        unsigned int isFromAPI : 1; 
        unsigned int isStrictGeocoding : 1; 
        unsigned int isStrictMapRegion : 1; 
        unsigned int structuredSearch : 1; 
        unsigned int suppressResultsRequiringAttribution : 1; 
    } _has;
}

@property(readonly) unsigned int businessIDsCount;
@property(readonly) unsigned long long* businessIDs;
@property(readonly) BOOL hasAddress;
@property(retain) GEOAddress * address;
@property(readonly) BOOL hasLocation;
@property(retain) GEOLocation * location;
@property(readonly) BOOL hasSearch;
@property(retain) NSString * search;
@property(readonly) BOOL hasMapRegion;
@property(retain) GEOMapRegion * mapRegion;
@property(readonly) unsigned int additionalPlaceTypesCount;
@property(readonly) int* additionalPlaceTypes;
@property BOOL hasIncludePhonetics;
@property BOOL includePhonetics;
@property BOOL hasMaxResults;
@property int maxResults;
@property BOOL hasSessionGUID;
@property struct { unsigned long long x1; unsigned long long x2; } sessionGUID;
@property BOOL hasBusinessSortOrder;
@property int businessSortOrder;
@property BOOL hasIncludeBusinessRating;
@property BOOL includeBusinessRating;
@property BOOL hasIncludeBusinessCategories;
@property BOOL includeBusinessCategories;
@property BOOL hasMaxBusinessReviews;
@property int maxBusinessReviews;
@property(retain) NSMutableArray * filterByBusinessCategorys;
@property BOOL hasIsStrictMapRegion;
@property BOOL isStrictMapRegion;
@property BOOL hasTimestamp;
@property double timestamp;
@property(readonly) BOOL hasZilchPoints;
@property(retain) NSData * zilchPoints;
@property BOOL hasIncludeEntryPoints;
@property BOOL includeEntryPoints;
@property(readonly) BOOL hasBusinessOptions;
@property(retain) GEOBusinessOptions * businessOptions;
@property BOOL hasLocalSearchProviderID;
@property int localSearchProviderID;
@property BOOL hasIncludeSuggestionsOnly;
@property BOOL includeSuggestionsOnly;
@property BOOL hasStructuredSearch;
@property BOOL structuredSearch;
@property(readonly) BOOL hasSuggestionsPrefix;
@property(retain) NSString * suggestionsPrefix;
@property(readonly) BOOL hasDeviceCountryCode;
@property(retain) NSString * deviceCountryCode;
@property(readonly) BOOL hasDeviceLocation;
@property(retain) GEOLatLng * deviceLocation;
@property(readonly) BOOL hasInputLanguage;
@property(retain) NSString * inputLanguage;
@property(readonly) BOOL hasPhoneticLocaleIdentifier;
@property(retain) NSString * phoneticLocaleIdentifier;
@property BOOL hasSequenceNumber;
@property int sequenceNumber;
@property BOOL hasSuppressResultsRequiringAttribution;
@property BOOL suppressResultsRequiringAttribution;
@property BOOL hasIsFromAPI;
@property BOOL isFromAPI;
@property BOOL hasTimeSinceMapEnteredForeground;
@property double timeSinceMapEnteredForeground;
@property BOOL hasTimeSinceMapViewportChanged;
@property double timeSinceMapViewportChanged;
@property BOOL hasIncludeSpokenNames;
@property BOOL includeSpokenNames;
@property(readonly) BOOL hasDeviceTimeZone;
@property(retain) NSString * deviceTimeZone;
@property(readonly) BOOL hasClientCapabilities;
@property(retain) GEOClientCapabilities * clientCapabilities;
@property BOOL hasIncludeTravelTime;
@property BOOL includeTravelTime;
@property BOOL hasTransportTypeForTravelTimes;
@property int transportTypeForTravelTimes;
@property(readonly) BOOL hasSuggestionsOptions;
@property(retain) GEOSuggestionsOptions * suggestionsOptions;
@property BOOL hasPlaceTypeLimit;
@property int placeTypeLimit;
@property BOOL hasIsStrictGeocoding;
@property BOOL isStrictGeocoding;
@property BOOL hasIncludeTravelDistance;
@property BOOL includeTravelDistance;
@property BOOL hasGeoId;
@property long long geoId;
@property BOOL hasIncludeQuads;
@property BOOL includeQuads;
@property BOOL hasExcludeAddressInResults;
@property BOOL excludeAddressInResults;
@property(readonly) unsigned int searchSubstringsCount;
@property(readonly) struct { int x1; int x2; int x3; }* searchSubstrings;
@property BOOL hasIncludeGeoId;
@property BOOL includeGeoId;
@property(readonly) BOOL hasSearchContext;
@property(retain) NSString * searchContext;
@property BOOL hasSearchContextSubstring;
@property struct { int x1; int x2; int x3; } searchContextSubstring;
@property BOOL hasIncludeStatusCodeInfo;
@property BOOL includeStatusCodeInfo;
@property(readonly) BOOL hasPreserveFields;
@property(retain) GEOAddress * preserveFields;
@property BOOL hasIncludeUnmatchedStrings;
@property BOOL includeUnmatchedStrings;
@property(readonly) BOOL hasIndexFilter;
@property(retain) GEOIndexQueryNode * indexFilter;
@property BOOL hasIncludeFeatureSets;
@property BOOL includeFeatureSets;
@property(retain) NSMutableArray * serviceTags;
@property BOOL hasIntersectingGeoId;
@property unsigned long long intersectingGeoId;
@property(readonly) BOOL hasKnownLocation;
@property(retain) GEOLatLng * knownLocation;
@property BOOL hasKnownAccuracy;
@property int knownAccuracy;
@property BOOL hasIncludeRevgeoRequestTemplate;
@property BOOL includeRevgeoRequestTemplate;
@property BOOL hasIncludeMatchedToken;
@property BOOL includeMatchedToken;
@property BOOL hasSearchSource;
@property int searchSource;
@property(readonly) unsigned int optionalSuppressionReasonsCount;
@property(readonly) int* optionalSuppressionReasons;


- (void)setLocation:(id)arg1;
- (id)search;
- (BOOL)hasLocation;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (id)mapRegion;
- (void)setAdditionalPlaceTypes:(int*)arg1 count:(unsigned int)arg2;
- (id)address;
- (BOOL)hasAddress;
- (BOOL)isEqualForHistoryToRequest:(id)arg1;
- (id)initWithTraits:(id)arg1 localSearchProviderID:(int)arg2 maxResults:(int)arg3;
- (id)initWithTraits:(id)arg1 localSearchProviderID:(int)arg2;
- (id)initWithTraits:(id)arg1 includeEntryPoints:(BOOL)arg2 localSearchProviderID:(int)arg3;
- (int)searchSource;
- (BOOL)includeMatchedToken;
- (BOOL)includeRevgeoRequestTemplate;
- (id)knownLocation;
- (unsigned long long)intersectingGeoId;
- (BOOL)includeFeatureSets;
- (id)indexFilter;
- (BOOL)includeUnmatchedStrings;
- (id)preserveFields;
- (BOOL)includeStatusCodeInfo;
- (struct { int x1; int x2; int x3; })searchContextSubstring;
- (id)searchContext;
- (BOOL)includeGeoId;
- (BOOL)excludeAddressInResults;
- (BOOL)includeQuads;
- (BOOL)includeTravelDistance;
- (BOOL)isStrictGeocoding;
- (int)placeTypeLimit;
- (id)suggestionsOptions;
- (int)transportTypeForTravelTimes;
- (BOOL)includeTravelTime;
- (id)deviceTimeZone;
- (BOOL)includeSpokenNames;
- (double)timeSinceMapViewportChanged;
- (double)timeSinceMapEnteredForeground;
- (BOOL)isFromAPI;
- (id)deviceLocation;
- (id)deviceCountryCode;
- (id)suggestionsPrefix;
- (BOOL)structuredSearch;
- (BOOL)includeSuggestionsOnly;
- (id)businessOptions;
- (BOOL)includeEntryPoints;
- (BOOL)isStrictMapRegion;
- (id)filterByBusinessCategorys;
- (int)maxBusinessReviews;
- (BOOL)includeBusinessCategories;
- (BOOL)includeBusinessRating;
- (int)businessSortOrder;
- (struct { unsigned long long x1; unsigned long long x2; })sessionGUID;
- (BOOL)includePhonetics;
- (void)setOptionalSuppressionReasons:(int*)arg1 count:(unsigned int)arg2;
- (int*)optionalSuppressionReasons;
- (BOOL)hasSearchSource;
- (void)setHasSearchSource:(BOOL)arg1;
- (void)setSearchSource:(int)arg1;
- (BOOL)hasIncludeMatchedToken;
- (void)setHasIncludeMatchedToken:(BOOL)arg1;
- (void)setIncludeMatchedToken:(BOOL)arg1;
- (BOOL)hasIncludeRevgeoRequestTemplate;
- (void)setHasIncludeRevgeoRequestTemplate:(BOOL)arg1;
- (void)setIncludeRevgeoRequestTemplate:(BOOL)arg1;
- (BOOL)hasKnownLocation;
- (BOOL)hasIntersectingGeoId;
- (void)setHasIntersectingGeoId:(BOOL)arg1;
- (void)setIntersectingGeoId:(unsigned long long)arg1;
- (BOOL)hasIncludeFeatureSets;
- (void)setHasIncludeFeatureSets:(BOOL)arg1;
- (void)setIncludeFeatureSets:(BOOL)arg1;
- (BOOL)hasIndexFilter;
- (BOOL)hasIncludeUnmatchedStrings;
- (void)setHasIncludeUnmatchedStrings:(BOOL)arg1;
- (void)setIncludeUnmatchedStrings:(BOOL)arg1;
- (BOOL)hasPreserveFields;
- (BOOL)hasIncludeStatusCodeInfo;
- (void)setHasIncludeStatusCodeInfo:(BOOL)arg1;
- (void)setIncludeStatusCodeInfo:(BOOL)arg1;
- (BOOL)hasSearchContextSubstring;
- (void)setHasSearchContextSubstring:(BOOL)arg1;
- (void)setSearchContextSubstring:(struct { int x1; int x2; int x3; })arg1;
- (BOOL)hasSearchContext;
- (BOOL)hasIncludeGeoId;
- (void)setHasIncludeGeoId:(BOOL)arg1;
- (void)setIncludeGeoId:(BOOL)arg1;
- (void)setSearchSubstrings:(struct { int x1; int x2; int x3; }*)arg1 count:(unsigned int)arg2;
- (struct { int x1; int x2; int x3; }*)searchSubstrings;
- (BOOL)hasExcludeAddressInResults;
- (void)setHasExcludeAddressInResults:(BOOL)arg1;
- (void)setExcludeAddressInResults:(BOOL)arg1;
- (BOOL)hasIncludeQuads;
- (void)setHasIncludeQuads:(BOOL)arg1;
- (void)setIncludeQuads:(BOOL)arg1;
- (BOOL)hasIncludeTravelDistance;
- (void)setHasIncludeTravelDistance:(BOOL)arg1;
- (void)setIncludeTravelDistance:(BOOL)arg1;
- (BOOL)hasIsStrictGeocoding;
- (void)setHasIsStrictGeocoding:(BOOL)arg1;
- (void)setIsStrictGeocoding:(BOOL)arg1;
- (BOOL)hasPlaceTypeLimit;
- (void)setHasPlaceTypeLimit:(BOOL)arg1;
- (void)setPlaceTypeLimit:(int)arg1;
- (BOOL)hasSuggestionsOptions;
- (BOOL)hasTransportTypeForTravelTimes;
- (void)setHasTransportTypeForTravelTimes:(BOOL)arg1;
- (void)setTransportTypeForTravelTimes:(int)arg1;
- (BOOL)hasIncludeTravelTime;
- (void)setHasIncludeTravelTime:(BOOL)arg1;
- (void)setIncludeTravelTime:(BOOL)arg1;
- (BOOL)hasDeviceTimeZone;
- (BOOL)hasIncludeSpokenNames;
- (void)setHasIncludeSpokenNames:(BOOL)arg1;
- (void)setIncludeSpokenNames:(BOOL)arg1;
- (BOOL)hasTimeSinceMapViewportChanged;
- (void)setHasTimeSinceMapViewportChanged:(BOOL)arg1;
- (void)setTimeSinceMapViewportChanged:(double)arg1;
- (BOOL)hasTimeSinceMapEnteredForeground;
- (void)setHasTimeSinceMapEnteredForeground:(BOOL)arg1;
- (void)setTimeSinceMapEnteredForeground:(double)arg1;
- (BOOL)hasIsFromAPI;
- (void)setHasIsFromAPI:(BOOL)arg1;
- (void)setIsFromAPI:(BOOL)arg1;
- (BOOL)hasSequenceNumber;
- (void)setHasSequenceNumber:(BOOL)arg1;
- (void)setSequenceNumber:(int)arg1;
- (BOOL)hasDeviceLocation;
- (BOOL)hasDeviceCountryCode;
- (BOOL)hasSuggestionsPrefix;
- (BOOL)hasStructuredSearch;
- (void)setHasStructuredSearch:(BOOL)arg1;
- (void)setStructuredSearch:(BOOL)arg1;
- (BOOL)hasIncludeSuggestionsOnly;
- (void)setHasIncludeSuggestionsOnly:(BOOL)arg1;
- (void)setIncludeSuggestionsOnly:(BOOL)arg1;
- (BOOL)hasBusinessOptions;
- (BOOL)hasIncludeEntryPoints;
- (void)setHasIncludeEntryPoints:(BOOL)arg1;
- (void)setIncludeEntryPoints:(BOOL)arg1;
- (BOOL)hasIsStrictMapRegion;
- (void)setHasIsStrictMapRegion:(BOOL)arg1;
- (void)setIsStrictMapRegion:(BOOL)arg1;
- (BOOL)hasMaxBusinessReviews;
- (void)setHasMaxBusinessReviews:(BOOL)arg1;
- (void)setMaxBusinessReviews:(int)arg1;
- (BOOL)hasIncludeBusinessCategories;
- (void)setHasIncludeBusinessCategories:(BOOL)arg1;
- (void)setIncludeBusinessCategories:(BOOL)arg1;
- (BOOL)hasIncludeBusinessRating;
- (void)setHasIncludeBusinessRating:(BOOL)arg1;
- (void)setIncludeBusinessRating:(BOOL)arg1;
- (BOOL)hasBusinessSortOrder;
- (void)setHasBusinessSortOrder:(BOOL)arg1;
- (void)setBusinessSortOrder:(int)arg1;
- (BOOL)hasSessionGUID;
- (void)setHasSessionGUID:(BOOL)arg1;
- (void)setSessionGUID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (BOOL)hasMaxResults;
- (void)setHasMaxResults:(BOOL)arg1;
- (BOOL)hasIncludePhonetics;
- (void)setHasIncludePhonetics:(BOOL)arg1;
- (void)setIncludePhonetics:(BOOL)arg1;
- (int*)additionalPlaceTypes;
- (BOOL)hasSearch;
- (void)setBusinessIDs:(unsigned long long*)arg1 count:(unsigned int)arg2;
- (unsigned long long*)businessIDs;
- (void)addOptionalSuppressionReason:(int)arg1;
- (int)optionalSuppressionReasonAtIndex:(unsigned int)arg1;
- (void)clearOptionalSuppressionReasons;
- (unsigned int)optionalSuppressionReasonsCount;
- (void)addSearchSubstring:(struct { int x1; int x2; int x3; })arg1;
- (struct { int x1; int x2; int x3; })searchSubstringAtIndex:(unsigned int)arg1;
- (unsigned int)searchSubstringsCount;
- (id)filterByBusinessCategoryAtIndex:(unsigned int)arg1;
- (void)clearFilterByBusinessCategorys;
- (unsigned int)filterByBusinessCategorysCount;
- (void)addAdditionalPlaceType:(int)arg1;
- (int)additionalPlaceTypeAtIndex:(unsigned int)arg1;
- (void)clearAdditionalPlaceTypes;
- (unsigned int)additionalPlaceTypesCount;
- (unsigned long long)businessIDAtIndex:(unsigned int)arg1;
- (void)clearBusinessIDs;
- (unsigned int)businessIDsCount;
- (void)addFilterByBusinessCategory:(id)arg1;
- (void)setKnownLocation:(id)arg1;
- (void)setIndexFilter:(id)arg1;
- (void)setPreserveFields:(id)arg1;
- (void)setSearchContext:(id)arg1;
- (void)clearSearchSubstrings;
- (void)setSuggestionsOptions:(id)arg1;
- (void)setDeviceTimeZone:(id)arg1;
- (void)setDeviceLocation:(id)arg1;
- (void)setDeviceCountryCode:(id)arg1;
- (void)setSuggestionsPrefix:(id)arg1;
- (void)setBusinessOptions:(id)arg1;
- (void)setFilterByBusinessCategorys:(id)arg1;
- (void)setSearch:(id)arg1;
- (BOOL)suppressResultsRequiringAttribution;
- (BOOL)hasSuppressResultsRequiringAttribution;
- (void)setHasSuppressResultsRequiringAttribution:(BOOL)arg1;
- (void)setSuppressResultsRequiringAttribution:(BOOL)arg1;
- (id)phoneticLocaleIdentifier;
- (BOOL)hasPhoneticLocaleIdentifier;
- (id)inputLanguage;
- (BOOL)hasInputLanguage;
- (long long)geoId;
- (int)localSearchProviderID;
- (BOOL)hasGeoId;
- (void)setHasGeoId:(BOOL)arg1;
- (void)setGeoId:(long long)arg1;
- (BOOL)hasLocalSearchProviderID;
- (void)setHasLocalSearchProviderID:(BOOL)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setPhoneticLocaleIdentifier:(id)arg1;
- (void)setInputLanguage:(id)arg1;
- (id)serviceTags;
- (id)clientCapabilities;
- (BOOL)hasClientCapabilities;
- (id)serviceTagAtIndex:(unsigned int)arg1;
- (void)clearServiceTags;
- (unsigned int)serviceTagsCount;
- (void)addServiceTag:(id)arg1;
- (void)setServiceTags:(id)arg1;
- (void)setClientCapabilities:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (id)initWithPlace:(id)arg1;
- (void)addBusinessID:(unsigned long long)arg1;
- (int)knownAccuracy;
- (BOOL)hasKnownAccuracy;
- (void)setHasKnownAccuracy:(BOOL)arg1;
- (void)setKnownAccuracy:(int)arg1;
- (BOOL)hasMapRegion;
- (id)zilchPoints;
- (BOOL)hasZilchPoints;
- (void)setZilchPoints:(id)arg1;
- (BOOL)hasTimestamp;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (id)dictionaryRepresentation;
- (id)location;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (int)maxResults;
- (int)sequenceNumber;
- (void)setMaxResults:(int)arg1;
- (void)setAddress:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (void)_applyDisplayableSearchProperties;
- (id)initWithGEOAddress:(id)arg1;
- (id)initWithBusinessID:(unsigned long long)arg1;
- (void)_applyBasicSearchProperties:(BOOL)arg1;

@end
