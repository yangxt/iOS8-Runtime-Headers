/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString, NSDictionary, SAUIImageResource, SAUIAddViews;

@interface SAUIAppPunchOut : SABaseClientBoundCommand  {
}

@property(retain) SAUIAddViews * alternativePunchOut;
@property BOOL appAvailableInStorefront;
@property(copy) NSString * appDisplayName;
@property(retain) SAUIImageResource * appIcon;
@property(copy) NSDictionary * appIconMap;
@property BOOL appInstalled;
@property(copy) NSURL * appStoreUri;
@property(copy) NSString * bundleId;
@property(copy) NSString * providerId;
@property(copy) NSString * punchOutName;
@property(copy) NSURL * punchOutUri;

+ (id)appPunchOutWithDictionary:(id)arg1 context:(id)arg2;
+ (id)appPunchOut;

- (void)setPunchOutUri:(id)arg1;
- (id)punchOutUri;
- (void)setPunchOutName:(id)arg1;
- (id)punchOutName;
- (void)setBundleId:(id)arg1;
- (void)setAppStoreUri:(id)arg1;
- (id)appStoreUri;
- (void)setAppInstalled:(BOOL)arg1;
- (BOOL)appInstalled;
- (void)setAppIconMap:(id)arg1;
- (id)appIconMap;
- (void)setAppIcon:(id)arg1;
- (id)appIcon;
- (void)setAppDisplayName:(id)arg1;
- (id)appDisplayName;
- (void)setAppAvailableInStorefront:(BOOL)arg1;
- (BOOL)appAvailableInStorefront;
- (void)setAlternativePunchOut:(id)arg1;
- (id)alternativePunchOut;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)providerId;
- (void)setProviderId:(id)arg1;
- (id)bundleId;
- (id)groupIdentifier;
- (void)afui_getInstallAppPunchoutWithCompletion:(id)arg1;
- (id)afui_punchOutAppNotAvailableViews;
- (id)afui_punchOutFailureViews;

@end