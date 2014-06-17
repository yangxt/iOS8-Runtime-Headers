/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSDate, NSMutableArray;

@interface PKCatalog : NSObject <NSSecureCoding> {
    NSMutableArray *_groups;
    NSDate *_timestamp;
}

@property(retain) NSMutableArray * groups;
@property(retain) NSDate * timestamp;

+ (id)catalogWithContentsOfURL:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void)shuffle:(int)arg1;
- (id)allGroupIDs;
- (BOOL)isNewerThanCatalog:(id)arg1;
- (BOOL)isEquivalentToCatalog:(id)arg1;
- (void)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)groups;
- (void)setGroups:(id)arg1;

@end