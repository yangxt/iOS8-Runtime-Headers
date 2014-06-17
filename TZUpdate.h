/* Generated by RuntimeBrowser.
   Image: /usr/lib/libtzupdate.dylib
 */

@class TZFileSystemInterface, NSXPCConnection;

@interface TZUpdate : NSObject  {
    TZFileSystemInterface *_fileSystemInterface;
    NSXPCConnection *_connectionToService;
}

@property(retain) TZFileSystemInterface * fileSystemInterface;
@property(retain) NSXPCConnection * connectionToService;

+ (id)sharedInstance;

- (void)setConnectionToService:(id)arg1;
- (id)connectionToService;
- (void)setFileSystemInterface:(id)arg1;
- (id)currentTZDataVersion;
- (void)isUpdateWaitingWithCompletion:(id)arg1;
- (id)fileSystemInterface;
- (id)createNewXPCConnection;
- (id)affectedZones;
- (BOOL)alertForAllZones;
- (id)updateTZDataVersion;
- (BOOL)isUpdateWaiting;
- (void).cxx_destruct;
- (id)init;

@end