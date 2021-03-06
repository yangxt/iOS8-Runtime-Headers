/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSCHChartMediator;

@interface TSCHPersistentChartMediator : TSPObject <TSCHNotifyOnModify, TSCHMediatorProvider> {
    TSCHChartMediator *mMediator;
}

@property(retain,readonly) TSCHChartMediator * mediator;


- (void)dealloc;
- (id)initWithContext:(id)arg1 andMediator:(id)arg2;
- (void)loadFromArchive:(const struct ChartMediatorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct RepeatedField<unsigned int> { unsigned int *x_4_1_1; int x_4_1_2; int x_4_1_3; } x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; unsigned int x7[1]; }*)arg1;
- (id)mediator;
- (void)saveToArchive:(struct ChartMediatorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct RepeatedField<unsigned int> { unsigned int *x_4_1_1; int x_4_1_2; int x_4_1_3; } x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; unsigned int x7[1]; }*)arg1;

@end
