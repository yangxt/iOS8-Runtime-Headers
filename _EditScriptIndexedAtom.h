/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface _EditScriptIndexedAtom : NSObject  {
    int _editOperation;
    unsigned int _indexToEdit;
    unsigned int _indexInArrayB;
    NSString *_replacementText;
}

@property int editOperation;
@property unsigned int indexToEdit;
@property unsigned int indexInArrayB;
@property(retain) NSString * replacementText;

+ (id)atomWithEditOperation:(int)arg1 indexToEdit:(unsigned int)arg2 newText:(id)arg3 indexInArrayB:(unsigned int)arg4;

- (unsigned int)indexInArrayB;
- (id)initWithEditOperation:(int)arg1 indexToEdit:(unsigned int)arg2 newText:(id)arg3 indexInArrayB:(unsigned int)arg4;
- (void)setIndexInArrayB:(unsigned int)arg1;
- (void)setEditOperation:(int)arg1;
- (void)setIndexToEdit:(unsigned int)arg1;
- (unsigned int)indexToEdit;
- (int)editOperation;
- (id)replacementText;
- (void)setReplacementText:(id)arg1;
- (id)description;
- (void)dealloc;

@end
