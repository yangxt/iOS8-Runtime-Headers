/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSMutableData, NSString;

@interface MFBufferedDataConsumer : NSObject <MFGuaranteedCollectingDataConsumer> {
    NSMutableData *_data;
    int _fd;
    NSString *_path;
}


- (int)appendData:(id)arg1;
- (void)done;
- (id)data;
- (void)dealloc;
- (id)init;

@end