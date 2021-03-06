/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKBTree, NSMutableArray, NSDictionary;

@interface UIKBSplitRow : NSObject  {
    unsigned char _rowIndex;
    float _rowOffset;
    float _rowWidth;
    struct CGSize { 
        float width; 
        float height; 
    } _defaultKeySize;
    NSMutableArray *_keys;
    NSMutableArray *_vacancies;
    NSDictionary *_hints;
    UIKBTree *_keylistLeft;
    UIKBTree *_geolistLeft;
    UIKBTree *_attrlistLeft;
    UIKBTree *_keylistRight;
    UIKBTree *_geolistRight;
    UIKBTree *_attrlistRight;
}

@property unsigned char rowIndex;
@property float rowOffset;
@property float rowWidth;
@property struct CGSize { float x1; float x2; } defaultKeySize;
@property(readonly) NSMutableArray * keys;
@property(retain) NSDictionary * hints;


- (id)hints;
- (void)setDefaultKeySize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })defaultKeySize;
- (void)setRowWidth:(float)arg1;
- (float)rowWidth;
- (void)setRowOffset:(float)arg1;
- (float)rowOffset;
- (id)listOfType:(int)arg1 left:(BOOL)arg2;
- (id)keyAtIndex:(int)arg1;
- (void)addKey:(id)arg1;
- (void)setHints:(id)arg1;
- (void)setRowIndex:(unsigned char)arg1;
- (id)keys;
- (unsigned char)rowIndex;
- (id)description;
- (void)dealloc;
- (id)init;

@end
