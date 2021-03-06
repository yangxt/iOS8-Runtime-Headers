/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSArray, NSNumber, CBPeripheral;

@interface CBService : CBAttribute  {
    CBPeripheral *_peripheral;
    BOOL _isPrimary;
    NSArray *_includedServices;
    NSArray *_characteristics;
    NSNumber *_startHandle;
    NSNumber *_endHandle;
}

@property(readonly) CBPeripheral * peripheral;
@property BOOL isPrimary;
@property(retain) NSArray * includedServices;
@property(retain) NSArray * characteristics;
@property(readonly) NSNumber * startHandle;
@property(readonly) NSNumber * endHandle;


- (id)characteristics;
- (void)setCharacteristics:(id)arg1;
- (id)peripheral;
- (id)includedServices;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (id)handleCharacteristicsDiscovered:(id)arg1;
- (id)handleIncludedServicesDiscovered:(id)arg1;
- (void)setIncludedServices:(id)arg1;
- (id)endHandle;
- (id)startHandle;
- (id)initWithPeripheral:(id)arg1 dictionary:(id)arg2;
- (BOOL)isPrimary;
- (void)setIsPrimary:(BOOL)arg1;

@end
