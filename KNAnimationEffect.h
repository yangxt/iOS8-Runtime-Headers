/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class KNAnimationContext;

@interface KNAnimationEffect : NSObject <KNAnimationPlugin> {
    KNAnimationContext *mAnimationContext;
}

+ (id)animationName;
+ (id)defaultAttributes;
+ (id)updateDirectionAttributeValue:(int)arg1 andCustomTextDirectionValue:(unsigned int)arg2 turnOffBounce:(BOOL)arg3 turnOffMotionBlur:(BOOL)arg4 forAttributes:(id)arg5;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned int)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (int)animationCategory;
+ (id)animationFilter;

- (id)initWithAnimationContext:(id)arg1;

@end