/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCHStyleSemanticTag;

@interface TSCHSemanticTagAndPropertyPair : NSObject <NSCopying> {
    TSCHStyleSemanticTag *mSemanticTag;
    int mProperty;
}

+ (id)pairWithSemanticTag:(id)arg1 property:(int)arg2;

- (int)property;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithSemanticTag:(id)arg1 property:(int)arg2;
- (id)semanticTag;

@end