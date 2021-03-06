/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@class MIPMultiverseIdentifier;

@interface _MPUProtoBufUserActivityContainerItem : PBCodable <NSCopying> {
    int _containerItemType;
    MIPMultiverseIdentifier *_selectedMultiverseIdentifier;
    MIPMultiverseIdentifier *_visualReferenceMultiverseIdentifier;
    struct { 
        unsigned int containerItemType : 1; 
    } _has;
}

@property BOOL hasContainerItemType;
@property int containerItemType;
@property(readonly) BOOL hasSelectedMultiverseIdentifier;
@property(retain) MIPMultiverseIdentifier * selectedMultiverseIdentifier;
@property(readonly) BOOL hasVisualReferenceMultiverseIdentifier;
@property(retain) MIPMultiverseIdentifier * visualReferenceMultiverseIdentifier;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)containerItemType;
- (id)visualReferenceMultiverseIdentifier;
- (id)selectedMultiverseIdentifier;
- (BOOL)hasVisualReferenceMultiverseIdentifier;
- (BOOL)hasSelectedMultiverseIdentifier;
- (BOOL)hasContainerItemType;
- (void)setHasContainerItemType:(BOOL)arg1;
- (void)setContainerItemType:(int)arg1;
- (void)setVisualReferenceMultiverseIdentifier:(id)arg1;
- (void)setSelectedMultiverseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
