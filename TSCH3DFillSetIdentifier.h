/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface TSCH3DFillSetIdentifier : NSObject  {
    NSString *mTextureSetID;
    unsigned int mSeriesIndex;
    int mFillPropertyType;
}

@property(readonly) NSString * textureSetID;
@property(readonly) NSString * textureSetFilename;
@property(readonly) unsigned int seriesIndex;

+ (id)identifierWithContentsOfDictionary:(id)arg1;
+ (id)identifierWithFillName:(id)arg1 seriesName:(id)arg2 textureSetID:(id)arg3;
+ (id)identifierWithFillPropertyType:(int)arg1 seriesIndex:(unsigned int)arg2 textureSetID:(id)arg3;
+ (id)instanceWithDEPRECATEDArchive:(const struct DEPRECATEDChart3DFillArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct FillArchive {} *x3; struct Chart3DLightingModelArchive {} *x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; int x6; unsigned int x7; int x8; unsigned int x9[1]; }*)arg1 unarchiver:(id)arg2;
+ (id)instanceWithArchive:(const struct Chart3DFillArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Chart3DLightingModelArchive {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; int x5; unsigned int x6; int x7; unsigned int x8[1]; }*)arg1 unarchiver:(id)arg2;

- (unsigned int)seriesIndex;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (unsigned int)countOfSeriesInFillSet;
- (id)loadPropertiesDictionary;
- (BOOL)isSageCompatible;
- (id)p_sageFillSetList;
- (id)sageSeriesName;
- (id)sageFillName;
- (id)p_version;
- (id)p_getPlist;
- (id)p_loadPlist;
- (id)p_plistData;
- (id)p_plistPath;
- (id)p_sageSeriesNames;
- (id)p_sageFillPropertyNames;
- (id)initWithContentsOfDictionary:(id)arg1;
- (id)initWithFillPropertyType:(int)arg1 seriesIndex:(unsigned int)arg2 textureSetID:(id)arg3;
- (unsigned int)seriesIndexFromSageSeriesName:(id)arg1;
- (int)fillPropertyTypeFromName:(id)arg1;
- (id)initWithFillName:(id)arg1 seriesName:(id)arg2 textureSetID:(id)arg3;
- (id)textureSetID;
- (BOOL)isStoredInLocalBundle;
- (id)localDirectoryPath;
- (id)textureSetFilename;
- (id)initWithArchive:(const struct Chart3DFillArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Chart3DLightingModelArchive {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; int x5; unsigned int x6; int x7; unsigned int x8[1]; }*)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct Chart3DFillArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Chart3DLightingModelArchive {} *x3; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x4; int x5; unsigned int x6; int x7; unsigned int x8[1]; }*)arg1 archiver:(id)arg2;

@end