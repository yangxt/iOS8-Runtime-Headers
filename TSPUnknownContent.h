/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray;

@interface TSPUnknownContent : NSObject  {
    NSArray *_messages;
    NSArray *_ignoreAndPreserveFields;
    NSArray *_ignoreAndDropFields;
    NSArray *_savedIgnoreAndPreserveFields;
    NSArray *_savedIgnoreAndDropFields;
}

@property(readonly) NSArray * messages;

+ (id)unknownContentWithMessage:(struct Message { int (**x1)(); }*)arg1 fieldInfos:(struct FieldInfoTree { struct FieldInfoNode { struct FieldInfo {} *x_1_1_1; boolx_1_1_2; struct map<int, std::__1::shared_ptr<TSP::FieldInfoNode>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::shared_ptr<TSP::FieldInfoNode> > > > { struct __tree<std::__1::__value_type<int, std::__1::shared_ptr<TSP::FieldInfoNode> >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::shared_ptr<TSP::FieldInfoNode> >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::shared_ptr<TSP::FieldInfoNode> > > > { struct __tree_node<std::__1::__value_type<int, std::__1::shared_ptr<TSP::FieldInfoNode> >, void *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, std::__1::shared_ptr<TSP::FieldInfoNode> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::shared_ptr<TSP::FieldInfoNode> >, std::__1::less<int>, true> > { unsigned long x_3_4_1; } x_1_3_3; } x_3_2_1; } x_1_1_3; } x1; }*)arg2 unknownMessages:(id)arg3 foundMustUnderstandFields:(BOOL*)arg4;

- (id)messages;
- (void).cxx_destruct;
- (id)init;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithMessages:(id)arg1 ignoreAndPreserveFields:(id)arg2 ignoreAndDropFields:(id)arg3;
- (void)updateMessageInfo:(struct MessageInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedField<unsigned int> { unsigned int *x_3_1_1; int x_3_1_2; int x_3_1_3; } x3; int x4; unsigned int x5; unsigned int x6; struct RepeatedPtrField<TSP::FieldInfo> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedField<unsigned long long> { unsigned long long *x_8_1_1; int x_8_1_2; int x_8_1_3; } x8; int x9; struct RepeatedField<unsigned long long> { unsigned long long *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; int x12; unsigned int x13[1]; }*)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)willModifyObject;

@end
