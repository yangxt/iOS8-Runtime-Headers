/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@class NSString;

@interface CalLogFileWriter : CalLogWriter  {
    NSString *_path;
    int _fileDescriptor;
    BOOL _fileDescriptorIsValid;
}

@property(retain) NSString * path;
@property int fileDescriptor;
@property BOOL fileDescriptorIsValid;


- (void)write:(id)arg1;
- (int)fileDescriptor;
- (void)setFileDescriptor:(int)arg1;
- (BOOL)fileDescriptorIsValid;
- (void)setFileDescriptorIsValid:(BOOL)arg1;
- (id)initWithParameters:(id)arg1;
- (void).cxx_destruct;
- (void)setPath:(id)arg1;
- (id)path;
- (id)description;
- (void)dealloc;

@end