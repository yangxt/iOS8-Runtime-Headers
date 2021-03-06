/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, <UITextInput>;

@interface UIDictationTestOps : NSObject  {
    double _timeAfterInsertion;
    double _timeAfterSelectRange;
    <UITextInput> *_document;
    NSMutableArray *_operations;
}

@property(retain) NSMutableArray * operations;


- (unsigned int)selectionChangeDelta;
- (BOOL)isNotEmpty;
- (void)willEndEditingInInputDelegate:(id)arg1;
- (void)pushReplaceSelectionWithText:(id)arg1;
- (void)pushInsertTextForSpeech:(id)arg1;
- (void)pushSelectRangeForSpeech:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)dictationWillBeginInDocument:(id)arg1;
- (void)_performReplaceSelectedText:(id)arg1;
- (void)pushSpeechOperationWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)setDocument:(id)arg1;
- (void)clearOperations;
- (void)pushSpeechOperation:(id)arg1;
- (double)delayAfterSelector:(SEL)arg1;
- (BOOL)hasOperations;
- (void)performSelectRangeForSpeech:(id)arg1;
- (void)popAndInvoke;
- (id)operations;
- (void)setOperations:(id)arg1;
- (id)pop;
- (BOOL)isEmpty;
- (void)dealloc;
- (id)init;

@end
