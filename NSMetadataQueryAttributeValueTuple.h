/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSMetadataQueryAttributeValueTuple : NSObject  {
    id _attr;
    id _value;
    unsigned int _count;
    void *_reserved;
}

@property(copy,readonly) NSString * attribute;
@property(retain,readonly) id value;
@property(readonly) unsigned int count;


- (id)value;
- (unsigned int)count;
- (void)dealloc;
- (id)_init:(id)arg1 attribute:(id)arg2 value:(id)arg3 count:(unsigned int)arg4;
- (id)attribute;

@end