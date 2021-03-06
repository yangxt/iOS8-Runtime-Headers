/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class NSString;

@interface _HKMetadataFilter : _HKFilter  {
    NSString *_key;
    unsigned int _operatorType;
}

@property(copy,readonly) NSString * key;
@property(readonly) unsigned int operatorType;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_acceptsOperatorType:(unsigned int)arg1;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned int)arg2 value:(id)arg3 dataTypes:(id)arg4;

- (void).cxx_destruct;
- (id)key;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithKey:(id)arg1 operatorType:(unsigned int)arg2;
- (BOOL)acceptsDataObject:(id)arg1;
- (unsigned int)operatorType;
- (id)predicateWithHealthDaemon:(id)arg1;

@end
