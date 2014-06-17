/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectModel, NSString;

@interface PFUbiquityBaselineOperation : PFUbiquityImportOperation  {
    NSString *_modelVersionHash;
    NSManagedObjectModel *_model;
}

@property(readonly) NSString * modelVersionHash;
@property(readonly) NSManagedObjectModel * model;


- (id)model;
- (id)description;
- (void)dealloc;
- (id)initWithPersistentStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;
- (id)modelVersionHash;

@end