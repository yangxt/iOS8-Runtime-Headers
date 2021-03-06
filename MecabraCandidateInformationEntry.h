/* Generated by RuntimeBrowser.
   Image: /usr/lib/libmecabra.dylib
 */

@class NSArray, NSString, NSDictionary;

@interface MecabraCandidateInformationEntry : NSObject  {
    NSDictionary *_informationDictionary;
    NSString *_character;
}

@property(retain) NSDictionary * informationDictionary;
@property(retain) NSString * character;
@property(readonly) NSString * radical;
@property(readonly) int firstStrokeCount;
@property(readonly) NSArray * pinyinSyllables;
@property(readonly) NSArray * zhuyinSyllables;
@property(readonly) BOOL isSimplifiedOnly;
@property(readonly) BOOL isTraditionalOnly;

+ (id)informationEntryWithCharacter:(id)arg1 language:(int)arg2;

- (BOOL)isTraditionalOnly;
- (BOOL)isSimplifiedOnly;
- (id)zhuyinSyllables;
- (id)pinyinSyllables;
- (int)firstStrokeCount;
- (id)radical;
- (void)setInformationDictionary:(id)arg1;
- (id)informationDictionary;
- (void)setCharacter:(id)arg1;
- (id)character;
- (void)dealloc;

@end
