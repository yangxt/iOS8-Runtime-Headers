/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSArray, NSString, NSDate, NSMutableArray, NSAttributedString;

@interface CKDBMessage : NSObject  {
    NSString *_text;
    NSString *_subject;
    NSString *_address;
    NSString *_groupID;
    NSString *_guid;
    NSString *_madridRoomname;
    NSString *_madridService;
    NSString *_madridAccount;
    NSString *_madridAccountGUID;
    NSString *_madridChatGUID;
    NSString *_madridChatIdentifier;
    BOOL _isMadrid;
    BOOL _hasBeenRead;
    BOOL _isOutgoing;
    BOOL _isVisibleByDefault;
    BOOL _isAudioMessage;
    long long _madridType;
    int _identifier;
    NSDate *_date;
    NSArray *_recipients;
    NSString *_plainBody;
    NSAttributedString *_madridAttributedBody;
    NSMutableArray *_mediaObjects;
    NSString *_voicemailString;
    NSString *_madridAccountLogin;
}

@property(readonly) NSString * madridChatGUID;
@property(readonly) BOOL isVisibleByDefault;
@property int identifier;
@property(copy,readonly) NSArray * recipients;
@property(retain,readonly) NSArray * mediaObjects;
@property(copy,readonly) NSString * attachmentText;
@property(readonly) BOOL hasAttachments;
@property(retain,readonly) NSString * plainBody;
@property(retain,readonly) NSString * groupID;
@property(retain,readonly) NSString * text;
@property(retain,readonly) NSString * subject;
@property(retain,readonly) NSString * address;
@property(retain,readonly) NSString * formattedAddress;
@property(retain,readonly) NSString * guid;
@property(retain,readonly) NSString * madridRoomname;
@property(retain,readonly) NSString * madridService;
@property(retain,readonly) NSString * madridAccountLogin;
@property(retain,readonly) NSString * madridAccountGUID;
@property(retain,readonly) NSString * madridChatIdentifier;
@property(readonly) BOOL isMadrid;
@property(readonly) BOOL hasBeenRead;
@property(readonly) BOOL isAudioMessage;
@property(readonly) BOOL isOutgoing;
@property(readonly) long long madridType;
@property(retain,readonly) NSDate * date;
@property(retain,readonly) NSAttributedString * madridAttributedBody;


- (id)groupID;
- (id)address;
- (id)guid;
- (id)madridChatIdentifier;
- (BOOL)isVisibleByDefault;
- (id)madridChatGUID;
- (id)madridAttributedBody;
- (long long)madridType;
- (BOOL)isOutgoing;
- (BOOL)hasBeenRead;
- (id)madridAccountGUID;
- (id)madridAccountLogin;
- (id)madridService;
- (id)madridRoomname;
- (id)formattedAddress;
- (id)attachmentText;
- (id)initWithMadridMessageGUID:(id)arg1;
- (id)initWithRecordID:(int)arg1;
- (id)alertImage;
- (BOOL)isMadrid;
- (id)voicemailString;
- (BOOL)senderIsVoicemail;
- (id)attachmentText:(BOOL)arg1;
- (id)previewText;
- (BOOL)isAudioMessage;
- (id)plainBody;
- (id)mediaObjects;
- (id)subject;
- (void)setIdentifier:(int)arg1;
- (id)text;
- (id)date;
- (int)identifier;
- (id)recipients;
- (id)description;
- (void)dealloc;
- (BOOL)hasAttachments;

@end