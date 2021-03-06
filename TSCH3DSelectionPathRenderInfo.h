/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString;

@interface TSCH3DSelectionPathRenderInfo : NSObject  {
    NSString *mString;
    unsigned int mStyleIndex;
    float mRotation;
}

@property(readonly) NSString * string;
@property(readonly) unsigned int styleIndex;
@property(readonly) float rotation;

+ (id)renderInfoWithString:(id)arg1 styleIndex:(unsigned int)arg2 rotation:(float)arg3;

- (unsigned int)styleIndex;
- (float)rotation;
- (id)string;
- (void)dealloc;
- (id)initWithString:(id)arg1 styleIndex:(unsigned int)arg2 rotation:(float)arg3;

@end
