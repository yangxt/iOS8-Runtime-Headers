/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABStyleProvider;

@interface ABCustomAppearanceProvider : NSObject  {
    ABStyleProvider *_styleProvider;
}


- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)dealloc;
- (id)init;
- (void)customSetEmphasized:(BOOL)arg1 onCell:(id)arg2;
- (BOOL)shouldPropagateStylesThroughUnknownPersonActions;
- (BOOL)shouldPropagateStylesToPickers;
- (float)cardTableViewSectionFooterHeightWhenEditing:(BOOL)arg1;
- (float)cardTableViewSectionHeaderHeightWhenEditing:(BOOL)arg1;
- (id)newCustomCardTableScrollingBackgroundView;
- (id)newCardActionButton;
- (Class)customCardActionCellClass;
- (Class)customCardCellClass;
- (BOOL)shouldUseCardContentProviderWhenAvailable;
- (int)unknownModalPresentationStyle;
- (void)setIndicatesFaceTimeHistory:(BOOL)arg1 onActionButton:(id)arg2;
- (void)setHighlighted:(BOOL)arg1 onPropertyCell:(id)arg2;
- (float)distanceBetweenSections;
- (id)newScrollingBackgroundView;
- (id)newActionButton;
- (Class)actionCellClass;
- (Class)propertyCellClass;

@end
