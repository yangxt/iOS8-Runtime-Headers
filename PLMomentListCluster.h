/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableSet;

@interface PLMomentListCluster : NSObject  {
    unsigned int _month;
    unsigned int _year;
    unsigned int _numberOfMoments;
    unsigned int _numberOfAssets;
    NSMutableSet *__moments;
}

@property(readonly) unsigned int month;
@property(readonly) unsigned int year;
@property(readonly) unsigned int numberOfMoments;
@property(readonly) unsigned int numberOfAssets;
@property(readonly) NSMutableSet * _moments;


- (id)_moments;
- (unsigned int)numberOfAssets;
- (unsigned int)numberOfMoments;
- (unsigned int)peak;
- (void)removeMoment:(id)arg1;
- (void)addMoment:(id)arg1;
- (id)initWithMonth:(unsigned int)arg1 year:(unsigned int)arg2;
- (unsigned int)month;
- (unsigned int)year;
- (void)dealloc;
- (id)init;

@end
