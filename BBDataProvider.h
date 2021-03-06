/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class BBDataProviderIdentity;

@interface BBDataProvider : NSObject <BBSectionIdentity> {
    BBDataProviderIdentity *_identity;
}

@property(retain) BBDataProviderIdentity * identity;


- (id)identity;
- (void)setIdentity:(id)arg1;
- (BOOL)canPerformMigration;
- (void)reloadIdentityWithCompletion:(id)arg1;
- (void)startWatchdog;
- (BOOL)initialized;
- (void)noteSectionInfoDidChange:(id)arg1;
- (BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2;
- (id)displayNameForSubsectionID:(id)arg1;
- (id)defaultSubsectionInfos;
- (void)dataProviderDidLoad;
- (id)parentSectionIdentifier;
- (id)defaultSectionInfo;
- (BOOL)isPushDataProvider;
- (void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2;
- (id)sectionIcon;
- (id)sectionDisplayName;
- (void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(id)arg2 completion:(id)arg3;
- (void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(id)arg2 completion:(id)arg3;
- (void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(id)arg3;
- (void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;
- (id)universalSectionIdentifier;
- (void)attachmentAspectRatioForRecordID:(id)arg1 completion:(id)arg2;
- (void)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 completion:(id)arg3;
- (id)sectionParameters;
- (void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(id)arg3;
- (void)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(id)arg1 lastClearedInfo:(id)arg2 completion:(id)arg3;
- (BOOL)canClearAllBulletins;
- (BOOL)syncsBulletinDismissal;
- (id)sectionIdentifier;
- (id)sortDescriptors;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (id)sortKey;

@end
