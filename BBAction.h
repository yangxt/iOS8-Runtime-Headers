/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSDictionary, BBAppearance, NSURL;

@interface BBAction : NSObject <NSCopying, NSSecureCoding> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _internalBlock;

    BOOL _deliverResponse;
    NSURL *_launchURL;
    NSString *_launchBundleID;
    BOOL _launchCanBypassPinLock;
    BOOL _authenticationRequired;
    BOOL _shouldDismissBulletin;
    NSString *_activatePluginName;
    NSDictionary *_activatePluginContext;
    int _actionType;
    NSString *_identifier;
    BBAppearance *_appearance;
    unsigned int _activationMode;
    NSString *_remoteViewControllerClassName;
    NSString *_remoteServiceBundleIdentifier;
}

@property(copy) NSString * identifier;
@property(copy) BBAppearance * appearance;
@property(getter=isAuthenticationRequired) BOOL authenticationRequired;
@property BOOL shouldDismissBulletin;
@property(copy) NSURL * launchURL;
@property(copy) NSString * launchBundleID;
@property BOOL launchCanBypassPinLock;
@property unsigned int activationMode;
@property(copy) NSString * activatePluginName;
@property(copy) NSDictionary * activatePluginContext;
@property(copy) NSString * remoteViewControllerClassName;
@property(copy) NSString * remoteServiceBundleIdentifier;
@property BOOL canBypassPinLock;
@property(copy) id internalBlock;
@property int actionType;

+ (id)actionWithActivatePluginName:(id)arg1 activationContext:(id)arg2;
+ (id)actionWithLaunchBundleID:(id)arg1;
+ (id)actionWithLaunchURL:(id)arg1;
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2;
+ (id)actionWithAppearance:(id)arg1;
+ (id)actionWithCallblock:(id)arg1;
+ (id)actionWithLaunchBundleID:(id)arg1 callblock:(id)arg2;
+ (id)actionWithLaunchURL:(id)arg1 callblock:(id)arg2;
+ (id)actionWithIdentifier:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)action;

- (void)setAppearance:(id)arg1;
- (id)launchURL;
- (void)setLaunchURL:(id)arg1;
- (int)actionType;
- (void)setActionType:(int)arg1;
- (id)bundleID;
- (BOOL)hasRemoteViewAction;
- (BOOL)hasPluginAction;
- (BOOL)hasLaunchAction;
- (id)partialDescription;
- (void)setShouldDismissBulletin:(BOOL)arg1;
- (void)setRemoteServiceBundleIdentifier:(id)arg1;
- (void)setRemoteViewControllerClassName:(id)arg1;
- (void)setCanBypassPinLock:(BOOL)arg1;
- (BOOL)shouldDismissBulletin;
- (id)_nameForActionType:(int)arg1;
- (id)activatePluginContext;
- (BOOL)canBypassPinLock;
- (id)internalBlock;
- (void)setLaunchCanBypassPinLock:(BOOL)arg1;
- (BOOL)launchCanBypassPinLock;
- (id)remoteViewControllerClassName;
- (id)remoteServiceBundleIdentifier;
- (id)activatePluginName;
- (void)setInternalBlock:(id)arg1;
- (void)setActivatePluginContext:(id)arg1;
- (void)setActivatePluginName:(id)arg1;
- (void)setLaunchBundleID:(id)arg1;
- (void)setCallblock:(id)arg1;
- (BOOL)deliverResponse:(id)arg1;
- (id)launchBundleID;
- (void)setAuthenticationRequired:(BOOL)arg1;
- (void)setActivationMode:(unsigned int)arg1;
- (BOOL)isAuthenticationRequired;
- (unsigned int)activationMode;
- (id)initWithIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)appearance;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)url;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end
