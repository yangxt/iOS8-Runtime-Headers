/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSString, IMHandle;

@interface IMGroupTitleChangeChatItem : IMTranscriptChatItem  {
    IMHandle *_sender;
}

@property(copy,readonly) NSString * title;
@property(retain,readonly) IMHandle * sender;


- (id)_initWithItem:(id)arg1 sender:(id)arg2;
- (id)sender;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)title;
- (void)dealloc;
- (Class)__ck_chatItemClass;

@end
