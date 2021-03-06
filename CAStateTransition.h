/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class NSString, NSArray;

@interface CAStateTransition : NSObject <NSCopying, NSCoding> {
    NSString *_fromState;
    NSString *_toState;
    NSArray *_elements;
}

@property(copy) NSString * fromState;
@property(copy) NSString * toState;
@property(copy) NSArray * elements;

+ (void)CAMLParserStartElement:(id)arg1;

- (void)setElements:(id)arg1;
- (id)elements;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)setToState:(id)arg1;
- (void)setFromState:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)toState;
- (id)fromState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)duration;
- (void)dealloc;
- (id)init;

@end
