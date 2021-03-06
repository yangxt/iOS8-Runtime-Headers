/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSDictionary, NSString, NSArray;

@interface CalDAVCalendarSearchTask : CoreDAVTask  {
    NSArray *_languages;
    NSString *_location;
    NSString *_calendarType;
    NSDictionary *_urlsToResults;
}

@property(retain,readonly) NSDictionary * urlsToResults;


- (id)requestBody;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)urlsToResults;
- (id)initWithLanguages:(id)arg1 location:(id)arg2 calendarType:(id)arg3 url:(id)arg4;
- (void)dealloc;

@end
