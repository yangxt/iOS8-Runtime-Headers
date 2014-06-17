/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <TSPLazyReferenceDelegate>, TSPUnknownContent, NSUUID, <TSPUnarchiverDelegate>, <TSPObjectDelegate>;

@interface TSPUnarchiver : NSObject  {
    unsigned int _messageType;
    struct auto_ptr<google::protobuf::Message> { 
        struct Message {} *__ptr_; 
    } _message;
    long long _objectIdentifier;
    struct auto_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > { 
        struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > {} *__ptr_; 
    } _strongReferences;
    unsigned long long _messageVersion;
    TSPUnknownContent *_unknownContent;
    <TSPObjectDelegate> *_objectDelegate;
    <TSPLazyReferenceDelegate> *_lazyReferenceDelegate;
    <TSPUnarchiverDelegate> *_delegate;
    struct vector<TSP::UnarchiverReference, std::__1::allocator<TSP::UnarchiverReference> > { 
        struct UnarchiverReference {} *__begin_; 
        struct UnarchiverReference {} *__end_; 
        struct __compressed_pair<TSP::UnarchiverReference *, std::__1::allocator<TSP::UnarchiverReference> > { 
            struct UnarchiverReference {} *__first_; 
        } __end_cap_; 
    } _references;
    struct vector<TSP::UnarchiverRepeatedReference, std::__1::allocator<TSP::UnarchiverRepeatedReference> > { 
        struct UnarchiverRepeatedReference {} *__begin_; 
        struct UnarchiverRepeatedReference {} *__end_; 
        struct __compressed_pair<TSP::UnarchiverRepeatedReference *, std::__1::allocator<TSP::UnarchiverRepeatedReference> > { 
            struct UnarchiverRepeatedReference {} *__first_; 
        } __end_cap_; 
    } _repeatedReferences;

  /* Unexpected information at end of encoded ivar type: } */
  /* Error parsing encoded ivar type info: {vector<void (^)(), std::__1::allocator<void (^)()> >="__begin_"^@?"__end_"^@?"__end_cap_"{__compressed_pair<void (^__strong *)(), std::__1::allocator<void (^)()> >="__first_"^@?}} */
    struct vector<void (^)(), std::__1::allocator<void (^)()> >="__begin_"^@?"__end_"^@?"__end_cap_"{__compressed_pair<void (^__strong *)(), std::__1::allocator<void (^)()> >="__first_"^@? {} _finalizeHandlers;

}

@property(readonly) BOOL hasPreUFFVersion;
@property(readonly) unsigned long long preUFFVersion;
@property(readonly) BOOL isFromPasteboard;
@property(readonly) BOOL isCrossDocumentPaste;
@property(readonly) BOOL isCrossAppPaste;
@property(readonly) unsigned int messageType;
@property(readonly) unsigned long long messageVersion;
@property(readonly) unsigned long long fileFormatVersion;
@property(readonly) BOOL documentHasCurrentFileFormatVersion;
@property(readonly) long long objectIdentifier;
@property(readonly) NSUUID * objectUUID;
@property(readonly) TSPUnknownContent * unknownContent;
@property(readonly) <TSPObjectDelegate> * objectDelegate;
@property(readonly) <TSPUnarchiverDelegate> * delegate;
@property(readonly) BOOL canValidateReferences;


- (struct vector<TSP::UnarchiverReference, std::__1::allocator<TSP::UnarchiverReference> > { struct UnarchiverReference {} *x1; struct UnarchiverReference {} *x2; struct __compressed_pair<TSP::UnarchiverReference *, std::__1::allocator<TSP::UnarchiverReference> > { struct UnarchiverReference {} *x_3_1_1; } x3; }*)references;
- (id)objectUUID;
- (void).cxx_destruct;
- (id).cxx_construct;
- (const struct Message { int (**x1)(); }*)message;
- (id)delegate;
- (unsigned int)messageType;
- (void)readSparseReferenceArchive:(const struct SparseReferenceArrayArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedPtrField<TSCH::SparseReferenceArrayArchive_Entry> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; unsigned int x4; int x5; unsigned int x6[1]; }*)arg1 class:(Class)arg2 completion:(id)arg3;
- (BOOL)hasPreUFFVersion;
- (unsigned long long)preUFFVersion;
- (struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { }*)filterIdentifiers:(const struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { }*)arg1;
- (BOOL)isFromPasteboard;
- (BOOL)isCrossDocumentPaste;
- (BOOL)isCrossAppPaste;
- (void)readWeakReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; int x4; boolx5; int x6; unsigned int x7[1]; }*)arg1 repeatedMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg2 completion:(id)arg3;
- (void)readReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; int x4; boolx5; int x6; unsigned int x7[1]; }*)arg1 repeatedMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg2 completion:(id)arg3;
- (void)readWeakReferenceMessage1:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; int x4; boolx5; int x6; unsigned int x7[1]; }*)arg1 message2:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; int x4; boolx5; int x6; unsigned int x7[1]; }*)arg2 completion:(id)arg3;
- (void)readReferenceMessage1:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; int x4; boolx5; int x6; unsigned int x7[1]; }*)arg1 message2:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; int x4; boolx5; int x6; unsigned int x7[1]; }*)arg2 completion:(id)arg3;
- (struct vector<void (^)(), std::__1::allocator<void (^)()> >=^@?^@?{__compressed_pair<void (^__strong *)(), std::__1::allocator<void (^)()> >=^@? {}*)finalizeHandlers;
- (struct vector<TSP::UnarchiverRepeatedReference, std::__1::allocator<TSP::UnarchiverRepeatedReference> > { struct UnarchiverRepeatedReference {} *x1; struct UnarchiverRepeatedReference {} *x2; struct __compressed_pair<TSP::UnarchiverRepeatedReference *, std::__1::allocator<TSP::UnarchiverRepeatedReference> > { struct UnarchiverRepeatedReference {} *x_3_1_1; } x3; }*)repeatedReferences;
- (id)initWithMessageType:(unsigned int)arg1 message:(struct auto_ptr<google::protobuf::Message> { struct Message {} *x1; })arg2 identifier:(long long)arg3 strongReferences:(struct auto_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > { struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > {} *x1; })arg4 fieldInfos:(struct auto_ptr<TSP::FieldInfoTree> { struct FieldInfoTree {} *x1; })arg5 messageVersion:(unsigned long long)arg6 unknownMessages:(id)arg7 ignoreVersionChecking:(BOOL)arg8 objectDelegate:(id)arg9 lazyReferenceDelegate:(id)arg10 delegate:(id)arg11 error:(id*)arg12;
- (void)addFinalizeHandler:(id)arg1;
- (BOOL)documentHasCurrentFileFormatVersion;
- (id)readDataReferenceMessage:(const struct DataReference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; int x4; unsigned int x5[1]; }*)arg1;
- (void)readRepeatedWeakLazyReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 completion:(id)arg2;
- (void)readRepeatedLazyReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 completion:(id)arg2;
- (void)readWeakLazyReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; int x4; boolx5; int x6; unsigned int x7[1]; }*)arg1 completion:(id)arg2;
- (void)readLazyReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; int x4; boolx5; int x6; unsigned int x7[1]; }*)arg1 completion:(id)arg2;
- (void)readRepeatedWeakReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 completion:(id)arg2;
- (void)readRepeatedReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 completion:(id)arg2;
- (void)readWeakReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; int x4; boolx5; int x6; unsigned int x7[1]; }*)arg1 completion:(id)arg2;
- (void)readReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; int x4; boolx5; int x6; unsigned int x7[1]; }*)arg1 completion:(id)arg2;
- (void)readRepeatedLazyReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 isWeak:(BOOL)arg2 shouldValidate:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 completion:(id)arg5;
- (void)readLazyReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; int x4; boolx5; int x6; unsigned int x7[1]; }*)arg1 isWeak:(BOOL)arg2 shouldValidate:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 completion:(id)arg5;
- (void)readRepeatedReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 isWeak:(BOOL)arg2 allowUnknownObject:(BOOL)arg3 completion:(id)arg4;
- (BOOL)canValidateReferences;
- (void)readReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; int x4; boolx5; int x6; unsigned int x7[1]; }*)arg1 isWeak:(BOOL)arg2 shouldValidate:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 completion:(id)arg5;
- (struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > { struct __hash_table<std::__1::pair<const long long, bool>, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, bool>, TSP::IdentifierHash, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, bool>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::pair<const long long, bool> > > { struct unique_ptr<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > > { struct __hash_node<std::__1::pair<const long long, bool>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> { struct __hash_node<std::__1::pair<const long long, bool>, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, bool>, TSP::IdentifierHash, true> > { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, bool>, std::__1::equal_to<const long long>, true> > { float x_4_2_1; } x_1_1_4; } x1; }*)strongReferences;
- (unsigned long long)messageVersion;
- (unsigned long long)fileFormatVersion;
- (id)objectDelegate;
- (id)unknownContent;
- (long long)objectIdentifier;

@end