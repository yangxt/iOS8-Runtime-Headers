/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <_MFSearchResultsConsumer>, NSArray;

@interface _MFSearchAddResultsOperation : NSOperation  {
    <_MFSearchResultsConsumer> *_consumer;
    unsigned int _type;
    NSArray *_results;
}

+ (id)operationWithResults:(id)arg1 ofType:(unsigned int)arg2 consumer:(id)arg3;

- (void)main;
- (void)dealloc;

@end