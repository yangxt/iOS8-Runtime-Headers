/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class NSString;

@interface BRCServerPersistedState : NSObject <NSSecureCoding, NSCopying, PQLBindable> {
    BOOL _containerMetadataNeedsSubscription;
    NSString *_containerMetadataSubscriptionID;
    long long _nextRank;
}

@property long long nextRank;
@property(retain) NSString * containerMetadataSubscriptionID;
@property BOOL containerMetadataNeedsSubscription;

+ (BOOL)supportsSecureCoding;

- (id)initWithState:(id)arg1;
- (void)setNextRank:(long long)arg1;
- (long long)nextRank;
- (void)setContainerMetadataSubscriptionID:(id)arg1;
- (void)setContainerMetadataNeedsSubscription:(BOOL)arg1;
- (id)containerMetadataSubscriptionID;
- (BOOL)containerMetadataNeedsSubscription;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (void)saveToDB:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end