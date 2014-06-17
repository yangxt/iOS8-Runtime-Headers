/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class NSURL, SAUIAppPunchOut, NSString, NSBundle;

@interface SiriUIAttributionImage : NSObject  {
    NSString *_localResourceName;
    NSString *_localPressedResourceName;
    SAUIAppPunchOut *_localPunchOut;
    NSBundle *_localResourceBundle;
    NSURL *_remoteURL;
    NSURL *_remotePressedURL;
    SAUIAppPunchOut *_remotePunchOut;
    float _remoteScale;
    float _remotePressedScale;
    struct CGSize { 
        float width; 
        float height; 
    } _logoSize;
}

@property(copy) NSString * localResourceName;
@property(copy) NSString * localPressedResourceName;
@property(retain) SAUIAppPunchOut * localPunchOut;
@property(retain) NSBundle * localResourceBundle;
@property(copy) NSURL * remoteURL;
@property(copy) NSURL * remotePressedURL;
@property(retain) SAUIAppPunchOut * remotePunchOut;
@property float remoteScale;
@property float remotePressedScale;
@property struct CGSize { float x1; float x2; } logoSize;

+ (id)attributionImageWithLocalResourceName:(id)arg1 pressedResourceName:(id)arg2 localPunchOut:(id)arg3 bundle:(id)arg4;
+ (id)attributionImageFromAppPunchOut:(id)arg1;
+ (id)attributionImageFromKey:(id)arg1 pressedKey:(id)arg2 punchOut:(id)arg3;

- (void)setRemoteURL:(id)arg1;
- (id)remoteURL;
- (struct CGSize { float x1; float x2; })logoSize;
- (void)getLogoWithCompletion:(id)arg1;
- (id)remotePunchOut;
- (float)remotePressedScale;
- (id)remotePressedURL;
- (float)remoteScale;
- (id)localResourceBundle;
- (id)localPunchOut;
- (id)localPressedResourceName;
- (id)_imageInLocalResourceBundleNamed:(id)arg1;
- (void)_fetchLocalResourcesWithCompletion:(id)arg1;
- (void)_fetchRemoteResourcesWithCompletion:(id)arg1;
- (id)localResourceName;
- (void)setRemotePunchOut:(id)arg1;
- (void)setLogoSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setRemotePressedScale:(float)arg1;
- (void)setRemotePressedURL:(id)arg1;
- (void)setRemoteScale:(float)arg1;
- (void)setLocalPunchOut:(id)arg1;
- (void)setLocalPressedResourceName:(id)arg1;
- (void)setLocalResourceName:(id)arg1;
- (void)setLocalResourceBundle:(id)arg1;
- (void).cxx_destruct;

@end