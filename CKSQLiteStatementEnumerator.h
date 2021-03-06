/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKSQLiteStatement;

@interface CKSQLiteStatementEnumerator : NSEnumerator  {
    BOOL _closed;
    CKSQLiteStatement *_statement;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _block;

}

@property(retain) CKSQLiteStatement * statement;
@property(copy) id block;
@property BOOL closed;


- (void)setClosed:(BOOL)arg1;
- (BOOL)closed;
- (void)setBlock:(id)arg1;
- (id)block;
- (void).cxx_destruct;
- (void)close;
- (id)nextObject;
- (void)dealloc;
- (id)initWithStatement:(id)arg1 block:(id)arg2;
- (void)setStatement:(id)arg1;
- (id)statement;

@end
