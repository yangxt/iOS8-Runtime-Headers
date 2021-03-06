/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray;

@interface SASendCommands : SABaseClientBoundCommand  {
}

@property(copy) NSArray * commands;

+ (id)sendCommandsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sendCommands;

- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setCommands:(id)arg1;
- (id)commands;
- (id)groupIdentifier;

@end
