/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class NSDate;

@interface _HKEndDateFilter : _HKFilter  {
    NSDate *_comparisonDate;
    unsigned int _operatorType;
}

@property(readonly) NSDate * comparisonDate;
@property(readonly) unsigned int operatorType;

+ (BOOL)supportsSecureCoding;
+ (id)filterWithOperatorType:(unsigned int)arg1 comparisonDate:(id)arg2;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned int)arg2 value:(id)arg3 dataTypes:(id)arg4;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)comparisonDate;
- (BOOL)acceptsDataObject:(id)arg1;
- (unsigned int)operatorType;
- (id)predicateWithHealthDaemon:(id)arg1;

@end