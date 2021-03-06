/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSString, EKParticipant;

@interface EKParticipantForSorting : NSObject  {
    EKParticipant *_participant;
    BOOL _isEmail;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_cachedDisplayName;
    BOOL _isOrganizer;
    BOOL _isRoom;
    int _participantTypeOrder;
}

@property int participantTypeOrder;
@property BOOL isOrganizer;
@property BOOL isRoom;

+ (int)_orderForParticipantType:(int)arg1;

- (id)lastName;
- (id)firstName;
- (id)participant;
- (BOOL)isEmail;
- (void).cxx_destruct;
- (id)displayName;
- (int)compare:(id)arg1;
- (id)description;
- (void)setIsRoom:(BOOL)arg1;
- (BOOL)isRoom;
- (void)setIsOrganizer:(BOOL)arg1;
- (BOOL)isOrganizer;
- (void)setParticipantTypeOrder:(int)arg1;
- (int)participantTypeOrder;
- (id)initWithEKParticipant:(id)arg1 isOrganizer:(BOOL)arg2;
- (id)initWithEKParticipant:(id)arg1;

@end
