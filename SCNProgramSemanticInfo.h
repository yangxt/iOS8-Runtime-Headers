/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class NSString, NSDictionary;

@interface SCNProgramSemanticInfo : NSObject <NSSecureCoding> {
    NSString *_semantic;
    NSDictionary *_options;
}

@property(copy) NSString * semantic;
@property(retain) NSDictionary * options;

+ (BOOL)supportsSecureCoding;
+ (id)infoWithSemantic:(id)arg1 options:(id)arg2;

- (void)setOptions:(id)arg1;
- (void)setSemantic:(id)arg1;
- (id)semantic;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)options;

@end
