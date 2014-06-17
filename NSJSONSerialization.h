/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSJSONSerialization : NSObject  {
    void *reserved[6];
}

+ (id)JSONObjectWithData:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
+ (id)dataWithJSONObject:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)isValidJSONObject:(id)arg1;
+ (id)JSONObjectWithStream:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
+ (int)writeJSONObject:(id)arg1 toStream:(id)arg2 options:(unsigned int)arg3 error:(id*)arg4;
+ (id)nuc_dataWithJSONObject:(id)arg1 error:(id*)arg2;
+ (id)nuc_JSONObjectWithData:(id)arg1 error:(id*)arg2;

- (id)init;

@end