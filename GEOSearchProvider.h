/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface GEOSearchProvider : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _error;

}

@property(copy) id error;


- (id)error;
- (void)setError:(id)arg1;
- (void)search:(id)arg1 timeout:(int)arg2 useBackgroundConnection:(BOOL)arg3 finished:(id)arg4 refinement:(id)arg5 error:(id)arg6 isCompletions:(BOOL)arg7;
- (void)cancel;
- (void)dealloc;

@end
