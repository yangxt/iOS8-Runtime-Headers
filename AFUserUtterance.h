/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSArray, NSString, NSDictionary, NSMutableArray;

@interface AFUserUtterance : NSObject  {
    NSMutableArray *_phrases;
    NSMutableArray *_tokens;
    NSString *_text;
    NSDictionary *_correctionIdentifier;
}

@property(readonly) NSDictionary * correctionIdentifier;
@property(readonly) NSArray * dictationResult;


- (id)correctionIdentifier;
- (id)streamingTokens;
- (id)dictationResult;
- (id)initWithString:(id)arg1 correctionIdentifier:(id)arg2;
- (id)initWithTokens:(id)arg1 correctionIdentifier:(id)arg2;
- (id)initWithPhrases:(id)arg1 correctionIdentifier:(id)arg2;
- (id)bestTextInterpretation;
- (void).cxx_destruct;
- (id)description;

@end
