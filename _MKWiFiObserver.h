/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <_MKWiFiObserverDelegate>;

@interface _MKWiFiObserver : NSObject  {
    struct __WiFiManagerClient { } *_wifiManager;
    struct __WiFiDeviceClient { } *_wifiDevice;
    BOOL _wifiEnabled;
    <_MKWiFiObserverDelegate> *_delegate;
}

@property(getter=isWifiEnabled,readonly) BOOL wifiEnabled;
@property <_MKWiFiObserverDelegate> * delegate;


- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)init;
- (void)_updateWiFiState:(BOOL)arg1;
- (BOOL)isWifiEnabled;

@end
