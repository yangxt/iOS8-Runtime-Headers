/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSArray, NSString, NSData, NSMutableDictionary;

@interface NSHTTPURLRequestParameters : NSObject  {
    NSString *method;
    NSMutableDictionary *fields;
    NSArray *extraCookies;
    NSData *data;
    unsigned int pageNotFoundCacheLifetime;
    BOOL shouldHandleCookies;
    BOOL _pad1;
    BOOL _pad2;
    BOOL _pad3;
}


- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end