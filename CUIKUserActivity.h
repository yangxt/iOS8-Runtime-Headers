/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKUserActivity : NSObject  {
    unsigned int _type;
    unsigned int _version;
}

@property unsigned int type;
@property unsigned int version;

+ (id)_stringFromDictionary:(id)arg1 key:(id)arg2 error:(BOOL*)arg3;
+ (double)_doubleFromDictionary:(id)arg1 key:(id)arg2 error:(BOOL*)arg3;
+ (int)_integerFromDictionary:(id)arg1 key:(id)arg2 error:(BOOL*)arg3;
+ (id)activityForDictionary:(id)arg1;
+ (unsigned int)_unsignedIntegerFromDictionary:(id)arg1 key:(id)arg2 error:(BOOL*)arg3;
+ (unsigned int)_typeFromDictionary:(id)arg1;

- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)initWithType:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionary;

@end
