/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

@class NSString, NSMutableDictionary, NSData;

@interface HTSHTTPMessage : NSObject  {
    NSMutableDictionary *_headers;
    NSData *_body;
    NSString *_versionString;
}

@property(retain) NSMutableDictionary * headers;
@property(retain) NSData * body;
@property(copy) NSString * versionString;


- (id)valueForHeaderField:(id)arg1;
- (struct __CFHTTPMessage { }*)copyMessage;
- (void)addHeadersToMessage:(struct __CFHTTPMessage { }*)arg1;
- (void)setHeaders:(id)arg1;
- (id)headers;
- (void)setBody:(id)arg1;
- (id)body;
- (void)dealloc;
- (id)versionString;
- (void)setVersionString:(id)arg1;

@end