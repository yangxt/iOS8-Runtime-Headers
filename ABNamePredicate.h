/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSString, NSArray;

@interface ABNamePredicate : ABPredicate  {
    void *_addressBook;
    NSString *_name;
    BOOL _matchWholeWords;
    BOOL _matchPersonOrCompanyNamesExclusively;
    BOOL _matchPreferredName;
    void *_tokenizations;
    struct __CFArray { } *_tokenizationSortKeys;
    NSArray *_groups;
    NSArray *_sources;
}

@property void* addressBook;
@property(copy) NSString * name;
@property(retain) NSArray * sources;
@property(retain) NSArray * groups;
@property void* source;
@property void* group;
@property(copy) NSString * accountIdentifier;
@property BOOL matchWholeWords;
@property BOOL matchPersonOrCompanyNamesExclusively;
@property BOOL matchPreferredName;


- (void*)addressBook;
- (void)setSources:(id)arg1;
- (id)accountIdentifier;
- (void*)group;
- (void)setGroup:(void*)arg1;
- (void)setSource:(void*)arg1;
- (void*)source;
- (BOOL)isValid;
- (void)setAddressBook:(void*)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)groups;
- (void)setGroups:(id)arg1;
- (id)sources;
- (id)predicateFormat;
- (void)setMatchPreferredName:(BOOL)arg1;
- (BOOL)matchPreferredName;
- (void)setMatchPersonOrCompanyNamesExclusively:(BOOL)arg1;
- (BOOL)matchPersonOrCompanyNamesExclusively;
- (void)setMatchWholeWords:(BOOL)arg1;
- (BOOL)matchWholeWords;
- (id)queryJoinsInCompound:(BOOL)arg1;
- (id)_personNameKeys;
- (void*)tokenizations;
- (void)ab_bindStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (id)queryWhereString;

@end
