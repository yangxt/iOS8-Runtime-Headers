/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSURL, NSString;

@interface TSPDatabaseObject : NSObject  {
    int _classType;
    long long _identifier;
}

@property(readonly) long long identifier;
@property(readonly) int classType;
@property(readonly) BOOL hasDataState;
@property(readonly) long long dataState;
@property(readonly) BOOL hasFileState;
@property(readonly) NSString * fileState;
@property(readonly) NSURL * fileURL;

+ (id)databaseObjectWithIdentifier:(long long)arg1 classType:(int)arg2 fileState:(id)arg3 packageURL:(id)arg4;
+ (id)databaseObjectWithIdentifier:(long long)arg1 classType:(int)arg2 dataState:(long long)arg3;

- (id)fileURL;
- (long long)identifier;
- (id)init;
- (int)classType;
- (id)fileState;
- (BOOL)hasFileState;
- (id)initWithIdentifier:(long long)arg1 classType:(int)arg2;
- (long long)dataState;
- (BOOL)hasDataState;

@end