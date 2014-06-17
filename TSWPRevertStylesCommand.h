/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSSet, NSDictionary;

@interface TSWPRevertStylesCommand : TSWPTextCommand  {
    NSSet *_styleClasses;
    NSDictionary *_changeDetails;
}

@property(retain) NSDictionary * changeDetails;

+ (struct _NSRange { unsigned int x1; unsigned int x2; })clearAnonymousParagraphStylesInStorage:(id)arg1 selection:(id)arg2 undoTransaction:(struct TSWPStorageTransaction { }*)arg3;
+ (struct _NSRange { unsigned int x1; unsigned int x2; })clearAnonymousListStylesInStorage:(id)arg1 selection:(id)arg2 undoTransaction:(struct TSWPStorageTransaction { }*)arg3;
+ (struct _NSRange { unsigned int x1; unsigned int x2; })clearAnonymousCharacterStylesInStorage:(id)arg1 selection:(id)arg2 undoTransaction:(struct TSWPStorageTransaction { }*)arg3;

- (id)actionString;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 styleClasses:(id)arg3;
- (void)doUndoRedo;
- (id)changeDetails;
- (void)setChangeDetails:(id)arg1;
- (int)persistenceKind;
- (void)doCommit;

@end