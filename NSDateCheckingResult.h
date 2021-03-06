/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSDate, NSTimeZone;

@interface NSDateCheckingResult : NSTextCheckingResult  {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    NSDate *_date;
    NSTimeZone *_timeZone;
    double _duration;
    NSDate *_referenceDate;
    id _underlyingResult;
    BOOL _timeIsSignificant;
    BOOL _timeIsApproximate;
    BOOL _timeIsPast;
}

@property(readonly) NSTimeZone * timeZone;
@property(readonly) double duration;
@property(readonly) NSDate * referenceDate;
@property(readonly) void* underlyingResult;
@property(readonly) BOOL timeIsSignificant;
@property(readonly) BOOL timeIsApproximate;
@property(readonly) BOOL timeIsPast;


- (unsigned long long)resultType;
- (id)timeZone;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (double)duration;
- (void)dealloc;
- (BOOL)timeIsPast;
- (BOOL)timeIsApproximate;
- (BOOL)timeIsSignificant;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(BOOL)arg7 timeIsApproximate:(BOOL)arg8;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5;
- (id)referenceDate;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(BOOL)arg7 timeIsApproximate:(BOOL)arg8 timeIsPast:(BOOL)arg9;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 date:(id)arg2;
- (void*)underlyingResult;
- (BOOL)_adjustRangesWithOffset:(int)arg1;
- (id)resultByAdjustingRangesWithOffset:(int)arg1;

@end
