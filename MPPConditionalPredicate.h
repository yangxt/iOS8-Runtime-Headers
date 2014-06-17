/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPPMediaPredicate;

@interface MPPConditionalPredicate : PBCodable <NSCopying> {
    MPPMediaPredicate *_conditionalPredicate;
    MPPMediaPredicate *_elsePredicate;
    MPPMediaPredicate *_thenPredicate;
}

@property(readonly) BOOL hasConditionalPredicate;
@property(retain) MPPMediaPredicate * conditionalPredicate;
@property(readonly) BOOL hasThenPredicate;
@property(retain) MPPMediaPredicate * thenPredicate;
@property(readonly) BOOL hasElsePredicate;
@property(retain) MPPMediaPredicate * elsePredicate;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)elsePredicate;
- (id)thenPredicate;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)setElsePredicate:(id)arg1;
- (void)setThenPredicate:(id)arg1;
- (void)setConditionalPredicate:(id)arg1;
- (BOOL)hasElsePredicate;
- (BOOL)hasThenPredicate;
- (BOOL)hasConditionalPredicate;
- (id)conditionalPredicate;

@end