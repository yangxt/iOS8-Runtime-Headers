/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@class NSString;

@interface PKSandboxExtension : NSObject  {
    NSString *_token;
    long long _handle;
}

@property(retain) NSString * token;
@property long long handle;


- (void)expel;
- (void)consume;
- (void)setHandle:(long long)arg1;
- (long long)handle;
- (void)setToken:(id)arg1;
- (id)token;
- (void).cxx_destruct;
- (id)initWithExtension:(id)arg1;
- (void)dealloc;

@end