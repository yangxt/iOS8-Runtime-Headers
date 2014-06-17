/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardTransitionSlice, UIKBTree, UIKeyboardSliceSet, NSDictionary, NSMutableArray;

@interface UIKBSplitKeyplaneGenerator : NSObject  {
    NSMutableArray *_rows;
    NSDictionary *_splitLayoutHints;
    UIKBTree *_sourceKeyboard;
    UIKBTree *_sourceKeyplane;
    struct CGSize { 
        float width; 
        float height; 
    } _splitKeySizeFactor;
    struct CGSize { 
        float width; 
        float height; 
    } _keyboardSize;
    float _leftSideWidestRow;
    float _rightSideWidestRow;
    int _keyboardType;
    UIKeyboardSliceSet *_sliceSet;
    UIKeyboardTransitionSlice *_leftSlice;
    UIKeyboardTransitionSlice *_rightSlice;
}


- (id)finalizeSplitKeyplane;
- (void)splitRow:(id)arg1;
- (void)organizeKeyplaneIntoRows;
- (void)initializeGeneratorForKeyplane:(id)arg1 name:(id)arg2;
- (id)hintsForRow:(id)arg1;
- (void)alignSpaceKeyEdges;
- (void)commitUncommittedSlices;
- (void)addKey:(id)arg1 withShape:(id)arg2 forRow:(id)arg3 attribs:(id)arg4 left:(BOOL)arg5 force:(BOOL)arg6 isDefaultWidth:(BOOL)arg7;
- (void)splitSpaceKey:(id)arg1 leftSpace:(id)arg2 left:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 right:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (void)addSliceStart:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 end:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 startToken:(id)arg3 endToken:(id)arg4 left:(BOOL)arg5 normalization:(int)arg6 isDefaultWidth:(BOOL)arg7 row:(int)arg8;
- (id)keysOrderedByPosition;
- (id)generateRivenKeyplaneFromKeyplane:(id)arg1 forKeyboard:(id)arg2;
- (void)dealloc;
- (id)init;

@end