/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class NSMutableArray;

@interface SLBatchRequest : SLRequest  {
    NSMutableArray *_requests;
}


- (id)initWithServiceType:(id)arg1 URL:(id)arg2 parameters:(id)arg3 requestMethod:(int)arg4;
- (void)addRequest:(id)arg1;
- (void).cxx_destruct;
- (id)preparedURLRequest;

@end
