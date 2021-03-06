/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisStyle : TSCHBaseStyle  {
}

+ (id)properties;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg1;
+ (id)imageFillProperties;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)presetStyleDescriptorForCategoryStyleOrdinal:(unsigned int)arg1;
+ (id)identifierForCategoryStyleWithRoleIndex:(unsigned int)arg1 ordinal:(unsigned int)arg2;
+ (id)presetStyleDescriptorForValueStyleOrdinal:(unsigned int)arg1;
+ (id)identifierForValueStyleWithRoleIndex:(unsigned int)arg1 ordinal:(unsigned int)arg2;
+ (id)defaultStyleWithContext:(id)arg1;

- (void)p_upgrade3DChartPropertiesFrom2DProperties:(id)arg1;
- (void)p_upgradeRemoveShadowEnabledPropertyUsage:(id)arg1;
- (id)initFromPreUFFArchiveWithUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(BOOL)arg4;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;

@end
