/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class SCNGeometry;

@interface SCNLevelOfDetail : NSObject <NSCopying, NSSecureCoding> {
    id _reserved;
    struct __C3DLOD { } *_lod;
    int _mode;
    SCNGeometry *_geometry;
}

@property(readonly) SCNGeometry * geometry;
@property(readonly) float screenSpaceRadius;
@property(readonly) float worldSpaceDistance;

+ (BOOL)supportsSecureCoding;
+ (id)levelOfDetailWithGeometry:(id)arg1 worldSpaceDistance:(float)arg2;
+ (id)levelOfDetailWithGeometry:(id)arg1 screenSpaceRadius:(float)arg2;
+ (id)SCNJSExportProtocol;

- (id)geometry;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithGeometry:(id)arg1 thresholdMode:(int)arg2 thresholdValue:(id)arg3;
- (void)_didDecodeSCNLevelOfDetail:(id)arg1;
- (void)_customEncodingOfSCNLevelOfDetail:(id)arg1;
- (float)worldSpaceDistance;
- (float)screenSpaceRadius;
- (id)initWithGeometry:(id)arg1 thresholdMode:(int)arg2 lod:(struct __C3DLOD { }*)arg3;
- (void)_setupWithGeometry:(id)arg1 thresholdMode:(int)arg2 value:(float)arg3;
- (id)thresholdValue;
- (int)thresholdMode;
- (void*)__CFObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copy;
- (id)description;
- (void)dealloc;
- (id)init;

@end