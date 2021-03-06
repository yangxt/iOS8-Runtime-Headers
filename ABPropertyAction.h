/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPropertyActionDelegate>, NSArray;

@interface ABPropertyAction : ABContactAction  {
    NSArray *_propertyItems;
}

@property <ABPropertyActionDelegate> * delegate;
@property(copy) NSArray * propertyItems;
@property(readonly) BOOL canPerformAction;

+ (void)performDefaultActionForItem:(id)arg1 sender:(id)arg2;

- (void)dealloc;
- (void)setPropertyItems:(id)arg1;
- (id)initWithContact:(id)arg1 propertyItems:(id)arg2;
- (id)initWithContact:(id)arg1 propertyItem:(id)arg2;
- (void)performActionForItem:(id)arg1 sender:(id)arg2;
- (BOOL)canPerformAction;
- (id)propertyItems;
- (void)performActionWithSender:(id)arg1;

@end
