/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class SBKSyncTransaction;

@interface SBKSyncRequestData : SBKRequestData  {
}

@property(readonly) SBKSyncTransaction * transaction;


- (id)serializableRequestBodyPropertyList;
- (id)_serializableConflictDetectionOrdinalForKey:(id)arg1;
- (BOOL)_needsConflictDetection;
- (id)_serializableConflictDetectionValue;
- (id)_serializableDeleteItemPayloadDictionaryForKey:(id)arg1;
- (id)_serializableUpdateItemPayloadDictionaryForKey:(id)arg1;
- (id)syncTransaction;

@end
