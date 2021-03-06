/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray;

@interface SSVDialogResponse : NSObject <NSCopying, SSXPCCoding> {
    int _selectedButtonIndex;
    NSArray *_textFieldValues;
}

@property int selectedButtonIndex;
@property(copy) NSArray * textFieldValues;


- (id)textFieldValues;
- (void)setTextFieldValues:(id)arg1;
- (void)setSelectedButtonIndex:(int)arg1;
- (int)selectedButtonIndex;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
