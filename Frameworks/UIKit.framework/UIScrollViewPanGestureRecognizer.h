/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIScrollView;

@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer {
    struct CGPoint { 
        float x; 
        float y; 
    unsigned int _directionalLockEnabled : 1;
    unsigned int _lockVertical : 1;
    unsigned int _lockHorizontal : 1;
    unsigned int _wasLockedVertical : 1;
    unsigned int _wasLockedHorizontal : 1;
    unsigned int _hasChildScrollView : 1;
    unsigned int _hasParentScrollView : 1;
    } _lastTrueScreenLocation;
    UIScrollView *_scrollView;
}

@property UIScrollView *scrollView;
@property(getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;

- (void)_centroidMovedTo:(struct CGPoint { float x1; float x2; })arg1 atTime:(double)arg2;
- (float)_hysteresis;
- (void)_resetGestureRecognizer;
- (void)_scrollViewDidEndZooming;
- (BOOL)_shouldTryToBeginWithEvent:(id)arg1;
- (void)_touchesListChangedFrom:(id)arg1 to:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)isDirectionalLockEnabled;
- (id)scrollView;
- (void)setDirectionalLockEnabled:(BOOL)arg1;
- (void)setScrollView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
