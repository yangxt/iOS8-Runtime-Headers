/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class NSArray, NSString, NSMutableArray;

@interface CAState : NSObject <NSCoding, NSCopying> {
    NSString *_name;
    NSString *_basedOn;
    NSMutableArray *_elements;
    double _nextDelay;
    double _previousDelay;
    BOOL _enabled;
    BOOL _locked;
    BOOL _initial;
}

@property(copy) NSString * name;
@property(copy) NSString * basedOn;
@property(getter=isEnabled) BOOL enabled;
@property(copy) NSArray * elements;
@property double nextDelay;
@property double previousDelay;
@property(getter=isLocked) BOOL locked;
@property(getter=isInitial) BOOL initial;

+ (void)CAMLParserStartElement:(id)arg1;

- (void)addElement:(id)arg1;
- (void)foreachLayer:(id)arg1;
- (void)setElements:(id)arg1;
- (id)elements;
- (void)setLocked:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isLocked;
- (id)debugDescription;
- (void)setInitial:(BOOL)arg1;
- (BOOL)isInitial;
- (void)setPreviousDelay:(double)arg1;
- (double)previousDelay;
- (void)setNextDelay:(double)arg1;
- (double)nextDelay;
- (void)setBasedOn:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (void)removeElement:(id)arg1;
- (id)basedOn;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)dealloc;
- (id)init;

@end
