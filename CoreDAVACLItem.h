/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableSet;

@interface CoreDAVACLItem : CoreDAVItem  {
    NSMutableSet *_accessControlEntities;
}

@property(retain) NSMutableSet * accessControlEntities;

+ (id)copyParseRules;

- (id)liveACEs;
- (id)notGrantedSubsetOfACEs:(id)arg1;
- (void)setAccessControlEntities:(id)arg1;
- (void)addACE:(id)arg1;
- (id)accessControlEntities;
- (id)description;
- (void)dealloc;
- (id)init;

@end