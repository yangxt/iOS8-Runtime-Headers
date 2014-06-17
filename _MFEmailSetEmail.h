/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSString;

@interface _MFEmailSetEmail : NSObject  {
    unsigned long _hash;
    NSString *_encodedAddress;
    NSString *_comment;
}

@property(readonly) unsigned long hash;
@property(retain) NSString * address;
@property(readonly) NSString * commentedAddress;


- (id)address;
- (BOOL)isEqualToEmail:(id)arg1;
- (id)commentedAddress;
- (unsigned long)hash;
- (id)description;
- (void)dealloc;
- (void)setAddress:(id)arg1;
- (id)initWithAddress:(id)arg1;

@end