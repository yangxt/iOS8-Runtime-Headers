/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLRevGeoCompoundNameInfo, NSArray;

@interface PLMomentNameInfo : NSObject  {
    BOOL _locationInfoIsValid;
    PLRevGeoCompoundNameInfo *__primaryNameInfo;
    PLRevGeoCompoundNameInfo *__secondaryNameInfo;
    NSArray *__orderedNames;
}

@property(retain) PLRevGeoCompoundNameInfo * _primaryNameInfo;
@property(retain) PLRevGeoCompoundNameInfo * _secondaryNameInfo;
@property(setter=_setOrderedNames:,retain) NSArray * _orderedNames;

+ (id)_localizedNameForName:(id)arg1;

- (id)_orderedNames;
- (void)set_secondaryNameInfo:(id)arg1;
- (id)_secondaryNameInfo;
- (void)set_primaryNameInfo:(id)arg1;
- (id)_primaryNameInfo;
- (id)componentsForSecondaryTitle;
- (id)localizedPrimaryTitle;
- (BOOL)locationInfoIsValid;
- (id)initWithMomentList:(id)arg1;
- (id)initWithMoment:(id)arg1;
- (id)componentsForPrimaryTitle;
- (void)_setOrderedNames:(id)arg1;
- (void)dealloc;

@end
