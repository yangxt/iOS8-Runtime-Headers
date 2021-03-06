/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSSet, NSMutableSet;

@interface TSKAnnotationAuthorStorage : TSPObject  {
    NSMutableSet *mAuthors;
}

@property(readonly) NSSet * authors;


- (void)addAuthor:(id)arg1;
- (id)authors;
- (id)description;
- (void)dealloc;
- (void)didRemoveAuthorRelationshipFromDocument;
- (void)didAddAuthorRelationshipToDocument;
- (void)p_addAuthor:(id)arg1 isFromDocumentSupport:(BOOL)arg2;
- (void)removeAuthor:(id)arg1;
- (id)nextAuthorColor;
- (id)authorWithName:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg1;
- (unsigned int)delayedArchivingPriority;
- (BOOL)shouldDelayArchiving;
- (id)initFromUnarchiver:(id)arg1;
- (id)packageLocator;

@end
