/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDShadow, TSDStroke, TSSStyle, TSDReflection;

@interface TSDStyledInfo : TSDDrawableInfo <TSSStyleClient> {
}

@property(retain) TSSStyle * style;
@property(copy) TSDReflection * reflection;
@property(copy) TSDShadow * shadow;
@property(copy) TSDStroke * stroke;
@property float opacity;


- (void)setReflection:(id)arg1;
- (id)reflection;
- (void)setStroke:(id)arg1;
- (void)setShadow:(id)arg1;
- (id)shadow;
- (void)setStyle:(id)arg1;
- (void)setOpacity:(float)arg1;
- (float)opacity;
- (id)style;
- (id)stroke;
- (id)propertyMapForNewPreset;
- (id)commandForPasteStyleWithContext:(id)arg1 pasteboardStyles:(id)arg2;
- (id)stylesForCopyStyle;
- (id)styleIdentifierTemplateForNewPreset;
- (id)commandForSettingBoxedValue:(id)arg1 forProperty:(int)arg2;
- (void)i_setValue:(id)arg1 forProperty:(int)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)setValuesForProperties:(id)arg1;
- (id)commandForTransformingByTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (id)boxedValueForProperty:(int)arg1;
- (Class)styleClass;
- (id)objectForProperty:(int)arg1;
- (void)replaceReferencedStylesUsingBlock:(id)arg1;
- (id)referencedStyles;

@end