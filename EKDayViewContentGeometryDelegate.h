/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKDayViewContent;

@interface EKDayViewContentGeometryDelegate : NSObject <CUIKSingleDayTimelineGeometryDelegate> {
    EKDayViewContent *_dayViewContent;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frame;
}

@property EKDayViewContent * dayViewContent;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } displayedRect;
@property(readonly) float hourHeight;
@property(readonly) float topPadding;
@property(readonly) float timeWidth;
@property(readonly) BOOL originIsUpperLeft;


- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)originIsUpperLeft;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })displayedRect;
- (float)timeWidth;
- (float)hourHeight;
- (id)dayViewContent;
- (double)dateForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })pointForDate:(double)arg1;
- (void)setDayViewContent:(id)arg1;
- (float)topPadding;

@end
