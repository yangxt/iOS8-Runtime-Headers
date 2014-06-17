/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface ML3DatabaseFunctionPointer : ML3DatabaseFunction  {
    int (*_functionPointer)();
    void *_userData;
}

@property int (* functionPointer;
@property void* userData;


- (void)setFunctionPointer:(int (*)())arg1;
- (int (*)())functionPointer;
- (BOOL)registerWithConnection:(id)arg1;
- (void)setUserData:(void*)arg1;
- (void*)userData;

@end