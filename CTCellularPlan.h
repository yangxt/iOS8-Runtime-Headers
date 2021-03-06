/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@class CTCellularPlanProfile, NSString, CTCellularPlanSubscription, NSData, NSArray;

@interface CTCellularPlan : NSObject <NSCopying, NSSecureCoding> {
    CTCellularPlanProfile *_profile;
    CTCellularPlanSubscription *_subscription;
}

@property(readonly) NSData * profileId;
@property(readonly) BOOL isSelected;
@property(readonly) NSString * iccid;
@property(readonly) BOOL autoRenew;
@property(readonly) double billingStartDate;
@property(readonly) double billingEndDate;
@property(readonly) NSString * carrierName;
@property(readonly) int planType;
@property(readonly) NSString * planDescription;
@property(readonly) int planStatus;
@property(readonly) int accountStatus;
@property(readonly) double timestamp;
@property(readonly) NSArray * dataUsage;
@property(retain) CTCellularPlanProfile * profile;
@property(retain) CTCellularPlanSubscription * subscription;

+ (BOOL)supportsSecureCoding;

- (void)setProfile:(id)arg1;
- (id)profile;
- (id)subscription;
- (void)setSubscription:(id)arg1;
- (id)initWithProfile:(id)arg1 subscription:(id)arg2;
- (id)dataUsage;
- (int)accountStatus;
- (int)planStatus;
- (id)planDescription;
- (int)planType;
- (double)billingEndDate;
- (double)billingStartDate;
- (BOOL)autoRenew;
- (id)iccid;
- (id)profileId;
- (BOOL)isSelected;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)timestamp;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)carrierName;

@end
