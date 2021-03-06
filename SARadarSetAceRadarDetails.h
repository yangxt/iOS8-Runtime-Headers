/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SARadarSetAceRadarDetails : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSArray * attachments;
@property(copy) NSString * clientConfiguration;
@property(copy) NSString * radarTitle;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)setAceRadarDetailsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setAceRadarDetails;

- (id)radarTitle;
- (void)setClientConfiguration:(id)arg1;
- (id)clientConfiguration;
- (id)encodedClassName;
- (void)setRadarTitle:(id)arg1;
- (id)attachments;
- (void)setAttachments:(id)arg1;
- (id)groupIdentifier;

@end
