/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TNSheetUIState : NSObject <NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mVisibleRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mPreviousVisibleRect;
    BOOL mHasVisibleRect;
    BOOL mHasPreviousVisibleRect;
    float mPreviousViewScale;
    float mViewScale;
    int mDeviceIdiom;
    unsigned short mFormFocusedRecordIndex;
    unsigned char mFormFocusedFieldIndex;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleRect;
@property(readonly) struct CGPoint { float x1; float x2; } scrollPosition;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } previousVisibleRect;
@property(readonly) struct CGPoint { float x1; float x2; } previousScrollPosition;
@property BOOL hasVisibleRect;
@property BOOL hasPreviousVisibleRect;
@property float viewScale;
@property float previousViewScale;
@property int archivedDeviceIdiom;
@property unsigned short formFocusedRecordIndex;
@property unsigned char formFocusedFieldIndex;

+ (int)currentDeviceIdiom;
+ (id)sheetUIStateWithPreviousVisibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)sheetUIStateWithVisibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

- (void)setViewScale:(float)arg1;
- (BOOL)isDefault;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id).cxx_construct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)setArchivedDeviceIdiom:(int)arg1;
- (void)setHasPreviousVisibleRect:(BOOL)arg1;
- (void)setHasVisibleRect:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })previousScrollPosition;
- (struct CGPoint { float x1; float x2; })scrollPosition;
- (void)setFormFocusedFieldIndex:(unsigned char)arg1;
- (unsigned char)formFocusedFieldIndex;
- (void)setFormFocusedRecordIndex:(unsigned short)arg1;
- (unsigned short)formFocusedRecordIndex;
- (BOOL)hasVisibleRect;
- (float)previousViewScale;
- (BOOL)hasPreviousVisibleRect;
- (int)archivedDeviceIdiom;
- (void)clearPreviousVisibleRect;
- (void)setPreviousViewScale:(float)arg1;
- (void)setPreviousVisibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previousVisibleRect;
- (void)clearVisibleRect;
- (float)viewScale;
- (id)initWithArchive:(const struct SheetUIStateArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Point {} *x3; float x4; float x5; struct Point {} *x6; boolx7; boolx8; boolx9; unsigned int x10; struct Size {} *x11; struct Size {} *x12; unsigned int x13; unsigned int x14; int x15; unsigned int x16[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct SheetUIStateArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Point {} *x3; float x4; float x5; struct Point {} *x6; boolx7; boolx8; boolx9; unsigned int x10; struct Size {} *x11; struct Size {} *x12; unsigned int x13; unsigned int x14; int x15; unsigned int x16[1]; }*)arg1 archiver:(id)arg2;

@end