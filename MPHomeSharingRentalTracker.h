/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface MPHomeSharingRentalTracker : NSObject  {
    NSObject<OS_dispatch_queue> *_rentalTrackerQueue;
    NSMutableDictionary *_rentals;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)init;
- (void)addRentalWithItemID:(unsigned long long)arg1 databaseID:(id)arg2;
- (void)removeRentalWithItemID:(unsigned long long)arg1;
- (void)_saveRentals;
- (void)removeAllRentalsForDatabaseID:(id)arg1;

@end
