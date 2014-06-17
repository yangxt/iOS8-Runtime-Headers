/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@class NSString, NSArray;

@interface MPUDataSource : NSObject <NSCoding> {
    int _invalidationIgnoreCount;
    int _numberOfIgnoredInvalidations;
    int _entityType;
}

@property(readonly) int entityType;
@property(readonly) BOOL isEmpty;
@property(readonly) unsigned int count;
@property(readonly) BOOL usesSections;
@property(readonly) BOOL showsIndexBar;
@property(readonly) unsigned int numberOfSections;
@property(readonly) NSArray * localizedSectionIndexTitles;
@property(readonly) BOOL showsEntityCountFooter;
@property(readonly) NSString * entityCountFormat;


- (id)entities;
- (id)entityAtIndex:(unsigned int)arg1;
- (void)endIgnoringInvalidation;
- (void)beginIgnoringInvalidation;
- (id)playbackContextForIndex:(unsigned int)arg1;
- (BOOL)entityIsNowPlayingAtIndex:(unsigned int)arg1;
- (int)editingTypeForEntityAtIndex:(unsigned int)arg1;
- (void)_invalidateCalculatedEntities;
- (id)localizedSectionTitleAtIndex:(unsigned int)arg1;
- (void)preloadSectionEntities;
- (void)preloadEntities;
- (BOOL)usesSections;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfSectionAtIndex:(unsigned int)arg1;
- (id)sectionEntities;
- (BOOL)canSelectEntityAtIndex:(unsigned int)arg1;
- (id)anyEntity;
- (unsigned int)indexOfSectionEntity:(id)arg1;
- (id)sectionEntityAtIndex:(unsigned int)arg1;
- (void)deleteEntityAtIndex:(unsigned int)arg1;
- (BOOL)canEditEntityAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfEntity:(id)arg1;
- (BOOL)showsIndexBar;
- (BOOL)showsEntityCountFooter;
- (id)entityCountFormat;
- (BOOL)isIgnoringInvalidation;
- (id)localizedSectionIndexTitles;
- (BOOL)canEditEntityAtIndexPath:(id)arg1;
- (id)entityAtIndexPath:(id)arg1;
- (void)deleteEntityAtIndexPath:(id)arg1;
- (unsigned int)indexOfSectionForSectionTitleAtIndex:(unsigned int)arg1;
- (unsigned int)_globalIndexForIndexPath:(id)arg1;
- (void)_didInvalidate;
- (void)_willInvalidate;
- (unsigned int)numberOfSections;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (unsigned int)count;
- (int)entityType;
- (id)initWithEntityType:(int)arg1;

@end