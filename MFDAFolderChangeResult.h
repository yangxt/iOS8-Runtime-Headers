/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSError, NSString;

@interface MFDAFolderChangeResult : NSObject  {
    NSError *_error;
    NSString *_folderID;
    NSString *_folderName;
    int _statusCode;
}

@property(readonly) int statusCode;
@property(readonly) NSError * error;
@property(readonly) NSString * folderID;
@property(readonly) NSString * folderName;


- (id)error;
- (id)initWithStatusCode:(int)arg1 error:(id)arg2 folderID:(id)arg3 folderName:(id)arg4;
- (BOOL)wasSuccessful;
- (id)folderName;
- (id)folderID;
- (int)statusCode;
- (id)description;
- (void)dealloc;

@end
