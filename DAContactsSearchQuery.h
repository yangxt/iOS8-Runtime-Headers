/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSString;

@interface DAContactsSearchQuery : DASearchQuery  {
    BOOL _includePhotos;
    NSString *_searchBase;
    NSString *_searchScope;
}

@property(copy) NSString * searchBase;
@property(copy) NSString * searchScope;
@property BOOL includePhotos;

+ (id)contactsSearchQueryWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4;

- (id)searchScope;
- (id)searchBase;
- (void)setSearchScope:(id)arg1;
- (void)setSearchBase:(id)arg1;
- (id)initWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4;
- (BOOL)includePhotos;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)setIncludePhotos:(BOOL)arg1;

@end
