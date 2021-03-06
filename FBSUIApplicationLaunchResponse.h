/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class BSMachSendRight;

@interface FBSUIApplicationLaunchResponse : FBSWorkspaceResponse  {
    BOOL _supportsTaskSuspension;
    BOOL _supportsTaskSuspensionOnLock;
    BSMachSendRight *_taskPort;
}

@property BOOL supportsTaskSuspension;
@property BOOL supportsTaskSuspensionOnLock;
@property(retain) BSMachSendRight * taskPort;


- (BOOL)supportsTaskSuspensionOnLock;
- (BOOL)supportsTaskSuspension;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)setTaskPort:(id)arg1;
- (id)taskPort;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setSupportsTaskSuspensionOnLock:(BOOL)arg1;
- (void)setSupportsTaskSuspension:(BOOL)arg1;
- (void)dealloc;

@end
