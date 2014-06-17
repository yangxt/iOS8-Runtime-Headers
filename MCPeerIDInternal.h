/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@class NSString;

@interface MCPeerIDInternal : NSObject  {
    NSString *_idString;
    NSString *_displayName;
    unsigned long long _pid64;
}

@property(readonly) NSString * idString;
@property(readonly) unsigned long long pid64;
@property(readonly) NSString * displayName;


- (id)displayName;
- (unsigned long long)pid64;
- (id)initWithIDString:(id)arg1 pid64:(unsigned long long)arg2 displayName:(id)arg3;
- (void)dealloc;
- (id)idString;

@end