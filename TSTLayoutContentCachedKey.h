/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSWPParagraphStyle, NSString;

@interface TSTLayoutContentCachedKey : NSObject <NSCopying> {
    NSString *mString;
    float mWidth;
    float mHeight;
    TSWPParagraphStyle *mParagraphStyle;
    BOOL mCellWraps;
    int mValueType;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } mPaddingInsets;
    int mVerticalAlignment;
    int mWritingDirection;
}

@property(readonly) NSString * string;
@property(readonly) float width;
@property(readonly) float height;
@property(readonly) TSWPParagraphStyle * paragraphStyle;
@property(readonly) BOOL cellWraps;
@property(readonly) int valueType;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } paddingInsets;
@property(readonly) int verticalAlignment;
@property(readonly) int writingDirection;


- (int)valueType;
- (int)verticalAlignment;
- (int)writingDirection;
- (float)height;
- (float)width;
- (id)string;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (BOOL)isEqualToLayoutContentCachedKey:(id)arg1;
- (id)initWithString:(id)arg1 width:(float)arg2 height:(float)arg3 paragraphStyle:(id)arg4 cellWraps:(BOOL)arg5 valueType:(int)arg6 paddingInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg7 verticalAlignment:(int)arg8 writingDirection:(int)arg9;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })paddingInsets;
- (BOOL)cellWraps;
- (id)paragraphStyle;

@end