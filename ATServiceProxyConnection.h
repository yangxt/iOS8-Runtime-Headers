/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@class ATService, NSXPCConnection;

@interface ATServiceProxyConnection : NSObject <ATServiceProxyConnection, ATServiceObserver> {
    ATService *_service;
    NSXPCConnection *_connection;
}

@property ATService * service;
@property(retain) NSXPCConnection * connection;


- (void)setService:(id)arg1;
- (void)service:(id)arg1 willOpenMessageLink:(id)arg2;
- (void)fetchMessageLinksWithCompletion:(id)arg1;
- (void)connectWithCompletion:(id)arg1;
- (id)initWithService:(id)arg1 connection:(id)arg2;
- (void)setConnection:(id)arg1;
- (id)connection;
- (void).cxx_destruct;
- (id)service;

@end
