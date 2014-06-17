/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DAMailboxFetchMessageRequest : DAMailboxRequest  {
    int _maxSize;
}

@property int maxSize;
@property(copy) NSString * messageID;


- (id)initRequestForBodyFormat:(int)arg1 withMessageID:(id)arg2 withBodySizeLimit:(int)arg3;
- (void)setMaxSize:(int)arg1;
- (int)maxSize;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end