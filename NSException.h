/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@class NSArray, NSString, NSDictionary;

@interface NSException : NSObject <NSCopying, NSCoding> {
    NSString *name;
    NSString *reason;
    NSDictionary *userInfo;
    id reserved;
}

@property(copy,readonly) NSString * name;
@property(copy,readonly) NSString * reason;
@property(copy,readonly) NSDictionary * userInfo;
@property(copy,readonly) NSArray * callStackReturnAddresses;
@property(copy,readonly) NSArray * callStackSymbols;

+ (id)exceptionWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
+ (void)raise:(id)arg1 format:(id)arg2;
+ (void)raise:(id)arg1 format:(id)arg2 arguments:(void*)arg3;
+ (void)raiseWithError:(id)arg1;
+ (void)errnoRaise:(id)arg1 format:(id)arg2;
+ (void)raiseWithError:(id)arg1;
+ (void)errnoRaise:(id)arg1 format:(id)arg2;

- (id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
- (id)callStackSymbols;
- (id)userInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)raise;
- (id)reason;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)description;
- (void)dealloc;
- (id)init;
- (BOOL)_installStackTraceKeyIfNeeded;
- (id)callStackReturnAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)_crashReporterString;
- (id)error;
- (int)localErrno;
- (id)error;
- (int)localErrno;

@end
