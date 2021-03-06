/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSArray, UIView<RemoteUITableHeader>, UIView<RemoteUITableFooter>, NSMutableArray, <RUITableViewSectionDelegate>, NSString, NSDictionary, RUITableViewRow, NSNumber;

@interface RUITableViewSection : RUIElement <RUITableHeaderDelegate, RUITableFooterDelegate> {
    NSMutableArray *_rows;
    int _disclosureLimit;
    RUITableViewRow *_showAllRow;
    NSNumber *_drawsTopSeparator;
    BOOL _configured;
    <RUITableViewSectionDelegate> *_delegate;
    UIView<RemoteUITableHeader> *_headerView;
    UIView<RemoteUITableFooter> *_footerView;
    float _headerHeight;
    float _footerHeight;
    NSString *_headerText;
    NSDictionary *_headerAttributes;
    NSString *_HTMLHeaderContent;
    NSString *_detailHeaderText;
    NSString *_subHeaderText;
    NSDictionary *_subHeaderAttributes;
    NSString *_footerText;
    NSString *_HTMLFooterContent;
    NSDictionary *_footerAttributes;
}

@property <RUITableViewSectionDelegate> * delegate;
@property(readonly) NSArray * rows;
@property(retain) UIView<RemoteUITableHeader> * headerView;
@property(retain) UIView<RemoteUITableFooter> * footerView;
@property float headerHeight;
@property float footerHeight;
@property BOOL drawTopSeparator;
@property(copy) NSString * headerText;
@property(copy) NSDictionary * headerAttributes;
@property(copy) NSString * HTMLHeaderContent;
@property(copy) NSString * detailHeaderText;
@property(copy) NSString * subHeaderText;
@property(copy) NSDictionary * subHeaderAttributes;
@property(copy) NSString * footerText;
@property(copy) NSString * HTMLFooterContent;
@property(copy) NSDictionary * footerAttributes;
@property BOOL configured;


- (BOOL)hasCustomFooter;
- (BOOL)hasCustomHeader;
- (void)didTapShowAllRowWithTable:(id)arg1;
- (BOOL)hasValueForDrawsTopSeparator;
- (BOOL)drawTopSeparator;
- (void)headerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (Class)_customFooterClass;
- (id)footerText;
- (id)HTMLFooterContent;
- (id)colorFromAttributeString:(id)arg1;
- (id)headerText;
- (Class)_customHeaderClass;
- (id)subHeaderText;
- (id)detailHeaderText;
- (id)HTMLHeaderContent;
- (id)subHeaderAttributes;
- (id)headerAttributes;
- (void)setConfigured:(BOOL)arg1;
- (BOOL)configured;
- (id)footerAttributes;
- (void)setFooterAttributes:(id)arg1;
- (void)setFooterText:(id)arg1;
- (void)setHTMLFooterContent:(id)arg1;
- (void)setSubHeaderAttributes:(id)arg1;
- (void)setSubHeaderText:(id)arg1;
- (void)setDetailHeaderText:(id)arg1;
- (void)setHeaderAttributes:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setHTMLHeaderContent:(id)arg1;
- (void)addRow:(id)arg1;
- (void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (id)subElementsWithName:(id)arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setDrawTopSeparator:(BOOL)arg1;
- (void)removeRowAtIndex:(unsigned int)arg1;
- (void)insertRow:(id)arg1 atIndex:(unsigned int)arg2;
- (void)populatePostbackDictionary:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setFooterView:(id)arg1;
- (id)footerView;
- (void)setFooterHeight:(float)arg1;
- (void)setHeaderHeight:(float)arg1;
- (float)footerHeight;
- (float)headerHeight;
- (void).cxx_destruct;
- (id)rows;
- (void)setHeaderView:(id)arg1;
- (id)headerView;
- (id)delegate;
- (void)setImage:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setDelegate:(id)arg1;
- (id)init;
- (id)sourceURL;

@end
