/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTable, OADTableRow;

@interface PMTableRowMapper : CMMapper  {
    OADTable *mTable;
    OADTableRow *mRow;
    unsigned int mRowIndex;
}


- (id)initWithOadTable:(id)arg1 rowIndex:(unsigned int)arg2 parent:(id)arg3;
- (unsigned int)cellCount;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (float)height;

@end
