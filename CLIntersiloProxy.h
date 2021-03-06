/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class CLSilo, CLIntersiloProxy, CLIntersiloInterfaceSelectorInfo, CLIntersiloInterface;

@interface CLIntersiloProxy : NSProxy <CLIntersiloServiceProtocol> {
    CLIntersiloProxy *_peer;
    CLIntersiloProxy *_asymStrongPeer;
    CLIntersiloInterfaceSelectorInfo *_last;
    id _delegate;
    CLSilo *_delegateSilo;
    CLIntersiloInterface *_delegateInterface;
    CLIntersiloInterface *_proxiedInterface;
}

@property(readonly) id delegate;
@property(readonly) CLSilo * delegateSilo;
@property(copy,readonly) CLIntersiloInterface * delegateInterface;
@property(copy,readonly) CLIntersiloInterface * proxiedInterface;

+ (id)proxyForRecipientObject:(id)arg1 inSilo:(id)arg2 withInboundInterface:(id)arg3 andOutboundInterface:(id)arg4;
+ (id)getSilo;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)delegate;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)proxiedInterface;
- (id)delegateInterface;
- (void)heartAttack;
- (id)delegateSilo;
- (id)initWithDelegateInterface:(id)arg1 proxiedInterface:(id)arg2 andUninitializedPeer:(id)arg3;
- (id)initWithDelegateInterface:(id)arg1 proxiedInterface:(id)arg2 delegateObject:(id)arg3 delegateSilo:(id)arg4 andUninitializedPeer:(id)arg5;
- (void)registerDelegate:(id)arg1 inSilo:(id)arg2;

@end
