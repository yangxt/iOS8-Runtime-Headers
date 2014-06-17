/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADConnection;

@interface OADConnectorProperties : OADShapeProperties  {
    OADConnection *mFrom;
    OADConnection *mTo;
}

+ (id)defaultProperties;

- (id)initWithDefaults;
- (id)to;
- (id)from;
- (id)description;
- (void)dealloc;
- (id)init;

@end