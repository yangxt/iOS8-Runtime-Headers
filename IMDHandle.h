/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class NSString, NSDictionary;

@interface IMDHandle : NSObject  {
    NSString *_id;
    NSString *_unformattedID;
    NSString *_countryCode;
}

@property(retain) NSString * ID;
@property(retain) NSString * unformattedID;
@property(retain) NSString * countryCode;
@property(retain,readonly) NSDictionary * handleInfo;


- (id)countryCode;
- (void)setCountryCode:(id)arg1;
- (void)setUnformattedID:(id)arg1;
- (id)unformattedID;
- (id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3;
- (BOOL)isBetterDefinedThan:(id)arg1;
- (id)handleInfo;
- (void)setID:(id)arg1;
- (int)compareIDs:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)ID;

@end
