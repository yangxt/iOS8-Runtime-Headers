/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, _EditScriptRangedAtom;

@interface _EditScriptRanged : _EditScript  {
    int _options;
    _EditScriptRangedAtom *_currentScriptAtom;
}

@property(readonly) NSString * stringA;
@property(readonly) NSString * stringB;

+ (id)editScriptForSmallestSingleEditFromString:(id)arg1 toString:(id)arg2;
+ (id)editScriptFromString:(id)arg1 toString:(id)arg2;
+ (id)editScriptFromString:(id)arg1 toString:(id)arg2 chunkSize:(int)arg3 orderAtomsAscending:(BOOL)arg4 operationPrecedence:(int)arg5 options:(int)arg6;

- (id)applyToString:(id)arg1;
- (id)stringB;
- (id)stringA;
- (void)computeSmallestSingleEdit;
- (void)removeAnyOverlapBetweenIndexOfFirstDifference:(int*)arg1 andReverseIndexOfLastDifference:(int*)arg2 shouldShortenFirstDifference:(BOOL)arg3;
- (id)initWithOperationPrecedence:(int)arg1 dataClass:(Class)arg2 chunkSize:(int)arg3 stringA:(id)arg4 stringB:(id)arg5 orderAtomsAscending:(BOOL)arg6 options:(int)arg7;
- (void)addToCurrentScriptAtomEditOperation:(int)arg1 editIndex:(unsigned int)arg2 newText:(id)arg3 indexInArrayB:(unsigned int)arg4;
- (void)initializeCurrentScriptAtom;
- (void)finalizeCurrentScriptAtom;
- (void)dealloc;

@end
