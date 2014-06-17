/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSDate, ISPurchaseReceipt;

@interface SSPurchaseReceipt : NSObject  {
    ISPurchaseReceipt *_purchaseReceipt;
}

@property(readonly) BOOL isVPPLicensed;
@property(readonly) BOOL isRevoked;
@property(readonly) NSDate * expirationDate;

+ (void)getReceiptPathWithCompletionBlock:(id)arg1;

- (id)initWithContainerPath:(id)arg1;
- (BOOL)isVPPLicensed;
- (id)expirationDate;
- (void).cxx_destruct;
- (id)initWithContentsOfFile:(id)arg1;
- (BOOL)isRevoked;

@end