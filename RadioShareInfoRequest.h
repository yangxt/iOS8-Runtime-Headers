/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSArray, NSString, SSURLConnectionRequest;

@interface RadioShareInfoRequest : RadioRequest  {
    SSURLConnectionRequest *_request;
    int _shareType;
    long long _stationID;
    NSString *_stationHash;
    NSArray *_acceptedMIMETypes;
}

@property(copy) NSArray * acceptedMIMETypes;


- (void)startWithShareInformationCompletionHandler:(id)arg1;
- (void)setAcceptedMIMETypes:(id)arg1;
- (id)initWithStation:(id)arg1 shareType:(int)arg2;
- (id)acceptedMIMETypes;
- (void)startWithCompletionHandler:(id)arg1;
- (void).cxx_destruct;

@end
