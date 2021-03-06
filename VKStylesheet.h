/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableDictionary, NSString, NSObject<OS_dispatch_queue>, VKStylesheetVendor, NSMutableArray, VKPGlobalProperties;

@interface VKStylesheet : NSObject  {
    NSString *_sheetName;
    float _scale;
    float _ppi;
    int _targetDisplay;
    VKStylesheetVendor *_stylesheetVendor;
    NSMutableArray *_inheritance;
    int _rasterPolygonChangeoverZ;
    VKPGlobalProperties *_styleGlobalProperties;
    BOOL _supportsNightMode;
    BOOL _supportsRouteMode;
    struct StyleMatchingTree { int x1; struct unordered_map<unsigned long long, md::StyleMatchingTree *, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, md::StyleMatchingTree *> > > { struct __hash_table<std::__1::__hash_value_type<unsigned long long, md::StyleMatchingTree *>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, md::StyleMatchingTree *>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, md::StyleMatchingTree *>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, md::StyleMatchingTree *> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::StyleMatchingTree *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::StyleMatchingTree *>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::StyleMatchingTree *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::StyleMatchingTree *>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<unsigned long long, md::StyleMatchingTree *>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::StyleMatchingTree *>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::StyleMatchingTree *>, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::StyleMatchingTree *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::StyleMatchingTree *>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, md::StyleMatchingTree *>, void *> *> { struct __hash_node<std::__1::__hash_value_type<unsigned long long, md::StyleMatchingTree *>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, md::StyleMatchingTree *>, std::__1::hash<unsigned long long>, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, md::StyleMatchingTree *>, std::__1::equal_to<unsigned long long>, true> > { float x_4_3_1; } x_1_2_4; } x_2_1_1; } x2; struct _retain_ptr<VKCartoStyle *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { int (**x_3_1_1)(); id x_3_1_2; struct _retain_objc { } x_3_1_3; struct _release_objc { } x_3_1_4; } x3; unsigned int x4; } *_matchingTree;
    struct vector<md::StyleMatchingTree *, std::__1::allocator<md::StyleMatchingTree *> > { 
        struct StyleMatchingTree {} **__begin_; 
        struct StyleMatchingTree {} **__end_; 
        struct __compressed_pair<md::StyleMatchingTree **, std::__1::allocator<md::StyleMatchingTree *> > { 
            struct StyleMatchingTree {} **__first_; 
        } __end_cap_; 
    } _matchingTreeSpareMemory;
    NSObject<OS_dispatch_queue> *_resultCacheQueue;
    NSMutableDictionary *_resultCache;
    int _loaded;
    BOOL _isDevResource;
}

@property(readonly) NSString * sheetName;
@property(readonly) BOOL supportsNightMode;
@property(readonly) int rasterPolygonChangeoverZ;
@property(readonly) VKPGlobalProperties * styleGlobalProperties;
@property(readonly) BOOL isDevResource;


- (id)_stylesMatchingAttributes:(id)arg1 clientAttributes:(struct { int x1; int x2; int x3; BOOL x4; id x5; BOOL x6; unsigned int x7; }*)arg2;
- (id)styleMatchingAttributes:(id)arg1 vectorType:(int)arg2 locale:(id)arg3 mapDisplayStyle:(unsigned int)arg4 mapDisplayStyleVariant:(unsigned int)arg5;
- (id)styleForFeatureAttributes:(id)arg1 clientAttributes:(struct { int x1; int x2; int x3; BOOL x4; id x5; BOOL x6; unsigned int x7; }*)arg2;
- (id)initWithName:(id)arg1 scale:(float)arg2 ppi:(float)arg3 targetDisplay:(int)arg4 vendor:(id)arg5 resourceManager:(id)arg6;
- (struct unordered_map<unsigned int, unsigned long long, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long long> > > { struct __hash_table<std::__1::__hash_value_type<unsigned int, unsigned long long>, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned long long>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned long long>, std::__1::equal_to<unsigned int>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned int, unsigned long long> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned long long>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned long long>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned long long>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned long long>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<unsigned int, unsigned long long>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned long long>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned long long>, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned long long>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned long long>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned int, unsigned long long>, void *> *> { struct __hash_node<std::__1::__hash_value_type<unsigned int, unsigned long long>, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned long long>, std::__1::hash<unsigned int>, true> > { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::__hash_value_type<unsigned int, unsigned long long>, std::__1::equal_to<unsigned int>, true> > { float x_4_2_1; } x_1_1_4; } x1; })_attributeMapForAttributes:(id)arg1 clientAttributes:(struct { int x1; int x2; int x3; BOOL x4; id x5; BOOL x6; unsigned int x7; }*)arg2;
- (int)styleAttributeValueForLocalization:(id)arg1;
- (id)styleMatchingAttributes:(id)arg1 vectorType:(int)arg2 locale:(id)arg3 mapDisplayStyle:(unsigned int)arg4 mapDisplayStyleVariant:(unsigned int)arg5 canSelectIcons:(BOOL)arg6 selected:(BOOL)arg7;
- (id)_styleMatchingAttributes:(id)arg1 clientAttributes:(struct { int x1; int x2; int x3; BOOL x4; id x5; BOOL x6; unsigned int x7; }*)arg2;
- (id)initWithData:(id)arg1 forName:(id)arg2 scale:(float)arg3 ppi:(float)arg4 vendor:(id)arg5 targetDisplay:(int)arg6 isDevResource:(BOOL)arg7;
- (int)rasterPolygonChangeoverZ;
- (void)clearCaches;
- (id)styleGlobalProperties;
- (BOOL)supportsNightMode;
- (BOOL)isDevResource;
- (id)sheetName;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (id)init;

@end
