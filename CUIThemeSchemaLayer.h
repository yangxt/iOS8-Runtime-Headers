/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class NSString, NSArray;

@interface CUIThemeSchemaLayer : NSObject  {
    NSArray *_renditions;
    NSString *_name;
    unsigned int _index;
}

@property(retain) NSArray * renditions;
@property(retain) NSString * name;
@property unsigned int index;

+ (id)layerWithRenditions:(id)arg1 name:(id)arg2 index:(unsigned int)arg3;

- (float)translateFromWidthsOrHeightsToLeftsOrTops:(id)arg1 leftsOrTops:(id*)arg2;
- (id)initWithRenditions:(id)arg1 name:(id)arg2 index:(unsigned int)arg3;
- (void)calculateColumLefts:(id*)arg1 rowTops:(id*)arg2 totalSize:(struct CGSize { float x1; float x2; }*)arg3 forPartFeatures:(unsigned int)arg4;
- (void)setRenditions:(id)arg1;
- (id)renditions;
- (void)setIndex:(unsigned int)arg1;
- (unsigned int)index;
- (id)name;
- (void)setName:(id)arg1;

@end