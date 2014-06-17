/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSData;

@interface MKTileOverlayTile : NSObject  {
    struct { 
        int x; 
        int y; 
        int z; 
        float contentScaleFactor; 
    } _path;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    } _frame;
    float _scale;
    NSData *_image;
}

@property struct { int x1; int x2; int x3; float x4; } path;
@property struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property float scale;
@property(retain) NSData * image;


- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setPath:(struct { int x1; int x2; int x3; float x4; })arg1;
- (void)setScale:(float)arg1;
- (id)image;
- (float)scale;
- (void)setImage:(id)arg1;
- (struct { int x1; int x2; int x3; float x4; })path;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)description;
- (void)setFrame:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end