/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@class SGIdentityKey;

@interface SGPseudoContactKey : NSObject <SGEntityKey> {
    SGIdentityKey *_identityKey;
}

@property(readonly) SGIdentityKey * identityKey;

+ (BOOL)isSupportedEntityType:(long long)arg1;

- (id)initWithEmail:(id)arg1;
- (BOOL)isEqualToPseudoContactKey:(id)arg1;
- (id)initWithNormalizedEmail:(id)arg1;
- (id)identityKey;
- (id)serialize;
- (id)initWithSerialized:(id)arg1;
- (id)initWithIdentityKey:(id)arg1;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end