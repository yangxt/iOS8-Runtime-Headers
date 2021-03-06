/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSOutputStream : NSStream  {
}

@property(readonly) BOOL hasSpaceAvailable;

+ (id)outputStreamToMemory;
+ (id)outputStreamToFileAtPath:(id)arg1 append:(BOOL)arg2;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)outputStreamWithURL:(id)arg1 append:(BOOL)arg2;
+ (id)outputStreamToBuffer:(char *)arg1 capacity:(unsigned int)arg2;

- (int)write:(const char *)arg1 maxLength:(unsigned int)arg2;
- (BOOL)hasSpaceAvailable;
- (unsigned long)_cfTypeID;
- (struct { int x1; int x2; })_cfStreamError;

@end
