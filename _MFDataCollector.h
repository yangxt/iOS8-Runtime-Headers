/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFLibraryMessage, MFBufferedDataConsumer, NSString, MFMailMessageLibrary;

@interface _MFDataCollector : NSObject <MFGuaranteedCollectingDataConsumer> {
    MFMailMessageLibrary *_library;
    MFLibraryMessage *_message;
    MFBufferedDataConsumer *_consumer;
    NSString *_part;
    BOOL _partial;
    BOOL _incomplete;
}


- (id)pathForStorage;
- (id)initWithLibrary:(id)arg1 message:(id)arg2 part:(id)arg3 partial:(BOOL)arg4 incomplete:(BOOL)arg5;
- (int)appendData:(id)arg1;
- (void)done;
- (id)data;
- (void)dealloc;

@end
