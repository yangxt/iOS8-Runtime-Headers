/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSData, NSCharacterSet;

@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSCoding> {
}

@property(copy,readonly) NSData * bitmapRepresentation;
@property(copy,readonly) NSCharacterSet * invertedSet;

+ (id)alphanumericCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)characterSetWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
+ (id)letterCharacterSet;
+ (id)URLQueryAllowedCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)newlineCharacterSet;
+ (id)symbolCharacterSet;
+ (id)punctuationCharacterSet;
+ (id)characterSetWithCharactersInString:(id)arg1;
+ (id)whitespaceCharacterSet;
+ (id)controlCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;
+ (void)initialize;
+ (id)URLFragmentAllowedCharacterSet;
+ (id)URLPathAllowedCharacterSet;
+ (id)URLHostAllowedCharacterSet;
+ (id)URLPasswordAllowedCharacterSet;
+ (id)URLUserAllowedCharacterSet;
+ (id)characterSetWithBitmapRepresentation:(id)arg1;
+ (id)characterSetWithContentsOfFile:(id)arg1;
+ (id)illegalCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)wordBreakCharacterSet;
+ (id)whitespaceNewlineAndSpecialCharacterSet;
+ (id)listDelimiterCharacterSet;
+ (id)dollarSignCharacterSet;
+ (id)internationalColonCharacterSet;
+ (id)internationalWhitespaceAndNewlineCharacterSet;
+ (id)periodCharacterSet;
+ (id)characterSetRequiringSingleQuotes;
+ (id)singleQuoteCharacterSet;
+ (id)internationalWhitespaceCharacterSet;
+ (id)variationSelectorCharacterSet;
+ (id)lineBreakingCharacterSet;
+ (id)postSmartSet;
+ (id)preSmartSet;
+ (id)smartQuotesCharacterSet;
+ (id)smartDoubleQuotesCharacterSet;
+ (id)normalQuotesCharacterSet;
+ (id)allQuotesCharacterSetExcludingLeft;
+ (id)allQuotesCharacterSetExcludingRight;
+ (id)spaceCharacterSet;
+ (id)breakingSpaceCharacterSet;
+ (id)invisibleCharacterSet;
+ (id)smartSingleQuotesCharacterSet;

- (id)invertedSet;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)characterIsMember:(unsigned short)arg1;
- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)count;
- (id)init;
- (void)makeImmutable;
- (BOOL)isMutable;
- (id)replacementObjectForPortCoder:(id)arg1;
- (BOOL)isSupersetOfSet:(id)arg1;
- (id)bitmapRepresentation;
- (unsigned long)_cfTypeID;
- (struct __CFCharacterSet { }*)_expandedCFCharacterSet;
- (id)_retainedBitmapRepresentation;
- (BOOL)hasMemberInPlane:(unsigned char)arg1;
- (BOOL)longCharacterIsMember:(unsigned long)arg1;

@end