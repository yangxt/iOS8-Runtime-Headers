/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class <SKProductsRequestDelegate>;

@interface SKProductsRequest : SKRequest  {
    id _productsRequestInternal;
}

@property <SKProductsRequestDelegate> * delegate;


- (void)_sendXPCMessage;
- (id)initWithProductIdentifiers:(id)arg1;
- (void)_handleReply:(id)arg1;
- (void)dealloc;
- (id)init;

@end