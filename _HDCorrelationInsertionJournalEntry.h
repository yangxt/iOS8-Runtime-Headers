/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class HDCorrelationTuple;

@interface _HDCorrelationInsertionJournalEntry : NSObject <HDJournalEntry, NSSecureCoding> {
    HDCorrelationTuple *_correlation;
}

@property(readonly) HDCorrelationTuple * correlation;

+ (BOOL)supportsSecureCoding;

- (id)correlation;
- (BOOL)applyWithDaemon:(id)arg1;
- (id)initWithCorrelation:(id)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end