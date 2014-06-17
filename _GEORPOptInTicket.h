/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOMapServiceTraits, GEORPProblemOptInRequest;

@interface _GEORPOptInTicket : NSObject <GEOMapServiceFixNotificationTicket> {
    GEORPProblemOptInRequest *_request;
    GEOMapServiceTraits *_traits;
    BOOL _canceled;
}

@property(readonly) GEOMapServiceTraits * traits;


- (id)initWithSubmissionID:(id)arg1 allowNotificationsAtPushToken:(id)arg2 allowContactBackAtEmailAddress:(id)arg3 traits:(id)arg4;
- (void)submitWithHandler:(id)arg1 networkActivity:(id)arg2;
- (id)traits;
- (void)cancel;
- (void)dealloc;

@end