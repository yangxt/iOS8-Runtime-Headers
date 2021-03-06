/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPMediaLibraryResultSet>, MPWeakRef, MPMediaQuerySectionInfo, NSObject<OS_dispatch_queue>, MPMediaQueryCriteria, NSMutableArray;

@interface MPMediaEntityResultSetArray : MPMediaArray <NSCopying> {
    <MPMediaLibraryResultSet> *_resultSet;
    Class _entityClass;
    MPWeakRef *_libraryWeakRef;
    MPMediaQuerySectionInfo *_sectionInfo;
    NSMutableArray *_entities;
    NSObject<OS_dispatch_queue> *_entitiesQueue;
    MPMediaQueryCriteria *_queryCriteria;
}


- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (id)initWithResultSet:(id)arg1 queryCriteria:(id)arg2 entityType:(unsigned int)arg3 library:(id)arg4;
- (id)sectionInfo;

@end
