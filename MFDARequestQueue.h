/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString, DAMailAccount;

@interface MFDARequestQueue : MFRequestQueue  {
    DAMailAccount *_account;
    NSString *_folderID;
}


- (void)processRequests:(id)arg1 consumers:(id)arg2;
- (id)filterRequests:(id)arg1 consumers:(id)arg2 newConsumers:(id*)arg3;
- (id)initWithAccount:(id)arg1 folderID:(id)arg2;
- (void)dealloc;

@end
