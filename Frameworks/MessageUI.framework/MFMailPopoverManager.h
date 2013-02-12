/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFPopoverController, NSArray, NSMutableArray, UIActionSheet, UIBarButtonItem, UIView;

@interface MFMailPopoverManager : NSObject <UIActionSheetDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    UIActionSheet *_actionSheet;
    id _actionSheetDelegate;
    NSUInteger _currentArrowDirections;
    UIBarButtonItem *_currentBarButtonItem;
    } _currentRect;
    UIView *_currentView;
    id _delegate;
    NSArray *_explicitPassthroughViews;
    BOOL _isHandlingActionSheetClick;
    NSMutableArray *_passThroughContexts;
    NSMutableArray *_passThroughProviders;
    BOOL _popoverBeingHiddenDuringRotation;
    MFPopoverController *_popoverController;
    double _popoverDismissalEnd;
    BOOL _popoverDismissalIsDelayed;
    BOOL _popoverDismissalShouldBeAnimated;
}

@property(retain) UIActionSheet *actionSheet;
@property(retain) UIBarButtonItem *currentBarButtonItem;
@property(retain) UIView *currentView;
@property(retain) MFPopoverController *popoverController;
@property(readonly) UIView *popoverView;
@property NSUInteger currentArrowDirections;
@property CGRect currentRect;
@property BOOL popoverBeingHiddenDuringRotation;
@property BOOL preventFastMode;
@property BOOL rasterizePopoverLayer;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)sharedInstance;

- (id)_allPassthroughViewsWithViews:(id)arg1;
- (void)_cleanupCurrentPopover;
- (id)_currentPassthroughProviders;
- (BOOL)_delegateSupportsRotation;
- (void)_dismissPopoverNow;
- (BOOL)_isEquivalentToCurrentPopover:(id)arg1;
- (void)_popoverDismissalDidFinish;
- (void)_willPresentPopover:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(NSInteger)arg2;
- (id)actionSheet;
- (void)actionSheetCancel:(id)arg1;
- (void)addPassthroughView:(id)arg1;
- (void)addPassthroughViewProvider:(id)arg1;
- (BOOL)allowRotation;
- (id)autorelease;
- (void)beginModalPassthroughContext;
- (NSUInteger)currentArrowDirections;
- (id)currentBarButtonItem;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })currentRect;
- (id)currentView;
- (void)dealloc;
- (double)delayUntilPopoverFinishesDismissing;
- (void)didPresentActionSheet:(id)arg1;
- (void)didRotate;
- (void)dismissPopoverAfterDelay:(double)arg1 animated:(BOOL)arg2;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (void)endModalPassthroughContext;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)popover;
- (BOOL)popoverBeingHiddenDuringRotation;
- (id)popoverController;
- (void)popoverControllerDidDismissPopover:(id)arg1 isUserAction:(BOOL)arg2;
- (BOOL)popoverDismissalIsDelayed;
- (BOOL)popoverShowing;
- (id)popoverView;
- (void)presentPopover:(id)arg1 fromBarButtonItem:(id)arg2 animated:(BOOL)arg3;
- (void)presentPopover:(id)arg1 fromBarButtonItem:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4;
- (void)presentPopover:(id)arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inView:(id)arg3 direction:(NSUInteger)arg4 allowInteractionWithViews:(id)arg5 withDelegate:(id)arg6 animated:(BOOL)arg7;
- (BOOL)preventFastMode;
- (BOOL)rasterizePopoverLayer;
- (void)release;
- (void)removePassthroughView:(id)arg1;
- (void)removePassthroughViewProvider:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)retain;
- (NSUInteger)retainCount;
- (void)setActionSheet:(id)arg1;
- (void)setCurrentArrowDirections:(NSUInteger)arg1;
- (void)setCurrentBarButtonItem:(id)arg1;
- (void)setCurrentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCurrentView:(id)arg1;
- (void)setPopoverBeingHiddenDuringRotation:(BOOL)arg1;
- (void)setPopoverController:(id)arg1;
- (void)setPreventFastMode:(BOOL)arg1;
- (void)setRasterizePopoverLayer:(BOOL)arg1;
- (void)willPresentActionSheet:(id)arg1;
- (void)willRotate;

@end
