/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@class NSMutableArray;

@interface FigHUDGraphLayer : CALayer  {
    float **_Values;
    NSMutableArray *_valueLabels;
    float *_Mins;
    float *_Maxes;
    int *_StartIndex;
    int *_NumValues;
    int _NumGraphs;
    struct CGPoint { float x1; float x2; } *_Lines;
    int _MaxLength;
    struct __CTFont { } *_Font;
    struct __CFDictionary { } *_TextAttributes;
}


- (void)updateValue:(int)arg1 value:(float)arg2;
- (void)setUpGraph:(int)arg1 min:(float)arg2 max:(float)arg3 numValues:(int)arg4;
- (void)setUpGraphs:(int)arg1;
- (void)updateValue:(int)arg1 value:(float)arg2 label:(id)arg3;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)dealloc;
- (id)init;

@end
