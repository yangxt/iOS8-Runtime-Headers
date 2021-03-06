/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSString, NSArray;

@interface SSTonePurchase : SSPurchase <SSXPCCoding, NSCoding, NSCopying> {
    NSArray *_allowedToneStyles;
    NSNumber *_assigneeIdentifier;
    NSString *_assigneeToneStyle;
    BOOL _shouldMakeDefaultRingtone;
    BOOL _shouldMakeDefaultTextTone;
}

@property(copy) NSArray * allowedToneStyles;
@property(retain) NSNumber * assigneeIdentifier;
@property(copy) NSString * assigneeToneStyle;
@property BOOL shouldMakeDefaultRingtone;
@property BOOL shouldMakeDefaultTextTone;


- (id)allowedToneStyles;
- (id)initWithItem:(id)arg1 offer:(id)arg2;
- (void)setAllowedToneStyles:(id)arg1;
- (BOOL)shouldMakeDefaultTextTone;
- (BOOL)shouldMakeDefaultRingtone;
- (id)assigneeToneStyle;
- (id)assigneeIdentifier;
- (void)setShouldMakeDefaultTextTone:(BOOL)arg1;
- (void)setShouldMakeDefaultRingtone:(BOOL)arg1;
- (void)setAssigneeToneStyle:(id)arg1;
- (void)setAssigneeIdentifier:(id)arg1;
- (void)_addEntriesToDatabaseEncoding:(id)arg1;
- (void)_setValuesUsingDatabaseEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
