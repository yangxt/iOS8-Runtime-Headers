/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class NSXPCConnection, <LSBestAppSuggestionManagerDelegate>;

@interface LSBestAppSuggestionManager : NSObject  {
    <LSBestAppSuggestionManagerDelegate> *_delegate;
    BOOL _listeningForBestAppSuggestions;
    NSXPCConnection *_connection;
}

@property <LSBestAppSuggestionManagerDelegate> * delegate;
@property(retain) NSXPCConnection * connection;


- (void)setConnection:(id)arg1;
- (id)connection;
- (id)delegate;
- (void)launchAppWithBestAppSuggestion:(id)arg1;
- (void)launchAppWithBundleIdentifier:(id)arg1 taskContinuationIdentifier:(id)arg2;
- (void)notifyBestAppChanged:(id)arg1 type:(unsigned int)arg2 options:(id)arg3 bundleIdentifier:(id)arg4 activityType:(id)arg5 when:(id)arg6 confidence:(double)arg7 deviceName:(id)arg8 deviceIdentifier:(id)arg9;
- (void)queueFetchOfPayloadForBestAppSuggestion:(id)arg1;
- (id)bestAppSuggestions:(int)arg1;
- (BOOL)determineBestAppWithDelay:(double)arg1 withBlock:(id)arg2;
- (void)removeBestApp:(id)arg1 options:(id)arg2;
- (void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3;
- (id)bestAppSuggestion;
- (void)stopListeningForBestAppSuggestions;
- (void)startListeningForBestAppSuggestions;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end
