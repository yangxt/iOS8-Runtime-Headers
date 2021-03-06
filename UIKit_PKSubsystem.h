/* Generated by RuntimeBrowser.
   Image: /usr/lib/libextension.dylib
 */

@class NSDictionary;

@interface UIKit_PKSubsystem : NSObject <PKModularService> {
    BOOL _initialized;
    BOOL _plugInKitProcess;
    NSDictionary *_infoDictionary;
}

@property(copy) NSDictionary * infoDictionary;
@property(getter=isPlugInKitProcess) BOOL plugInKitProcess;

+ (id)initForPlugInKit;
+ (id)sharedInstance;

- (void)setPlugInKitProcess:(BOOL)arg1;
- (void)beginUsing:(id)arg1 withBundle:(id)arg2;
- (void)setInfoDictionary:(id)arg1;
- (void)endUsing:(id)arg1;
- (BOOL)isPlugInKitProcess;
- (id)infoDictionary;

@end
