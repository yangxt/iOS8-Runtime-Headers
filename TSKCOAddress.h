/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSKCOAddress, NSString, NSArray;

@interface TSKCOAddress : NSObject  {
    TSKCOAddress *mParent;
    NSArray *mAllPathElements;
}

@property(readonly) TSKCOAddress * parent;
@property(readonly) NSString * pathElement;
@property(readonly) NSArray * allPathElements;


- (BOOL)equals:(id)arg1;
- (id)parent;
- (id)initWithParent:(id)arg1;
- (BOOL)contains:(id)arg1;
- (id)path;
- (id)description;
- (void)dealloc;
- (BOOL)hasSamePrefix:(id)arg1;
- (id)allPathElements;
- (id)pathElement;

@end
