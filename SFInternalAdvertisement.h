/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class NSString, NSData, NSDate, NSDictionary;

@interface SFInternalAdvertisement : NSObject  {
    BOOL _domain;
    NSString *_advertisementString;
    NSDate *_timestamp;
    NSDictionary *_options;
    NSData *_payload;
}

@property(copy) NSString * advertisementString;
@property(getter=isDomain) BOOL domain;
@property(retain) NSDate * timestamp;
@property(copy) NSDictionary * options;
@property(retain) NSData * payload;


- (BOOL)isDomain;
- (void)setAdvertisementString:(id)arg1;
- (id)advertisementString;
- (id)initWithAdvertisementString:(id)arg1 isDomain:(BOOL)arg2 timestamp:(id)arg3 options:(id)arg4 payload:(id)arg5;
- (void)setDomain:(BOOL)arg1;
- (void)setPayload:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)payload;
- (id)timestamp;
- (id)options;
- (void)dealloc;

@end
