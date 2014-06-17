/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSURL, NSString;

@interface UIPrinter : NSObject  {
    id _printerInfo;
    NSURL *URL;
}

@property(copy,readonly) NSURL * URL;
@property(copy,readonly) NSString * displayName;
@property(copy,readonly) NSString * displayLocation;
@property(readonly) int supportedJobTypes;
@property(copy,readonly) NSString * makeAndModel;
@property(readonly) BOOL supportsColor;
@property(readonly) BOOL supportsDuplex;

+ (id)printerWithURL:(id)arg1;

- (void)contactPrinter:(id)arg1;
- (BOOL)supportsDuplex;
- (BOOL)supportsColor;
- (int)supportedJobTypes;
- (id)displayLocation;
- (id)makeAndModel;
- (id)_initWithURL:(id)arg1;
- (id)_internalPrinter;
- (id)displayName;
- (id)_initWithPrinter:(id)arg1;
- (id)URL;
- (id)init;

@end