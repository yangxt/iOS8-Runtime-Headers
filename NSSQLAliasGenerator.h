/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString;

@interface NSSQLAliasGenerator : NSObject  {
    unsigned int _nextTableAlias;
    unsigned int _nextVariableAlias;
    unsigned int _nextTempTableAlias;
    NSString *_tableBase;
    NSString *_variableBase;
}


- (void)dealloc;
- (id)init;
- (id)generateTempTableName;
- (id)generateSubqueryVariableAlias;
- (id)generateTableAlias;
- (id)initWithNestingLevel:(unsigned int)arg1;

@end
