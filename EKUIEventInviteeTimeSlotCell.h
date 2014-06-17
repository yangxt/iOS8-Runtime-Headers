/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UITapGestureRecognizer, UIImageView, UILabel, UIButton, UIView, UITextView, NSMutableArray, NSDate, NSArray;

@interface EKUIEventInviteeTimeSlotCell : UITableViewCell <UIGestureRecognizerDelegate> {
    UIImageView *_checkmarkImageView;
    UILabel *_firstTimeLabel;
    UILabel *_secondTimeLabel;
    UILabel *_locationLabel;
    UITextView *_participantsTextView;
    UIView *_debugOverlay;
    UIButton *_disclosureButton;
    NSArray *_locationConstraints;
    NSArray *_locationOmittedConstraints;
    NSMutableArray *_sortedBusyParticipantAttributedStrings;
    BOOL _everyoneCanAttend;
    unsigned int _maximumParticipantsTextViewLines;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _andMoreBoundingRect;
    float _lastKnownWidth;
    BOOL _participantTextNeedsRefresh;
    UITapGestureRecognizer *_tapGestureRecognizer;
    BOOL _checked;
    BOOL _showAllParticipants;
    BOOL _showLocationLabel;
    NSDate *_startDate;
    NSDate *_endDate;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _disclosureButtonTapped;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _andMoreTapped;

}

@property(retain) NSDate * startDate;
@property(retain) NSDate * endDate;
@property(readonly) BOOL checked;
@property BOOL showAllParticipants;
@property(copy) id disclosureButtonTapped;
@property(copy) id andMoreTapped;
@property BOOL showLocationLabel;


- (BOOL)checked;
- (id)endDate;
- (id)startDate;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)showLocationLabel;
- (void)setAndMoreTapped:(id)arg1;
- (void)setDisclosureButtonTapped:(id)arg1;
- (BOOL)showAllParticipants;
- (void)_debugColorizeLabels;
- (void)updateWithStartDate:(id)arg1 endDate:(id)arg2 locations:(id)arg3 busyParticipants:(id)arg4 colorRed:(BOOL)arg5 checked:(BOOL)arg6;
- (void)_initializeParticipantsTextViewGestureRecognizer;
- (id)_generatedMoreStringWithCount:(unsigned int)arg1;
- (float)_overriddenHeight;
- (float)_overriddenWidth;
- (void)_addLocationConstraints;
- (void)_initializeLocationLabel;
- (void)setShowAllParticipants:(BOOL)arg1;
- (void)setShowLocationLabel:(BOOL)arg1;
- (id)disclosureButtonTapped;
- (id)andMoreTapped;
- (void)_andMoreTapped:(id)arg1;
- (void)_disclosureButtonTouchUpInsideOccurred:(id)arg1;
- (void)_initializeLabel:(id)arg1 font:(id)arg2;
- (void)_truncateParticipantsIfNeeded;
- (void)_addLocationOmittedConstraints;
- (void)_initializeFixedConstraints;
- (void)_initializeAndMoreRegionDebugView;
- (void)_initializeDisclosureButton;
- (void)_initializeCheckmarkImageView;
- (void)_initializeParticipantsTextView;
- (void)_initializeTimeLabels;

@end