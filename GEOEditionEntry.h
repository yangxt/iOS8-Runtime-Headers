/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOEditionEntry : NSObject  {
    unsigned int _tileset;
    unsigned int _edition;
    unsigned int _provider;
    BOOL _invalidateOnly;
}

@property unsigned int tileset;
@property unsigned int edition;
@property unsigned int provider;
@property BOOL invalidateOnly;


- (void)setInvalidateOnly:(BOOL)arg1;
- (BOOL)invalidateOnly;
- (void)setEdition:(unsigned int)arg1;
- (void)setTileset:(unsigned int)arg1;
- (unsigned int)tileset;
- (unsigned int)edition;
- (unsigned int)provider;
- (void)setProvider:(unsigned int)arg1;

@end