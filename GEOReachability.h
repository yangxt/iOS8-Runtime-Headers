/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOReachability : NSObject <GEOResourceManifestTileGroupObserver> {
    BOOL _networkReachable;
    unsigned int _errorCount;
}

+ (id)sharedReachability;

- (void)_reachabilityChanged:(id)arg1;
- (void)reportTileLoadSuccess:(id)arg1;
- (void)reportLoadFailure:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (BOOL)networkAvailable;
- (BOOL)anyFailures;
- (void)_resetErrors;
- (void)dealloc;
- (id)init;

@end