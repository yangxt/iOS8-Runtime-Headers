/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSDate, NSString, NSDictionary;

@interface MSASAlbum : NSObject <NSCopying> {
    BOOL _isFamilySharedAlbum;
    NSString *_ownerEmail;
    NSString *_ownerPersonID;
    NSString *_ownerFullName;
    NSString *_ownerFirstName;
    NSString *_ownerLastName;
    NSDate *_subscriptionDate;
    NSString *_GUID;
    NSString *_ctag;
    int _relationshipState;
    NSString *_foreignCtag;
    NSString *_URLString;
    NSString *_publicURLString;
    NSDictionary *_metadata;
    id _context;
}

@property(retain) NSString * ownerEmail;
@property(retain) NSString * ownerFullName;
@property(retain) NSString * ownerPersonID;
@property(retain) NSString * ownerFirstName;
@property(retain) NSString * ownerLastName;
@property(retain) NSDate * subscriptionDate;
@property(retain) NSString * GUID;
@property(retain) NSString * ctag;
@property int relationshipState;
@property(retain) NSString * foreignCtag;
@property(retain) NSString * URLString;
@property(retain) NSString * publicURLString;
@property(retain) NSDictionary * metadata;
@property(retain) id context;
@property BOOL isFamilySharedAlbum;
@property(readonly) BOOL useForeignCtag;

+ (id)album;
+ (id)albumWithAlbum:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)subscriptionDate;
- (id)ownerPersonID;
- (id)ownerFullName;
- (id)ownerLastName;
- (id)ownerFirstName;
- (id)ownerEmail;
- (BOOL)isFamilySharedAlbum;
- (int)relationshipState;
- (id)publicURLString;
- (id)GUID;
- (void)setGUID:(id)arg1;
- (id)metadataValueForKey:(id)arg1;
- (void)setPublicURLString:(id)arg1;
- (BOOL)useForeignCtag;
- (void)setIsFamilySharedAlbum:(BOOL)arg1;
- (void)setForeignCtag:(id)arg1;
- (id)foreignCtag;
- (void)setRelationshipState:(int)arg1;
- (void)setSubscriptionDate:(id)arg1;
- (void)setOwnerLastName:(id)arg1;
- (void)setOwnerFirstName:(id)arg1;
- (void)setOwnerFullName:(id)arg1;
- (void)setOwnerPersonID:(id)arg1;
- (void)setOwnerEmail:(id)arg1;
- (void)setCtag:(id)arg1;
- (id)ctag;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (void)setURLString:(id)arg1;
- (id)URLString;
- (void).cxx_destruct;
- (void)setContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)context;
- (id)description;

@end
