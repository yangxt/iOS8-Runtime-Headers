/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDRowBlock, EDRowBlocks;

@interface EDCellIterator : NSObject  {
    EDRowBlocks *mRowBlocks;
    EDRowBlock *mCurrentRowBlock;
    struct EDRowInfo { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned short x6; unsigned char x7; unsigned int x8 : 1; unsigned int x9 : 1; } *mCurrentRowInfo;
    unsigned int mCurrentRowInfoIndex;
    struct EDCellHeader { unsigned int x1; unsigned int x2; } *mCurrentCell;
    unsigned int mCurrentCellIndex;
    unsigned int mDesiredRowNumber;
    unsigned int mDesiredColumnNumber;
}


- (struct EDCellHeader { unsigned int x1; unsigned int x2; }*)scanToRowNumber:(unsigned int)arg1 columnNumber:(unsigned int)arg2;
- (struct EDCellHeader { unsigned int x1; unsigned int x2; }*)adjacentCellRight;
- (struct EDCellHeader { unsigned int x1; unsigned int x2; }*)adjacentCellLeft;
- (struct EDCellHeader { unsigned int x1; unsigned int x2; }*)adjacentCell:(int)arg1;
- (id)initWithWorksheet:(id)arg1;
- (void)dealloc;

@end
