/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface EDBuildableFormula : NSObject <EDFormulaBuilding> {
    struct EDBuildablePtg { int (**x1)(); char *x2; int x3; unsigned int x4; unsigned short x5; struct EDBuildablePtg {} *x6; struct EDBuildablePtg {} *x7; boolx8; int x9; unsigned short x10; unsigned short x11; } *mTree;
    int mWarning;
}


- (unsigned int)removeOptionalPtgArgs:(unsigned int)arg1 minArgs:(unsigned int)arg2;
- (BOOL)insertVariableFunction:(unsigned short)arg1 afterIndex:(unsigned int)arg2 numArgs:(unsigned int)arg3;
- (BOOL)replaceArgPtgAtIndex:(unsigned int)arg1 withFormula:(id)arg2;
- (int)argTokenTypeAtIndex:(unsigned int)arg1;
- (bool)argTokenIsDurationAtIndex:(unsigned int)arg1;
- (BOOL)copyToken:(unsigned int)arg1 from:(id)arg2;
- (void)copyToFormula:(id)arg1;
- (BOOL)convertRefs:(unsigned int)arg1 toType:(int)arg2;
- (BOOL)fixTableOfConstantsRef:(struct EDBuildablePtg { int (**x1)(); char *x2; int x3; unsigned int x4; unsigned short x5; struct EDBuildablePtg {} *x6; struct EDBuildablePtg {} *x7; boolx8; int x9; unsigned short x10; unsigned short x11; }*)arg1;
- (BOOL)shrinkSpanningRef:(struct EDBuildablePtg { int (**x1)(); char *x2; int x3; unsigned int x4; unsigned short x5; struct EDBuildablePtg {} *x6; struct EDBuildablePtg {} *x7; boolx8; int x9; unsigned short x10; unsigned short x11; }*)arg1;
- (void)convertRefsInList:(struct EDBuildablePtg { int (**x1)(); char *x2; int x3; unsigned int x4; unsigned short x5; struct EDBuildablePtg {} *x6; struct EDBuildablePtg {} *x7; boolx8; int x9; unsigned short x10; unsigned short x11; }*)arg1 toType:(int)arg2;
- (BOOL)convertRefs:(unsigned int)arg1 toTypes:(int*)arg2;
- (BOOL)makeArrayForLastToken:(unsigned int)arg1;
- (BOOL)insertName:(unsigned int)arg1 link:(unsigned int)arg2 external:(BOOL)arg3 atIndex:(unsigned int)arg4;
- (struct EDBuildablePtg { int (**x1)(); char *x2; int x3; unsigned int x4; unsigned short x5; struct EDBuildablePtg {} *x6; struct EDBuildablePtg {} *x7; boolx8; int x9; unsigned short x10; unsigned short x11; }*)tokenAtIndex:(unsigned int)arg1 previousToken:(struct EDBuildablePtg {}**)arg2;
- (BOOL)uppercaseArgAtIndex:(unsigned int)arg1;
- (BOOL)fixTableOfConstantsRefs;
- (BOOL)wrapArgumentsWithOperator:(int)arg1 argumentCount:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (BOOL)addInfixOperator:(int)arg1 atIndex:(unsigned int)arg2 factor:(double)arg3;
- (BOOL)shrinkSpanningRefAtArgIndex:(unsigned int)arg1;
- (void)markLastTokenAsSpanningRefVertically:(BOOL)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3;
- (void)markLastTokenAsDuration;
- (id)lastTokenRefOrArea3dLinkRefIsValid:(BOOL*)arg1 withEDLinks:(id)arg2;
- (BOOL)convertLastRefsToArea;
- (BOOL)convertToIntersect:(unsigned int)arg1;
- (BOOL)convertToList:(unsigned int)arg1;
- (BOOL)addArrayWithCol:(int)arg1 andRow:(int)arg2;
- (BOOL)insertExternalName:(unsigned int)arg1 withLink:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (BOOL)insertName:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 numArgs:(int)arg3;
- (BOOL)convertToList:(unsigned int)arg1 withFinalParen:(BOOL)arg2;
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)removeTokenAtIndex:(unsigned int)arg1;
- (int)warningType;
- (struct EDBuildablePtg { int (**x1)(); char *x2; int x3; unsigned int x4; unsigned short x5; struct EDBuildablePtg {} *x6; struct EDBuildablePtg {} *x7; boolx8; int x9; unsigned short x10; unsigned short x11; }*)tokenAtIndex:(unsigned int)arg1;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2;
- (void)setWarning:(int)arg1;
- (bool)isSupportedFormula;
- (int)tokenTypeAtIndex:(unsigned int)arg1;
- (id)formula;
- (void)dealloc;

@end
