/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSURLConnection, NSMutableData, NSURLResponse;

@interface _GEONSURLConnectionWaiter : NSObject <NSURLConnectionDelegate> {
    NSURLConnection *_conn;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _callback;

    NSMutableData *_data;
    NSURLResponse *_response;
}

@property(copy) id callback;
@property(retain) NSURLConnection * conn;


- (void)setCallback:(id)arg1;
- (id)conn;
- (void)setConn:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)dealloc;
- (id)callback;

@end