/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSURL, TSUPathSet;

@interface TSPDataManagerTemporaryDirectory : NSObject  {
    NSURL *_directoryURL;
    NSURL *_uniqueDirectoryURL;
    TSUPathSet *_pathSet;
}

@property(readonly) NSURL * directoryURL;
@property(readonly) NSURL * uniqueDirectoryURL;
@property(readonly) TSUPathSet * pathSet;


- (id)directoryURL;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithDocumentURL:(id)arg1;
- (id)uniqueDirectoryURL;
- (id)pathSet;

@end
