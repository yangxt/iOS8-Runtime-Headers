/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFModernAddressAtomDelegate>, NSString, MFModernAtomView, UIFont;

@interface MFModernAddressAtom : UIControl <MFModernAtomViewResembling> {
    <MFModernAddressAtomDelegate> *_delegate;
    MFModernAtomView *_atomView;
    void *_person;
    NSString *_fullAddress;
    NSString *_displayString;
    unsigned int _maxWidth;
    int _identifier;
    unsigned int _addressIsPhoneNumber : 1;
    unsigned int _updatedABPerson : 1;
    unsigned int _isDisplayStringFromAddressBook : 1;
    void *_addressBook;
}

@property BOOL isPrimaryAddressAtom;
@property BOOL hidesVIPIndicator;
@property BOOL separatorHidden;
@property BOOL separatorIsLeftAligned;
@property float scale;
@property int separatorStyle;
@property unsigned int presentationOptions;
@property(readonly) struct CGPoint { float x1; float x2; } baselinePoint;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property(retain) UIFont * titleFont;

+ (id)copyDisplayStringForAddress:(id)arg1 usingAddressBook:(void*)arg2 useAbbreviatedName:(BOOL)arg3;

- (void)setMaxWidth:(unsigned int)arg1;
- (unsigned int)presentationOptions;
- (id)emailAddress;
- (struct CGPoint { float x1; float x2; })baselinePoint;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_highlightBounds;
- (id)displayString;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setScale:(float)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (int)identifier;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)setOpaque:(BOOL)arg1;
- (id)unmodifiedAddressString;
- (int)ABPropertyType;
- (BOOL)isDisplayStringFromAddressBook;
- (void)setAtomFont:(id)arg1;
- (void)addressBookDidChange:(id)arg1;
- (id)initWithAddress:(id)arg1 presentationOptions:(unsigned int)arg2 isPhoneNumber:(BOOL)arg3 maxWidth:(float)arg4 addressBook:(void*)arg5;
- (void)_updateABPerson;
- (void)_displayStringDidChange;
- (void)_updateDisplayStringIncludingABPerson:(BOOL)arg1;
- (void)setPresentationOptions:(unsigned int)arg1;
- (void)setIsPrimaryAddressAtom:(BOOL)arg1;
- (void)performBuildInAnimationFromTextColor:(id)arg1 withDuration:(double)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setAddress:(id)arg1;
- (void*)ABPerson;

@end
