/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MIPSmartPlaylistInfo, NSMutableArray, NSString;

@interface MIPPlaylist : PBCodable <NSCopying> {
    long long _storeId;
    NSMutableArray *_childPlaylists;
    NSMutableArray *_items;
    NSString *_name;
    MIPSmartPlaylistInfo *_smartPlaylistInfo;
    int _type;
    BOOL _hidden;
    struct { 
        unsigned int storeId : 1; 
        unsigned int type : 1; 
        unsigned int hidden : 1; 
    } _has;
}

@property(readonly) BOOL hasName;
@property(retain) NSString * name;
@property BOOL hasStoreId;
@property long long storeId;
@property BOOL hasType;
@property int type;
@property BOOL hasHidden;
@property BOOL hidden;
@property(readonly) BOOL hasSmartPlaylistInfo;
@property(retain) MIPSmartPlaylistInfo * smartPlaylistInfo;
@property(retain) NSMutableArray * childPlaylists;
@property(retain) NSMutableArray * items;


- (BOOL)hidden;
- (BOOL)hasName;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setChildPlaylists:(id)arg1;
- (id)childPlaylists;
- (id)smartPlaylistInfo;
- (BOOL)hasSmartPlaylistInfo;
- (BOOL)hasHidden;
- (void)setHasHidden:(BOOL)arg1;
- (BOOL)hasType;
- (void)setHasType:(BOOL)arg1;
- (id)itemsAtIndex:(unsigned int)arg1;
- (void)clearItems;
- (id)childPlaylistsAtIndex:(unsigned int)arg1;
- (void)clearChildPlaylists;
- (unsigned int)childPlaylistsCount;
- (void)setSmartPlaylistInfo:(id)arg1;
- (void)addChildPlaylists:(id)arg1;
- (long long)storeId;
- (BOOL)hasStoreId;
- (void)setHasStoreId:(BOOL)arg1;
- (void)setStoreId:(long long)arg1;
- (unsigned int)itemsCount;
- (void).cxx_destruct;
- (void)addItems:(id)arg1;
- (id)dictionaryRepresentation;
- (void)setItems:(id)arg1;
- (id)items;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;

@end
