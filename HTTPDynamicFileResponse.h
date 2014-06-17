/* Generated by RuntimeBrowser.
   Image: /private/var/mobile/Containers/Bundle/Application/DDE3370B-7D9E-43B6-9A8A-C891DDE1C4A0/OCRuntime.app/OCRuntime
 */

@class NSData, NSDictionary;

@interface HTTPDynamicFileResponse : HTTPAsyncFileResponse  {
    NSData *separator;
    NSDictionary *replacementDict;
}


- (BOOL)isDone;
- (void)setOffset:(unsigned long long)arg1;
- (void)dealloc;
- (unsigned long long)contentLength;
- (id)initWithFilePath:(id)arg1 forConnection:(id)arg2 separator:(id)arg3 replacementDictionary:(id)arg4;
- (BOOL)isChunked;
- (void)processReadBuffer;

@end