/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSSet, NSObject<OS_dispatch_queue>, MailAccount, <MFSecureMIMECompositionManagerDelegate>, NSLock, NSMutableSet, NSString, MFError, NSMutableDictionary;

@interface MFSecureMIMECompositionManager : NSObject  {
    <MFSecureMIMECompositionManagerDelegate> *_delegate;
    NSLock *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    MailAccount *_sendingAccount;
    NSString *_sendingAddress;
    struct __SecIdentity { } *_signingIdentity;
    MFError *_signingIdentityError;
    struct __SecIdentity { } *_encryptionIdentity;
    MFError *_encryptionIdentityError;
    NSMutableSet *_recipients;
    NSMutableDictionary *_errorsByRecipient;
    NSMutableDictionary *_certificatesByRecipient;
    int _signingPolicy;
    int _encryptionPolicy;
    int _signingStatus;
    int _encryptionStatus;
    unsigned int _encryptionStatusSemaphore;
    unsigned int _signingStatusSemaphore;
    BOOL _invalidated;
}

@property <MFSecureMIMECompositionManagerDelegate> * delegate;
@property(copy) NSString * sendingAddress;
@property(readonly) MailAccount * sendingAccount;
@property(readonly) int signingPolicy;
@property(readonly) int encryptionPolicy;
@property(readonly) int signingStatus;
@property(readonly) int encryptionStatus;
@property(readonly) NSSet * recipients;

+ (id)copyEncryptionCertificatesForAccount:(id)arg1 recipientAddress:(id)arg2 error:(id*)arg3;
+ (struct __SecIdentity { }*)copyEncryptionIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id*)arg3;
+ (struct __SecIdentity { }*)copySigningIdentityForAccount:(id)arg1 sendingAddress:(id)arg2 error:(id*)arg3;

- (BOOL)shouldAllowSend;
- (int)encryptionStatus;
- (int)signingStatus;
- (int)encryptionPolicy;
- (int)signingPolicy;
- (id)sendingAccount;
- (id)sendingAddress;
- (void)setSendingAddress:(id)arg1;
- (void)removeRecipients:(id)arg1;
- (void)addRecipients:(id)arg1;
- (id)initWithSigningPolicy:(int)arg1 encryptionPolicy:(int)arg2;
- (BOOL)_shouldEncrypt_nts;
- (BOOL)_shouldSign_nts;
- (BOOL)_shouldAllowSend_nts;
- (void)_setEncryptionIdentityError_nts:(id)arg1;
- (void)_setSigningIdentityError_nts:(id)arg1;
- (void)_determineEncryptionStatusWithSendingAddress:(id)arg1;
- (void)_determineSigningStatusWithSendingAddress:(id)arg1;
- (void)_notifyDelegateSigningStatusDidChange:(int)arg1 identity:(struct __SecIdentity { }*)arg2 error:(id)arg3;
- (void)_determineEncryptionStatusWithNewRecipients:(id)arg1;
- (void)_notifyDelegateEncryptionStatusDidChange:(int)arg1 certsByRecipient:(id)arg2 errorsByRecipient:(id)arg3 identity:(struct __SecIdentity { }*)arg4 error:(id)arg5;
- (BOOL)_updateEncryptionStatus_nts;
- (BOOL)_updateSigningStatus_nts;
- (id)initWithSendingAccount:(id)arg1 signingPolicy:(int)arg2 encryptionPolicy:(int)arg3;
- (id)compositionSpecification;
- (id)delegate;
- (id)recipients;
- (void)invalidate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end
