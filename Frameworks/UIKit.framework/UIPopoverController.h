/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIBarButtonItem, UIView, UIViewController;

@interface UIPopoverController : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct { 
        unsigned int isPresentingOrDismissing : 1; 
        unsigned int isPresentingModalViewController : 1; 
        unsigned int isPresentingActionSheet : 1; 
        unsigned int needsRepresentAfterRotation : 1; 
        unsigned int dimsWhenModal : 1; 
    BOOL _allowResizePastTargetRect;
    UIViewController *_contentViewController;
    id _delegate;
    SEL _didEndSelector;
    NSInteger _existingNavBarStyle;
    NSInteger _existingToolBarStyle;
    UIViewController *_modalPresentationFromViewController;
    UIViewController *_modalPresentationToViewController;
    NSArray *_passthroughViews;
    NSUInteger _popoverArrowDirection;
    NSUInteger _popoverBackgroundStyle;
    } _popoverContentSize;
    } _popoverControllerFlags;
    UIView *_popoverView;
    id _private1;
    UIViewController *_slidingViewController;
    id _target;
    UIBarButtonItem *_targetBarButtonItem;
    NSUInteger _toViewAutoResizingMask;
}

@property(retain) UIViewController *contentViewController;
@property <UIPopoverControllerDelegate> *delegate;
@property(retain) UIDimmingView *dimmingView;
@property(copy) NSArray *passthroughViews;
@property BOOL allowResizePastTargetRect;
@property NSUInteger popoverArrowDirection;
@property CGSize popoverContentSize;
@property CGRect popoverFrame;
@property(getter=isPopoverVisible,readonly) BOOL popoverVisible;

- (void)_adjustPopoverForNewContentSize:(id)arg1;
- (void)_adjustPopoverForNewContentSizeFromViewController:(id)arg1 allowShrink:(BOOL)arg2;
- (BOOL)_canRepresentAutomatically;
- (void)_containedViewControllerModalStateChanged;
- (BOOL)_dimmingViewDimsWhenModal;
- (void)_disableAutomaticKeyboard:(id)arg1;
- (void)_dismissPopoverAnimated:(BOOL)arg1 notifyDelegate:(BOOL)arg2;
- (void)_hostingWindowDidRotate:(id)arg1;
- (void)_hostingWindowWillRotate:(id)arg1;
- (void)_modalAnimation:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_modalTransition:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5;
- (NSInteger)_popoverBackgroundStyle;
- (void)_popoverDidDismiss:(id)arg1;
- (void)_popoverDismissAnimationCompleted;
- (void)_popoverIncomingAnimationCompleted;
- (void)_popoverPresentAnimationCompleted;
- (BOOL)_popoverRasterizesLayer;
- (BOOL)_popoverShouldBeDismissed:(id)arg1;
- (BOOL)_preventFastMode;
- (void)_setContentViewController:(id)arg1 backgroundStyle:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)_setDimmingViewDimsWhenModal:(BOOL)arg1;
- (void)_setPopoverBackgroundStyle:(NSInteger)arg1;
- (void)_setPopoverRasterizesLayer:(BOOL)arg1;
- (void)_setPreventFastMode:(BOOL)arg1;
- (void)_setupIncomingViewController:(id)arg1 presenting:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_startWatchingForWindowRotations;
- (void)_stopWatchingForWindowRotations;
- (void)_teardownOutgoingViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)allowResizePastTargetRect;
- (id)contentViewController;
- (id)copyScriptPopOver;
- (void)dealloc;
- (id)delegate;
- (id)dimmingView;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (id)init;
- (id)initWithContentViewController:(id)arg1;
- (BOOL)isPopoverVisible;
- (BOOL)isPresentingOrDismissing;
- (id)passthroughViews;
- (NSUInteger)popoverArrowDirection;
- (struct CGSize { float x1; float x2; })popoverContentSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })popoverFrame;
- (id)popoverView;
- (void)presentPopoverFromBarButtonItem:(id)arg1 permittedArrowDirections:(NSUInteger)arg2 animated:(BOOL)arg3;
- (void)presentPopoverFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 permittedArrowDirections:(NSUInteger)arg3 animated:(BOOL)arg4;
- (void)setAllowResizePastTargetRect:(BOOL)arg1;
- (void)setContentViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setContentViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmingView:(id)arg1;
- (void)setPassthroughViews:(id)arg1;
- (void)setPopoverArrowDirection:(NSUInteger)arg1;
- (void)setPopoverContentSize:(struct CGSize { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)setPopoverContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPopoverFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)setPopoverFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
