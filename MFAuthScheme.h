/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAuthScheme : NSObject  {
}

+ (id)authSchemesForAccount:(id)arg1 connection:(id)arg2;
+ (void)registerSchemeClass:(Class)arg1;
+ (id)schemeWithName:(id)arg1;
+ (id)knownSchemes;
+ (void)initialize;

- (id)humanReadableName;
- (id)authenticatorForAccount:(id)arg1 connection:(id)arg2;
- (BOOL)hasEncryption;
- (unsigned int)defaultPortForAccount:(id)arg1;
- (Class)authenticatorClass;
- (Class)connectionClassForAccountClass:(Class)arg1;
- (BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (BOOL)requiresPassword;
- (id)name;

@end
