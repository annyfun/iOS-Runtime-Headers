/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKZoomSlider : UISlider {
    BOOL  __autozooming;
    UIView * __maxTrackMaskView;
    UIView * __minTrackMaskView;
    UIImageView * __thumbImageView;
    NSTimer * __visibilityTimer;
    <CMKZoomSliderDelegate> * _delegate;
    BOOL  _maximumAutozooming;
    BOOL  _minimumAutozooming;
}

@property (getter=_isAutozooming, setter=_setAutozooming:, nonatomic) BOOL _autozooming;
@property (nonatomic, readonly) UIView *_maxTrackMaskView;
@property (nonatomic, readonly) UIView *_minTrackMaskView;
@property (nonatomic, readonly) UIImageView *_thumbImageView;
@property (nonatomic, readonly) NSTimer *_visibilityTimer;
@property (nonatomic) <CMKZoomSliderDelegate> *delegate;
@property (getter=isMaximumAutozooming, setter=_setMaximumAutozooming:, nonatomic) BOOL maximumAutozooming;
@property (getter=isMinimumAutozooming, setter=_setMinimumAutozooming:, nonatomic) BOOL minimumAutozooming;

- (void).cxx_destruct;
- (void)_beginAutozooming;
- (void)_commonCMKZoomSliderInitialization;
- (void)_endAutozooming;
- (void)_hideZoomSlider:(id)arg1;
- (BOOL)_isAutozooming;
- (BOOL)_isMinimumOrMaximumAutozooming;
- (id)_maxTrackMaskView;
- (id)_minTrackMaskView;
- (void)_postHideZoomSliderAnimation;
- (void)_setAutozooming:(BOOL)arg1;
- (void)_setMaximumAutozooming:(BOOL)arg1;
- (void)_setMinimumAutozooming:(BOOL)arg1;
- (id)_thumbImageView;
- (void)_updateAutozooming;
- (id)_visibilityTimer;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createThumbView;
- (void)dealloc;
- (id)delegate;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isMaximumAutozooming;
- (BOOL)isMinimumAutozooming;
- (void)layoutSubviews;
- (int)locationOfTouch:(id)arg1;
- (void)makeInvisible;
- (void)makeVisible;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)startVisibilityTimer;
- (void)stopVisibilityTimer;
- (BOOL)visibilityTimerIsValid;

@end