/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class CADisplay;

@interface FBSDisplay : NSObject <BSXPCCoding, NSCopying> {
    CADisplay *_caDisplay;
    unsigned int _type;
    int _tags;
    unsigned int _seed;
}

@property(retain,readonly) CADisplay * caDisplay;
@property(readonly) float scale;
@property(readonly) float orientation;
@property(readonly) unsigned int type;
@property(readonly) int tags;
@property unsigned int seed;


- (BOOL)isiPodOnlyDisplay;
- (unsigned int)_typeFromTags:(unsigned int)arg1;
- (id)initWithCADisplay:(id)arg1 isMainDisplay:(BOOL)arg2 tags:(unsigned int)arg3;
- (BOOL)isAirPlayDisplay;
- (id)initWithCADisplay:(id)arg1 isMainDisplay:(BOOL)arg2;
- (BOOL)isHiddenDisplay;
- (id)_nameForDisplayType;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)setConnected:(BOOL)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (unsigned int)seed;
- (id)caDisplay;
- (BOOL)isCarDisplay;
- (int)tags;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)type;
- (float)scale;
- (float)orientation;
- (BOOL)isMainDisplay;
- (id)initWithCADisplay:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setSeed:(unsigned int)arg1;
- (BOOL)isExternal;
- (id)description;
- (BOOL)isConnected;
- (id)_screen;

@end