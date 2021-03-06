/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadarCompose.framework/RadarCompose
 */

@class NSNumber, NSString;

@interface RadarAddTestSuiteScheduledTestCaseRequest : NUCModel <NSCoding> {
}

@property(retain) NSNumber * priority;
@property(retain) NSNumber * caseNumber;
@property(copy) NSString * instructions;
@property(copy) NSString * data;
@property(copy) NSString * expectedResult;
@property(copy) NSString * actualResult;
@property(copy) NSString * actualTime;
@property(retain) NSNumber * tester;
@property(copy) NSString * status;
@property(copy) NSString * title;
@property(copy) NSString * summary;
@property(copy) id build;


- (id)dictionary;

@end
