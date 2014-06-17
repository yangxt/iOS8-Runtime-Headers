/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITableViewUpdateGap, NSIndexPath;

@interface UIUpdateItem : NSObject  {
    int _action;
    NSIndexPath *_indexPath;
    int _animation;
    float _offset;
    UITableViewUpdateGap *_gap;
    BOOL _headerFooterOnly;
    BOOL _skipAnimation;
}

@property(readonly) int action;
@property(readonly) NSIndexPath * indexPath;
@property int animation;
@property float offset;
@property BOOL headerFooterOnly;
@property BOOL skipAnimation;
@property UITableViewUpdateGap * gap;


- (void)setSkipAnimation:(BOOL)arg1;
- (BOOL)skipAnimation;
- (id)gap;
- (id)_actionDescription;
- (void)setAnimation:(int)arg1;
- (void)setGap:(id)arg1;
- (float)offset;
- (void)setOffset:(float)arg1;
- (void)setHeaderFooterOnly:(BOOL)arg1;
- (BOOL)headerFooterOnly;
- (id)initWithAction:(int)arg1 forIndexPath:(id)arg2 animation:(int)arg3;
- (BOOL)isSectionOperation;
- (id)indexPath;
- (int)compareIndexPaths:(id)arg1;
- (int)inverseCompareIndexPaths:(id)arg1;
- (int)animation;
- (int)action;
- (void)dealloc;

@end