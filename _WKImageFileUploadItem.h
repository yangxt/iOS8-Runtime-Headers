/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKImageFileUploadItem : _WKFileUploadItem  {
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    } _filePath;
    struct RetainPtr<UIImage> { 
        void *m_ptr; 
    } _originalImage;
}


- (id)initWithFilePath:(id)arg1 originalImage:(id)arg2;
- (BOOL)isVideo;
- (id)displayImage;
- (id)fileURL;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
