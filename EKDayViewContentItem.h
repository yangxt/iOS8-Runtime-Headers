/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKCalendarDate, EKEvent, NSDate, EKDayOccurrenceView;

@interface EKDayViewContentItem : NSObject <CUIKSingleDayTimelineViewItem> {
    BOOL _pinned;
    BOOL _toBottom;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _unPinnedViewFrame;
    unsigned int _eventIndex;
    EKDayOccurrenceView *_view;
    EKCalendarDate *_startDate;
    EKCalendarDate *_endDate;
    double _travelTime;
}

@property(readonly) unsigned int eventIndex;
@property(retain) EKDayOccurrenceView * view;
@property(copy) EKCalendarDate * startDate;
@property(copy,readonly) EKCalendarDate * startDateIncludingTravelTime;
@property(copy) EKCalendarDate * endDate;
@property double travelTime;
@property(readonly) NSDate * startWithTravelTime;
@property(readonly) NSDate * start;
@property(readonly) NSDate * end;
@property(readonly) BOOL hideTravelTime;
@property(readonly) float enoughHeightForOneLine;
@property(readonly) float viewMaxNaturalTextHeight;
@property(readonly) EKEvent * event;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } unPinnedViewFrame;
@property(readonly) BOOL visibleHeightLocked;

+ (float)barToBarHorizontalDistanceIncludingBarWidth;

- (id)endDate;
- (id)startDate;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setVisibleHeight:(float)arg1;
- (void).cxx_destruct;
- (id)event;
- (id)end;
- (BOOL)isPinned;
- (void)setView:(id)arg1;
- (id)view;
- (BOOL)isEqual:(id)arg1;
- (id)start;
- (id)description;
- (void)setPinned:(BOOL)arg1 toBottom:(BOOL)arg2;
- (id)initWithEventIndex:(unsigned int)arg1;
- (void)setUnPinnedViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })unPinnedViewFrame;
- (BOOL)hideTravelTime;
- (id)startWithTravelTime;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })stagedFrame;
- (void)setStagedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)visibleHeightLocked;
- (float)viewMaxNaturalTextHeight;
- (float)enoughHeightForOneLine;
- (id)startDateIncludingTravelTime;
- (unsigned int)eventIndex;
- (void)setTravelTime:(double)arg1;
- (double)travelTime;

@end
