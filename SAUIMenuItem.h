/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString, NSArray;

@interface SAUIMenuItem : SAAceView  {
}

@property(copy) NSArray * commands;
@property(copy) NSURL * icon;
@property(copy) NSURL * ref;
@property(copy) NSString * subtitle;
@property(copy) NSString * title;

+ (id)menuItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)menuItem;

- (void)setRef:(id)arg1;
- (id)ref;
- (id)encodedClassName;
- (void)setCommands:(id)arg1;
- (id)commands;
- (void)setSubtitle:(id)arg1;
- (void)setIcon:(id)arg1;
- (id)subtitle;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)groupIdentifier;
- (id)icon;

@end
