/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UIWebViewportHandlerDelegate>;

@interface _UIWebViewportHandler : NSObject  {
    BOOL _initialConfigurationHasBeenSentToDelegate;
    struct _UIWebViewportConfiguration { 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
        float initialScale; 
        float minimumScale; 
        float maximumScale; 
        boolallowsUserScaling; 
    } _defaultConfiguration;
    struct _UIWebViewportConfiguration { 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
        float initialScale; 
        float minimumScale; 
        float maximumScale; 
        boolallowsUserScaling; 
    } _configuration;
    unsigned int _webkitDefinedConfigurationFlags;
    struct CGSize { 
        float width; 
        float height; 
    } _availableViewSize;
    BOOL _classicViewportMode;
    <_UIWebViewportHandlerDelegate> *_delegate;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _documentBounds;
}

@property <_UIWebViewportHandlerDelegate> * delegate;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } documentBounds;
@property(readonly) struct CGSize { float x1; float x2; } availableViewSize;
@property(readonly) float initialScale;
@property(readonly) float minimumScale;
@property(readonly) float maximumScale;
@property(readonly) BOOL allowsUserScaling;
@property(readonly) unsigned int webkitDefinedConfigurationFlags;
@property(getter=isClassicViewportMode,readonly) BOOL classicViewportMode;
@property(readonly) struct _UIWebViewportConfiguration { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; float x4; boolx5; } rawViewConfiguration;


- (id).cxx_construct;
- (float)integralInitialScale;
- (void)setAvailableViewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)overrideViewportConfiguration:(const struct _UIWebViewportConfiguration { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; float x4; boolx5; }*)arg1;
- (BOOL)isClassicViewportMode;
- (void)applyWebKitViewportArgumentsSize:(struct CGSize { float x1; float x2; })arg1 initialScale:(float)arg2 minimumScale:(float)arg3 maximumScale:(float)arg4 allowsUserScaling:(float)arg5;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentBounds;
- (float)viewportHeight;
- (float)viewportWidth;
- (void)setDocumentBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)update:(id)arg1;
- (unsigned int)webkitDefinedConfigurationFlags;
- (struct _UIWebViewportConfiguration { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; float x4; boolx5; })rawViewConfiguration;
- (void)resetViewportConfiguration:(const struct _UIWebViewportConfiguration { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; float x2; float x3; float x4; boolx5; }*)arg1;
- (void)clearWebKitViewportConfigurationFlags;
- (struct CGSize { float x1; float x2; })availableViewSize;
- (BOOL)allowsUserScaling;
- (float)minimumScale;
- (float)maximumScale;
- (float)initialScale;
- (float)minimumScaleForViewSize:(struct CGSize { float x1; float x2; })arg1;
- (float)integralScaleForScale:(float)arg1 keepingPointFixed:(struct CGPoint { float x1; float x2; }*)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
