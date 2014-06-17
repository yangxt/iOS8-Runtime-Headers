/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDDrawableInfo, TNPageCoordinateDictionary, TNPageController;

@interface TNHintCache : NSObject  {
    TNPageController *mPageController;
    TSDDrawableInfo *mInfo;
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } topLeft; 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } bottomRight; 
    } mPageRange;
    BOOL mIsMaxColumnValid;
    BOOL mIsMaxRowValid;
    TNPageCoordinateDictionary *mHintCacheEntryDictionary;
}

@property(readonly) TNPageController * pageController;
@property(retain) TSDDrawableInfo * info;


- (void)setInfo:(id)arg1;
- (id)pageController;
- (id).cxx_construct;
- (id)info;
- (void)invalidate;
- (void)dealloc;
- (id)layoutAtCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 parentLayout:(id)arg2;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })pageRangeWithUpperBound:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (id)initWithInfo:(id)arg1 pageController:(id)arg2;
- (id)p_hintCacheEntryAtCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;

@end