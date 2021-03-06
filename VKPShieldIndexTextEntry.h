/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString, NSMutableArray;

@interface VKPShieldIndexTextEntry : PBCodable <NSCopying> {
    NSString *_artworkIdentifier;
    NSMutableArray *_shieldTexts;
    int _shieldType;
    struct { 
        unsigned int shieldType : 1; 
    } _has;
}

@property(readonly) BOOL hasArtworkIdentifier;
@property(retain) NSString * artworkIdentifier;
@property BOOL hasShieldType;
@property int shieldType;
@property(retain) NSMutableArray * shieldTexts;


- (BOOL)hasShieldType;
- (void)setHasShieldType:(BOOL)arg1;
- (void)setShieldType:(int)arg1;
- (id)shieldTextAtIndex:(unsigned int)arg1;
- (void)clearShieldTexts;
- (unsigned int)shieldTextsCount;
- (void)addShieldText:(id)arg1;
- (void)setShieldTexts:(id)arg1;
- (BOOL)hasArtworkIdentifier;
- (void)setArtworkIdentifier:(id)arg1;
- (id)shieldTexts;
- (int)shieldType;
- (id)artworkIdentifier;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
