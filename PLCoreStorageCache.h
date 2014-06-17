/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@class NSMutableDictionary;

@interface PLCoreStorageCache : NSObject  {
    NSMutableDictionary *_lastEntryCache;
}

@property(retain) NSMutableDictionary * lastEntryCache;


- (void)setLastEntryCache:(id)arg1;
- (id)readLastEntryCache:(id)arg1 withID:(id)arg2;
- (void)updateLastEntryCache:(id)arg1 wasUpdate:(BOOL)arg2;
- (void)clearLastEntryCache:(id)arg1;
- (id)lastEntryCache;
- (BOOL)shouldCache:(id)arg1;
- (void).cxx_destruct;

@end