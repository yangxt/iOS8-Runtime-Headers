/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLUpdateColumnsIntermediate;

@interface NSSQLUpdateIntermediate : NSSQLStatementIntermediate  {
    NSSQLUpdateColumnsIntermediate *_updateColumns;
}


- (void)dealloc;
- (id)updateColumnsIntermediate;
- (id)initWithEntity:(id)arg1 inScope:(id)arg2;
- (void)setUpdateColumnsIntermediate:(id)arg1;
- (BOOL)isUpdateScoped;
- (id)generateSQLStringInContext:(id)arg1;

@end