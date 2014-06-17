/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSDate, NSString;

@interface MCProfileInfo : NSObject  {
    NSString *_friendlyName;
    NSString *_profileDescription;
    NSString *_identifier;
    NSString *_UUID;
    NSString *_organization;
    NSDate *_expiryDate;
}

@property(readonly) NSString * friendlyName;
@property(readonly) NSString * profileDescription;
@property(readonly) NSString * identifier;
@property(readonly) NSString * UUID;
@property(readonly) NSString * organization;
@property(readonly) NSDate * expiryDate;


- (id)initWithProfile:(id)arg1;
- (id)expiryDate;
- (id)organization;
- (id)profileDescription;
- (id)friendlyName;
- (void).cxx_destruct;
- (id)UUID;
- (id)identifier;

@end