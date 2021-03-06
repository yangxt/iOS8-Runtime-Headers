/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSObject<OS_dispatch_queue>;

@interface SUMescalSession : NSObject  {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _complete;
    struct FairPlayHWInfo_ { 
        unsigned int IDLength; 
        unsigned char ID[20]; 
    } _hardwareInfo;
    struct FPSAPContextOpaque_ { } *_session;
}

@property(getter=isComplete,readonly) BOOL complete;


- (id)signData:(id)arg1 error:(id*)arg2;
- (id)exchangeData:(id)arg1 error:(id*)arg2;
- (void)_teardownSession;
- (id)_newDataWithBytes:(char *)arg1 length:(unsigned long)arg2;
- (id)primeForAccountCreationWithData:(id)arg1 error:(id*)arg2;
- (BOOL)verifyPrimeSignature:(id)arg1 error:(id*)arg2;
- (BOOL)isComplete;
- (void)dealloc;
- (id)init;

@end
