/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, MPPMediaPredicateValue;

@interface MPPPropertyPredicate : PBCodable <NSCopying> {
    int _comparisonType;
    NSString *_property;
    MPPMediaPredicateValue *_value;
    struct { 
        unsigned int comparisonType : 1; 
    } _has;
}

@property(readonly) BOOL hasProperty;
@property(retain) NSString * property;
@property(readonly) BOOL hasValue;
@property(retain) MPPMediaPredicateValue * value;
@property BOOL hasComparisonType;
@property int comparisonType;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setProperty:(id)arg1;
- (id)property;
- (BOOL)hasValue;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)value;
- (void)setValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)setHasComparisonType:(BOOL)arg1;
- (BOOL)hasComparisonType;
- (BOOL)hasProperty;
- (void)setComparisonType:(int)arg1;
- (int)comparisonType;

@end
