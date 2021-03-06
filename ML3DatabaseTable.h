/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString, NSArray;

@interface ML3DatabaseTable : NSObject  {
    NSString *_name;
    NSArray *_columns;
    NSArray *_foreignKeyConstraints;
}

@property(readonly) NSString * name;
@property(readonly) NSArray * columns;
@property(readonly) NSArray * foreignKeyConstraints;


- (id)createTableSQLWithExistenceClause:(BOOL)arg1;
- (id)foreignKeyConstraints;
- (id)columnDefinitionsSQL;
- (id)columns;
- (void).cxx_destruct;
- (id)name;

@end
