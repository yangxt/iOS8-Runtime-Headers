/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSMutableDictionary, EKObjectID, NSArray;

@interface CADEntityWrapper : NSObject <NSSecureCoding> {
    void *_entity;
    NSArray *_loadedKeys;
    NSArray *_loadedValues;
    EKObjectID *_objectID;
    NSMutableDictionary *_loadedProperties;
}

+ (BOOL)supportsSecureCoding;

- (id)objectID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)loadedProperties;
- (id)initWithCalEntity:(void*)arg1;
- (id)initWithCalEntity:(void*)arg1 propertiesToLoad:(id)arg2;

@end