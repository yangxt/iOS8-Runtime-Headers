/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSString, NSMutableData;

@interface PTPHostUSBTransport : PTPTransport  {
    unsigned long _locationID;
    unsigned short _vendorID;
    unsigned short _productID;
    NSString *_usbSerialNumberString;
    struct IOUSBInterfaceStruct300 {} **_interfaceInterfaceRef;
    unsigned char _bulkPipeIn;
    unsigned char _bulkPipeOut;
    unsigned char _interruptPipeIn;
    unsigned long _readBufferSize;
    unsigned long _writeBufferSize;
    unsigned long _eventDataBufferSize;
    char *_readBuffer;
    char *_writeBuffer;
    char *_eventDataBuffer;
    NSMutableData *_eventData;
    int _maxPacketSizeBulkIn;
    int _maxPacketSizeBulkOut;
    int _maxPacketSizeInterruptIn;
    struct __CFRunLoopSource { } *_CFRunLoopSource;
    BOOL _connected;
}


- (void)sendData:(id)arg1;
- (void)clearBulkInPipeStall;
- (void)clearPipeStall:(unsigned char)arg1;
- (void)handleInterruptData:(unsigned long)arg1;
- (BOOL)handleBulkData:(unsigned long)arg1 result:(int)arg2;
- (void)dumpData:(void*)arg1 length:(int)arg2 comment:(id)arg3;
- (unsigned long)locationID;
- (int)readBulkDataWithTimeout:(unsigned long)arg1;
- (BOOL)writeBulkData:(id)arg1;
- (int)readInterruptData;
- (void)deviceReset;
- (unsigned short)deviceStatus;
- (id)usbSerialNumberString;
- (unsigned short)productID;
- (unsigned short)vendorID;
- (void)abortPendingIO;
- (id)initWithLocationID:(unsigned long)arg1 delegate:(id)arg2;
- (void)cancelTransaction:(id)arg1;
- (id)sendRequest:(id)arg1 sendData:(id)arg2 timeout:(unsigned long)arg3;
- (id)sendRequest:(id)arg1 receiveData:(id)arg2 timeout:(unsigned long)arg3;
- (BOOL)sendCancel:(id)arg1;
- (BOOL)connected;
- (void)sendDataPackets:(id)arg1;
- (int)waitForCallbackThreadConditionSignalWithTimeout:(long)arg1;
- (BOOL)startInitiator;
- (unsigned short)cancelRequest:(id)arg1;
- (void)setConnected:(BOOL)arg1;
- (BOOL)sendEvent:(id)arg1;
- (void)stop;
- (id)description;
- (void)dealloc;

@end