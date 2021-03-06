/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class UIView, AUImageView, AULabel;

@interface InfoDiagramView : UIView <InfoDiagramCablingAnchorDelegate> {
    AUImageView *broadbandImageView;
    AULabel *broadbandLabel;
    AULabel *internetLabel;
    AULabel *portLabel;
    AUImageView *wanConnectedBaseImageView;
    AULabel *wanConnectedBaseLabel;
    AUImageView *replacementBaseImageView;
    AULabel *replacementBaseLabel;
    AUImageView *insetImageView;
    UIView *fixedCablingFrameView;
    UIView *animatingCablingFrameView;
    unsigned int wanBaseProductID;
    unsigned int replacementProductID;
    int sizeClass;
}


- (void)stopAnimatingCablingLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 wanConnectedBaseProductID:(unsigned int)arg2;
- (struct CGPoint { float x1; float x2; })swapArcControlPoint2;
- (struct CGPoint { float x1; float x2; })swapArcControlPoint1;
- (struct CGPoint { float x1; float x2; })swapArcControlPoint;
- (struct CGPoint { float x1; float x2; })wanConnectedBaseWANPoint;
- (struct CGPoint { float x1; float x2; })broadbandOutPoint;
- (struct CGPoint { float x1; float x2; })broadbandInPoint;
- (struct CGPoint { float x1; float x2; })internetPoint;
- (struct CGPoint { float x1; float x2; })swapArcLineEndPoint;
- (struct CGPoint { float x1; float x2; })swapArcLineStartPoint;
- (void)startAnimatingCablingLayer;
- (void)setWANConnectedBaseLabelString:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 wanConnectedBaseProductID:(unsigned int)arg2 replacementProductID:(unsigned int)arg3;
- (void)commonInit;
- (void)dealloc;

@end
