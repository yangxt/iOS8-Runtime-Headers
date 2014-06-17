/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface OITSUPerformanceTestHarness : NSObject  {
    NSMutableArray *mTestCases;
    BOOL mQuiet;
    int mPassingTests;
    int mTotalTests;
    BOOL mPassed;
    struct timeval { 
        int tv_sec; 
        int tv_usec; 
    } mSetupTime;
}

@property BOOL quiet;
@property(readonly) int passingTestCount;
@property(readonly) int testCount;
@property(readonly) BOOL passed;

+ (id)harness;

- (int)testCount;
- (int)passingTestCount;
- (BOOL)quiet;
- (BOOL)runTests;
- (void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 precision:(double)arg4;
- (void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3;
- (void)p_writeCsvResultsToDirectory:(id)arg1;
- (void)p_writeConsoleMessagesToDirectory:(id)arg1;
- (void)p_writeSystemConfigurationToDirectory:(id)arg1;
- (id)p_createResultDirectory;
- (void)report;
- (BOOL)passed;
- (void)testSuite;
- (void)setup;
- (id)testWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3;
- (void)setQuiet:(BOOL)arg1;
- (void)cleanup;
- (void)dealloc;
- (id)init;

@end