/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@class NSString;

@interface NotesDataCollectorChange : NSObject  {
    NSString *_accountIdentifier;
    int _accountType;
    int _operation;
    int _entity;
}

@property(copy) NSString * accountIdentifier;
@property int accountType;
@property int operation;
@property int entity;

+ (id)changeForEntity:(int)arg1 operation:(int)arg2 account:(id)arg3;

- (void)setAccountType:(int)arg1;
- (int)entity;
- (void)setEntity:(int)arg1;
- (int)accountType;
- (id)accountIdentifier;
- (void).cxx_destruct;
- (void)setOperation:(int)arg1;
- (int)operation;
- (void)setAccountIdentifier:(id)arg1;

@end
