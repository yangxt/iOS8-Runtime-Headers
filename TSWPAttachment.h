/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSWPStorage;

@interface TSWPAttachment : TSPObject <TSKDocumentObject, TSDOwningAttachment, TSPCopying> {
    TSWPStorage *_parentStorage;
}

@property TSWPStorage * parentStorage;
@property(readonly) BOOL isDrawable;
@property(readonly) BOOL isAnchored;
@property(readonly) BOOL isPartitioned;
@property(readonly) BOOL isAttachedToBodyText;
@property(readonly) Class positionerClass;
@property(readonly) BOOL isSearchable;
@property(readonly) BOOL specifiesEnabledKnobMask;
@property(readonly) unsigned long long enabledKnobMask;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (int)attributeArrayKind;

- (int)elementKind;
- (BOOL)isSearchable;
- (id)initWithContext:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isDrawable;
- (id)topLevelAttachment;
- (BOOL)isPartitioned;
- (void)setParentStorage:(id)arg1;
- (unsigned int)findCharIndex;
- (id)parentStorage;
- (BOOL)changesWithPageCount;
- (BOOL)changesWithPageNumber;
- (void)infoChanged;
- (BOOL)specifiesEnabledKnobMask;
- (unsigned long long)enabledKnobMask;
- (BOOL)isAnchored;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (Class)positionerClass;
- (BOOL)isAttachedToBodyText;
- (id)copyWithContext:(id)arg1;

@end