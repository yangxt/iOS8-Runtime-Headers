/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDProtection : NSObject <NSCopying> {
    boolmHidden;
    boolmLocked;
}

+ (id)protectionWithHidden:(bool)arg1 locked:(bool)arg2;

- (BOOL)isEqualToProtection:(id)arg1;
- (id)initWithHidden:(bool)arg1 locked:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isLocked;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (bool)isHidden;
- (id)init;

@end
