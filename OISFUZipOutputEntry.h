/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface OISFUZipOutputEntry : NSObject  {
    NSString *name;
    unsigned long utf8NameLength;
    BOOL isCompressed;
    BOOL isEncrypted;
    unsigned int time;
    unsigned long long compressedSize;
    unsigned long long uncompressedSize;
    unsigned long long offset;
    unsigned long long compressedDataOffset;
    unsigned int crc;
    BOOL isWrittenDirectlyToFile;
    BOOL is64Bit;
}


- (int)compareByOffset:(id)arg1;
- (id)description;
- (void)dealloc;

@end
