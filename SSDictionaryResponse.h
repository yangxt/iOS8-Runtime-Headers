/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSDictionary, NSNumber, NSURL;

@interface SSDictionaryResponse : NSObject <NSCopying> {
    NSDictionary *_dictionary;
}

@property(readonly) NSDictionary * responseDictionary;
@property(readonly) NSArray * actions;
@property(readonly) NSNumber * failureType;
@property(readonly) NSArray * pingURLs;
@property(getter=isSupportedProtocolVersion,readonly) BOOL supportedProtocolVersion;
@property(readonly) NSURL * versionMismatchURL;


- (id)versionMismatchURL;
- (BOOL)isSupportedProtocolVersion;
- (id)failureType;
- (id)_copyAccount;
- (id)_valueForProtocolKey:(id)arg1;
- (id)actionsWithActionType:(id)arg1;
- (id)pingURLs;
- (id)responseDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)actions;
- (void)dealloc;
- (id)init;
- (id)initWithResponseDictionary:(id)arg1;

@end
