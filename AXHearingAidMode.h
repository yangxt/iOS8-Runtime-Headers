/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@class NSString;

@interface AXHearingAidMode : NSObject <NSSecureCoding> {
    unsigned char _index;
    BOOL _isSelected;
    NSString *_name;
    int _category;
    int _ear;
    int syncAttempts;
}

@property(copy) NSString * name;
@property int category;
@property unsigned char index;
@property BOOL isSelected;
@property int ear;
@property int syncAttempts;

+ (BOOL)supportsSecureCoding;

- (BOOL)isStream;
- (void)setSyncAttempts:(int)arg1;
- (int)syncAttempts;
- (int)ear;
- (id)transportRepresentation;
- (id)initWithRepresentation:(id)arg1;
- (void)setEar:(int)arg1;
- (void)setIsSelected:(BOOL)arg1;
- (void)setIndex:(unsigned char)arg1;
- (void)setCategory:(int)arg1;
- (int)category;
- (unsigned char)index;
- (BOOL)isSelected;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (void)dealloc;

@end
