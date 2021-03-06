/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class NSNumber, NSURL;

@interface SLWeiboUserRecord : SLMicroBlogUserRecord <NSSecureCoding> {
    NSNumber *_uid;
    NSURL *_objectID;
}

@property(copy) NSNumber * uid;
@property(retain) NSURL * objectID;

+ (BOOL)supportsSecureCoding;
+ (id)userRecordWithDictionaryRepresentation:(id)arg1;

- (void)setObjectID:(id)arg1;
- (id)objectID;
- (void).cxx_destruct;
- (id)uid;
- (void)setValuesWithUserDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)setUid:(id)arg1;

@end
