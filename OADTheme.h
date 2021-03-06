/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADDefaultProperties, OADBaseStyles;

@interface OADTheme : NSObject  {
    OADBaseStyles *mBaseStyles;
    OADDefaultProperties *mShapeDefaults;
    OADDefaultProperties *mLineDefaults;
    OADDefaultProperties *mTextDefaults;
}

@property(retain) OADBaseStyles * baseStyles;
@property(retain) OADDefaultProperties * shapeDefaults;
@property(retain) OADDefaultProperties * lineDefaults;
@property(retain) OADDefaultProperties * textDefaults;


- (void)setTextDefaults:(id)arg1;
- (id)textDefaults;
- (void)setLineDefaults:(id)arg1;
- (id)lineDefaults;
- (void)setShapeDefaults:(id)arg1;
- (id)shapeDefaults;
- (void)setBaseStyles:(id)arg1;
- (void)addDefaults;
- (id)addTextDefaults;
- (id)addLineDefaults;
- (id)addShapeDefaults;
- (id)baseStyles;
- (void)dealloc;
- (id)init;

@end
