/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSNumber, NSData, NSString;

@interface BRCGenerationID : NSObject <NSCopying, NSSecureCoding, PQLBindable> {
    unsigned int _generationID;
    NSData *_signature;
}

@property(readonly) NSNumber * fsGenerationID;
@property(readonly) NSData * signature;
@property(readonly) NSString * generationIDString;
@property(readonly) const char * UTF8String;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqualToFSGenerationID:(unsigned int)arg1;
- (id)initWithSignature:(const void*)arg1 length:(unsigned int)arg2;
- (id)generationIDString;
- (BOOL)isEqualToGenerationID:(id)arg1 orSignature:(id)arg2;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (id)initWithFSGenerationID:(unsigned int)arg1;
- (id)fsGenerationID;
- (id)signature;
- (id)initWithRelativePath:(id)arg1;
- (id)initWithSqlite3Value:(struct Mem { }*)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (const char *)UTF8String;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
