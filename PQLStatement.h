/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class PQLStatement;

@interface PQLStatement : NSObject  {
    struct sqlite3_stmt { } *_stmt;
    int _specLength;
    unsigned char *_spec;
    PQLStatement *_next;
    BOOL _inUse;
}


- (void)bindArguments:(void*)arg1;
- (id)initWithStatement:(id)arg1 forDB:(id)arg2;
- (id)translate:(id)arg1 hasInjections:(BOOL*)arg2 arguments:(void*)arg3;
- (BOOL)_prepare:(const char *)arg1 withDB:(id)arg2;
- (void)unbind;
- (id)initWithFormat:(id)arg1 arguments:(void*)arg2 db:(id)arg3 cache:(struct cache_s { }*)arg4;
- (void).cxx_destruct;
- (void)invalidate;
- (id)description;
- (void)dealloc;

@end
