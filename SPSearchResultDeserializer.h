/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPSearchResultDeserializer : PBDataReader  {
    unsigned int _byteVector;
    BOOL _munmapAtDealloc;
}


- (id)initWithSerializer:(id)arg1;
- (id)initWithMallocRegion:(unsigned int)arg1 length:(unsigned long)arg2;
- (id)initWithMappedRegion:(unsigned int)arg1 length:(unsigned long)arg2;
- (BOOL)deserializeNextSection:(id*)arg1;
- (void)dealloc;

@end