/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MPUDataSourceConfiguration, NSString;

@interface MPUViewControllerConfiguration : NSObject  {
    BOOL _wantsModalPresentation;
    BOOL _wantsNavigationController;
    Class _cellConfigurationClass;
    Class _viewControllerClass;
    NSString *_aggregateStatisticDisplayCountKey;
    MPUDataSourceConfiguration *_dataSourceConfiguration;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _configurationBlock;

}

@property(readonly) Class cellConfigurationClass;
@property(readonly) Class viewControllerClass;
@property(copy) NSString * aggregateStatisticDisplayCountKey;
@property(retain) MPUDataSourceConfiguration * dataSourceConfiguration;
@property(copy) id configurationBlock;
@property BOOL wantsModalPresentation;
@property BOOL wantsNavigationController;

+ (id)configurationWithViewControllerClass:(Class)arg1;
+ (id)configurationWithViewControllerClass:(Class)arg1 cellConfigurationClass:(Class)arg2;

- (Class)cellConfigurationClass;
- (id)initWithViewControllerClass:(Class)arg1;
- (void)setWantsNavigationController:(BOOL)arg1;
- (void)setDataSourceConfiguration:(id)arg1;
- (void)setAggregateStatisticDisplayCountKey:(id)arg1;
- (id)initWithViewControllerClass:(Class)arg1 cellConfigurationClass:(Class)arg2;
- (BOOL)wantsNavigationController;
- (BOOL)wantsModalPresentation;
- (void)setWantsModalPresentation:(BOOL)arg1;
- (id)dataSourceConfiguration;
- (id)aggregateStatisticDisplayCountKey;
- (Class)viewControllerClass;
- (void).cxx_destruct;
- (void)setConfigurationBlock:(id)arg1;
- (id)configurationBlock;

@end
