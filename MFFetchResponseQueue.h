/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class MFIMAPConnection, MFLibraryIMAPStore;

@interface MFFetchResponseQueue : MFBufferedQueue  {
    MFLibraryIMAPStore *_store;
    MFIMAPConnection *_connection;
    unsigned int _numNewUIDs;
    unsigned int _newMessageCount;
    unsigned long long _highestModSequence;
    unsigned long long _flags;
    BOOL _isSearching;
}


- (BOOL)handleItems:(id)arg1;
- (id)messageToSyncFlagsForUID:(unsigned int)arg1;
- (BOOL)shouldAddUID:(unsigned int)arg1;
- (id)insertMessages:(id)arg1;
- (BOOL)addItem:(id)arg1;
- (void)dealloc;
- (id)init;

@end
