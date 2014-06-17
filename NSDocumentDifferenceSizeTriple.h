/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDocumentDifferenceSize;

@interface NSDocumentDifferenceSizeTriple : NSObject  {
    NSDocumentDifferenceSize *_dueToRecentChangesBeforeSaving;
    NSDocumentDifferenceSize *_betweenPreservingPreviousVersionAndSaving;
    NSDocumentDifferenceSize *_betweenPreviousSavingAndSaving;
}

@property(readonly) NSDocumentDifferenceSize * dueToRecentChangesBeforeSaving;
@property(readonly) NSDocumentDifferenceSize * betweenPreservingPreviousVersionAndSaving;
@property(readonly) NSDocumentDifferenceSize * betweenPreviousSavingAndSaving;


- (id)betweenPreviousSavingAndSaving;
- (id)betweenPreservingPreviousVersionAndSaving;
- (id)dueToRecentChangesBeforeSaving;
- (id)description;
- (void)dealloc;
- (id)init;

@end