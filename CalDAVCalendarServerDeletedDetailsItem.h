/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSString, ICSDateValue;

@interface CalDAVCalendarServerDeletedDetailsItem : CoreDAVItem  {
    NSString *_componentType;
    NSString *_summary;
    NSString *_displayName;
    ICSDateValue *_nextInstance;
    BOOL _hadMoreInstances;
}

@property(retain) NSString * componentType;
@property(retain) NSString * summary;
@property(retain) NSString * displayName;
@property(retain) ICSDateValue * nextInstance;
@property BOOL hadMoreInstances;


- (void)setSummary:(id)arg1;
- (id)summary;
- (id)componentType;
- (id)copyParseRules;
- (BOOL)hadMoreInstances;
- (id)nextInstance;
- (void)setHadMoreInstancesItem:(id)arg1;
- (void)setNextInstanceItem:(id)arg1;
- (void)setSummaryItem:(id)arg1;
- (void)setComponentTypeItem:(id)arg1;
- (void)setHadMoreInstances:(BOOL)arg1;
- (void)setNextInstance:(id)arg1;
- (void)setComponentType:(id)arg1;
- (void)setDisplayNameItem:(id)arg1;
- (id)displayName;
- (void)dealloc;
- (id)init;
- (void)setDisplayName:(id)arg1;

@end