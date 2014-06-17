/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSWPStorage, NSMutableArray, NSCharacterSet;

@interface TSWPStorageIterator : NSObject  {
    TSWPStorage *_storage;
    unsigned int _charIndex;
    unsigned int _startCharIndex;
    NSMutableArray *_rangeProviders;
    NSMutableArray *_locationProviders;
    NSMutableArray *_pendingEvents;
    BOOL _sendEventsForNilObjects;
    BOOL _lastEventWasMarker;
    NSCharacterSet *_markers;
}

@property(retain) NSCharacterSet * markers;


- (id)description;
- (void)dealloc;
- (void)setMarkers:(id)arg1;
- (id)markers;
- (id)nextEvent;
- (void)addLocationProvider:(id)arg1;
- (void)addAttributeRangeProvider:(int)arg1;
- (void)p_forceRangeEndForProvider:(id)arg1 providerIndex:(unsigned int)arg2 atCharIndex:(unsigned int)arg3;
- (void)p_emitEventForMarkerCharacter:(unsigned short)arg1 atIndex:(unsigned int)arg2;
- (void)p_emitEventWithType:(int)arg1 provider:(id)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 object:(id)arg4;
- (void)p_emitPendingCharactersAndEvent:(id)arg1;
- (void)addRangeProvider:(id)arg1;
- (id)initWithStorage:(id)arg1;

@end