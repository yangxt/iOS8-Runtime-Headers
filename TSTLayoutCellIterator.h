/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSTCell, TSTTableModel, TSTMasterLayout;

@interface TSTLayoutCellIterator : TSTCellIterator  {
    TSTMasterLayout *mMasterLayout;
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } mLayoutRange;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    } mLayoutCellID;
    TSTCell *mLayoutCell;
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } mPreviousCellID; 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } mCellID; 
        TSTCell *mCell; 
        struct TSTCellStorage {} *mCellRef; 
        struct { 
            struct { 
                unsigned short row; 
                unsigned char column; 
                unsigned char reserved; 
            } origin; 
            struct { 
                unsigned short numberOfColumns; 
                unsigned short numberOfRows; 
            } size; 
        } mMergeRange; 
        BOOL mStyleOnly; 
        BOOL mCommentStorageOnly; 
        BOOL mHidden; 
        BOOL mHiddenRow; 
        BOOL mHiddenColumn; 
    } mModelIteratorData;
    BOOL mQueriedModel;
    BOOL mModelIteratorHasCell;
    unsigned short mNumberOfLayoutColumns;
    unsigned short mNumberOfColumns;
    unsigned short mNumberOfRows;
}

@property(readonly) TSTMasterLayout * masterLayout;
@property(readonly) TSTTableModel * tableModel;


- (id).cxx_construct;
- (void)dealloc;
- (id)initWithLayout:(id)arg1;
- (id)initWithLayout:(id)arg1 range:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (id)initWithMasterLayout:(id)arg1 range:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 flags:(unsigned long)arg3;
- (id)initWithMasterLayout:(id)arg1;
- (id)initWithMasterLayout:(id)arg1 range:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (id)initWithLayout:(id)arg1 range:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 flags:(unsigned long)arg3;
- (id)masterLayout;
- (id)tableModel;

@end