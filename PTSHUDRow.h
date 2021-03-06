/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class NSArray;

@interface PTSHUDRow : NSObject  {
    float _height;
    NSArray *_controls;
}

@property float height;
@property(retain) NSArray * controls;

+ (id)savedModeFooterRow;
+ (id)savedModeTableRow;
+ (id)savedModeHeaderRow;
+ (id)controlsModeFooterRow;
+ (id)controlsModeHeaderRow;
+ (id)rowWithControls:(id)arg1;
+ (id)rowWithHeight:(float)arg1 controls:(id)arg2;

- (id)controls;
- (void)setControls:(id)arg1;
- (void)setHeight:(float)arg1;
- (void).cxx_destruct;
- (float)height;

@end
