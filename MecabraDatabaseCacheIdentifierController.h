/* Generated by RuntimeBrowser.
   Image: /usr/lib/libmecabra.dylib
 */

@class NSMutableArray;

@interface MecabraDatabaseCacheIdentifierController : NSObject  {
    unsigned int _counter;
    NSMutableArray *_recycledIdentifiers;
}

@property unsigned int counter;
@property(retain) NSMutableArray * recycledIdentifiers;


- (void)recycleIdentifier:(unsigned int)arg1;
- (unsigned int)newIdentifier;
- (unsigned int)counter;
- (id)recycledIdentifiers;
- (void)setRecycledIdentifiers:(id)arg1;
- (void)setCounter:(unsigned int)arg1;
- (void)reset;
- (void)dealloc;
- (id)init;

@end
