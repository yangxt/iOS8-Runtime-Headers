/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class NSMutableArray;

@interface SPSearchResultSerializer : NSObject  {
    unsigned int _byteVector;
    unsigned int _byteVectorCnt;
    unsigned int _byteVectorCapacity;
    NSMutableArray *_sections;
    Class _lastResultClass;
    BOOL _respondsToTitleUTF8String;
    BOOL _respondsToSubtitleUTF8String;
    BOOL _respondsToAuxiliaryTitleUTF8String;
    BOOL _respondsToAuxiliarySubtitleUTF8String;
    BOOL _respondsToSummaryUTF8String;
    BOOL _respondsToIdentifier;
    BOOL _respondsToURL;
    BOOL _respondsToBadgeValue;
    BOOL _inProc;
    BOOL _completed;
}

@property(readonly) BOOL completed;


- (unsigned int)byteVector;
- (unsigned int)byteVectorCount;
- (BOOL)appendResult:(id)arg1;
- (BOOL)appendSection:(id)arg1;
- (id)initWithInitialCapacity:(unsigned int)arg1;
- (unsigned int)_allocateSize:(unsigned int)arg1;
- (BOOL)appendResult:(id)arg1 toSection:(id)arg2;
- (id)_convertConformingResult:(id)arg1;
- (id)initWithInitialCapacity:(unsigned int)arg1 inProc:(BOOL)arg2;
- (void)serialize;
- (unsigned int)sectionCount;
- (void)dealloc;
- (id)init;
- (BOOL)completed;

@end