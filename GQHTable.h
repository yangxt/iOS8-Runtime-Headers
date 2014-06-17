/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHTable : GQHGraphicStyle <GQTableGenerator> {
}

+ (const char *)name;
+ (id)mapBaseFillStyleForRowIndex:(unsigned short)arg1 columnIndex:(unsigned short)arg2 state:(id)arg3 isGroupingCell:(BOOL)arg4;
+ (void)mapCellStyle:(id)arg1 rowIndex:(unsigned short)arg2 rowSpan:(unsigned short)arg3 columnIndex:(unsigned short)arg4 columnSpan:(unsigned short)arg5 state:(id)arg6 cell:(id)arg7 level:(unsigned short)arg8;
+ (unsigned short)resolveGroupLevel:(id)arg1 model:(id)arg2 columnIndex:(int)arg3 tableState:(id)arg4;
+ (void)startTableWithTableAnchor:(struct __CFString { }*)arg1 tableHeight:(float)arg2 state:(id)arg3;
+ (struct __CFString { }*)createTableAttachmentIdWithNumber:(long)arg1;
+ (void)addMissingCellsUpToRowIndex:(unsigned short)arg1 columnIndex:(unsigned short)arg2 state:(id)arg3;
+ (void)beginRowWithIndex:(unsigned short)arg1 state:(id)arg2;
+ (void)addMissingCellWithRowIndex:(unsigned short)arg1 columnIndex:(unsigned short)arg2 state:(id)arg3;
+ (void)mapVectorStyles:(id*)arg1 toCellStyle:(id)arg2 state:(id)arg3;
+ (void)getVectorStylesForRowIndex:(unsigned short)arg1 rowSpan:(unsigned short)arg2 columnIndex:(unsigned short)arg3 columnSpan:(unsigned short)arg4 vectorStyles:(id*)arg5 state:(id)arg6;
+ (void)splitTable:(id)arg1;
+ (int)mapCellContent:(id)arg1 xml:(id)arg2 state:(id)arg3;
+ (int)endTable:(id)arg1 state:(id)arg2;
+ (int)endCells:(id)arg1 state:(id)arg2;
+ (int)handleCell:(id)arg1 state:(id)arg2;
+ (int)beginCells:(id)arg1 state:(id)arg2;
+ (int)beginTable:(id)arg1 state:(id)arg2;


@end