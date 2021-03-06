/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEORPProblemRequest, GEORPProblem, <GEOMapItemPrivate>, GEOMapServiceTraits;

@interface _GEORPSubmissionTicket : NSObject <GEOMapServiceProblemReportTicket> {
    GEORPProblem *_problem;
    <GEOMapItemPrivate> *_place;
    GEORPProblemRequest *_problemRequest;
    GEOMapServiceTraits *_traits;
    BOOL _canceled;
}

@property(readonly) GEOMapServiceTraits * traits;


- (id)initWithProblem:(id)arg1 placeForProblemContext:(id)arg2 traits:(id)arg3;
- (void)submitWithHandler:(id)arg1 networkActivity:(id)arg2;
- (id)traits;
- (void)cancel;
- (void)dealloc;

@end
