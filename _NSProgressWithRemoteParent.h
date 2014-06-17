/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSXPCConnection;

@interface _NSProgressWithRemoteParent : NSProgress  {
    NSXPCConnection *_parentConnection;
    unsigned long long _sequence;
}

@property(retain) NSXPCConnection * parentConnection;
@property unsigned long long sequence;


- (void)dealloc;
- (unsigned long long)sequence;
- (id)parentConnection;
- (void)_updateFractionCompletedFromOldFraction:(id)arg1 toNewFraction:(id)arg2;
- (void)setParentConnection:(id)arg1;
- (void)setSequence:(unsigned long long)arg1;

@end