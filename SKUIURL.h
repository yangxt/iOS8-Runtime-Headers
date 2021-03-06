/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSMutableDictionary, NSString, NSDictionary, NSURL;

@interface SKUIURL : NSObject <NSCopying> {
    NSMutableDictionary *_queryDictionary;
    NSString *_referrerApplicationName;
    NSString *_referrerURLString;
    NSURL *_url;
}

@property(readonly) NSURL * underlyingURL;
@property(readonly) NSString * actionString;
@property(copy,readonly) NSDictionary * queryStringDictionary;
@property(readonly) NSString * redeemCode;
@property(readonly) NSString * searchTerm;
@property(readonly) NSString * URLBagKey;
@property(copy) NSString * referrerApplicationName;
@property(copy) NSString * referrerURLString;


- (id)queryStringDictionary;
- (id)_queryDictionary;
- (id)initWithURLBagKey:(id)arg1;
- (id)redeemCode;
- (id)newURLRequestWithBaseURL:(id)arg1;
- (id)URLBagKey;
- (void)setReferrerURLString:(id)arg1;
- (id)referrerURLString;
- (void)setReferrerApplicationName:(id)arg1;
- (id)referrerApplicationName;
- (id)valueForQueryParameter:(id)arg1;
- (id)underlyingURL;
- (id)actionString;
- (id)newURLRequest;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)searchTerm;

@end
