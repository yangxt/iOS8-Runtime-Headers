/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEORequester, PBRequest, NSString;

@interface _GEOServiceRequesterOp : NSObject <PBRequesterDelegate> {
    PBRequest *_request;
    NSString *_debugRequestName;
    unsigned int _urlType;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    BOOL _cancelled;
    GEORequester *_requester;
}


- (void)startWithCompletionHandler:(id)arg1;
- (id)initWithRequest:(id)arg1 urlType:(unsigned int)arg2 debugRequestName:(id)arg3;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)_cleanup;
- (void)cancel;
- (void)dealloc;

@end
