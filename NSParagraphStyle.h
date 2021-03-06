/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSArray;

@interface NSParagraphStyle : NSObject <NSCopying, NSMutableCopying, NSCoding> {
    float _lineSpacing;
    float _paragraphSpacing;
    float _headIndent;
    float _tailIndent;
    float _firstLineHeadIndent;
    float _minimumLineHeight;
    float _maximumLineHeight;
    NSArray *_tabStops;
    struct { 
        unsigned int alignment : 4; 
        unsigned int lineBreakMode : 4; 
        unsigned int tabStopsIsMutable : 1; 
        unsigned int isNaturalDirection : 1; 
        unsigned int rightToLeftDirection : 1; 
        unsigned int fixedMultiple : 2; 
        unsigned int refCount : 19; 
    } _flags;
    float _defaultTabInterval;
    id _extraData;
}

@property(readonly) float lineSpacing;
@property(readonly) float paragraphSpacing;
@property(readonly) int alignment;
@property(readonly) float headIndent;
@property(readonly) float tailIndent;
@property(readonly) float firstLineHeadIndent;
@property(readonly) float minimumLineHeight;
@property(readonly) float maximumLineHeight;
@property(readonly) int lineBreakMode;
@property(readonly) int baseWritingDirection;
@property(readonly) float lineHeightMultiple;
@property(readonly) float paragraphSpacingBefore;
@property(readonly) float hyphenationFactor;
@property(copy,readonly) NSArray * tabStops;
@property(readonly) float defaultTabInterval;

+ (int)_defaultWritingDirection;
+ (id)defaultParagraphStyle;
+ (void)initialize;
+ (int)defaultWritingDirectionForLanguage:(id)arg1;

- (id)tabStops;
- (id)textLists;
- (float)headIndent;
- (BOOL)_isSuitableForFastStringDrawingWithAlignment:(int*)arg1 lineBreakMode:(int*)arg2 tighteningFactorForTruncation:(float*)arg3;
- (void)_deallocExtraData;
- (id)_initWithParagraphStyle:(id)arg1;
- (float)defaultTabInterval;
- (float)tailIndent;
- (float)paragraphSpacing;
- (int)headerLevel;
- (float)paragraphSpacingBefore;
- (void)_allocExtraData;
- (float)lineHeightMultiple;
- (float)tighteningFactorForTruncation;
- (float)hyphenationFactor;
- (float)firstLineHeadIndent;
- (id)textBlocks;
- (int)baseWritingDirection;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (float)lineSpacing;
- (float)maximumLineHeight;
- (float)minimumLineHeight;
- (int)lineBreakMode;
- (int)alignment;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)init;
- (int)_ui_resolvedTextAlignment;

@end
