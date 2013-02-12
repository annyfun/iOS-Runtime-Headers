/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIActionSheetDelegate>, NSMutableArray, UIImage, UILabel, UIPopoverController, UIToolbar, UIView, UIWindow;

@interface UIActionSheet : UIView {
    struct { 
        unsigned int numberOfRows : 7; 
        unsigned int delegateAlertSheetButtonClicked : 1; 
        unsigned int delegateDidPresentAlertSheet : 1; 
        unsigned int delegateDidDismissAlertSheet : 1; 
        unsigned int hideButtonBar : 1; 
        unsigned int alertStyle : 3; 
        unsigned int dontDimBackground : 1; 
        unsigned int dismissSuspended : 1; 
        unsigned int dontBlockInteraction : 1; 
        unsigned int sheetWasPoppedUp : 1; 
        unsigned int sheetWasShown : 1; 
        unsigned int animating : 1; 
        unsigned int hideWhenDoneAnimating : 1; 
        unsigned int layoutWhenDoneAnimating : 1; 
        unsigned int titleMaxLineCount : 2; 
        unsigned int bodyTextMaxLineCount : 3; 
        unsigned int runsModal : 1; 
        unsigned int runningModal : 1; 
        unsigned int addedTextView : 1; 
        unsigned int addedTableShadows : 1; 
        unsigned int showOverSBAlerts : 1; 
        unsigned int showMinTableContent : 1; 
        unsigned int bodyTextTruncated : 1; 
        unsigned int orientation : 3; 
        unsigned int popupFromPoint : 1; 
        unsigned int inPopover : 1; 
        unsigned int delegateBodyTextAlignment : 1; 
        unsigned int delegateClickedButtonAtIndex : 1; 
        unsigned int delegateClickedButtonAtIndex2 : 1; 
        unsigned int delegateCancel : 1; 
        unsigned int delegateCancel2 : 1; 
        unsigned int delegateWillPresent : 1; 
        unsigned int delegateWillPresent2 : 1; 
        unsigned int delegateDidPresent : 1; 
        unsigned int delegateDidPresent2 : 1; 
        unsigned int delegateWillDismiss : 1; 
        unsigned int delegateWillDismiss2 : 1; 
        unsigned int delegateDidDismiss : 1; 
        unsigned int delegateDidDismiss2 : 1; 
        unsigned int dontCallDismissDelegate : 1; 
        unsigned int useAutomaticKB : 1; 
        unsigned int twoColumnsLayoutMode : 7; 
        unsigned int shouldHandleFirstKeyUpEvent : 1; 
        unsigned int cancelWhenDoneAnimating : 1; 
        unsigned int useThreePartButtons : 1; 
        unsigned int useTwoPartButtons : 1; 
        unsigned int displaySelectedButtonGlyph : 1; 
        unsigned int indexOfSelectedButton : 7; 
        unsigned int useCustomSelectedButtonGlyph : 1; 
    NSInteger _actionSheetStyle;
    float _bodyTextHeight;
    UILabel *_bodyTextLabel;
    UIView *_buttonTableView;
    NSMutableArray *_buttons;
    NSMutableArray *_buttonsInTable;
    NSInteger _cancelButton;
    id _context;
    NSInteger _defaultButton;
    <UIActionSheetDelegate> *_delegate;
    UIView *_dimView;
    UIWindow *_dimWindow;
    NSInteger _dismissButtonIndex;
    NSInteger _firstOtherButton;
    float _fontSizeInTableView;
    float _iconOffset;
    UIView *_keyboard;
    float _labelOffset;
    float _labelWidth;
    } _modalViewFlags;
    BOOL _oldIgnoreTapsValue;
    UIWindow *_originalWindow;
    UIPopoverController *_popoverController;
    UIImage *_selectedButtonGlyphHighlightedImage;
    UIImage *_selectedButtonGlyphImage;
    float _startY;
    UILabel *_subtitleLabel;
    NSInteger _suspendTag;
    UIView *_table;
    UILabel *_taglineTextLabel;
    NSMutableArray *_textFields;
    UILabel *_titleLabel;
    float _titleWidth;
    UIToolbar *_toolbar;
}

@property <UIActionSheetDelegate> *delegate;
@property(copy) NSString *title;
@property NSInteger actionSheetStyle;
@property NSInteger cancelButtonIndex;
@property NSInteger destructiveButtonIndex;
@property(readonly) NSInteger firstOtherButtonIndex;
@property(readonly) NSInteger numberOfButtons;
@property(getter=isVisible,readonly) BOOL visible;

+ (void)_initializeSafeCategory;
+ (id)_popupAlertBackground;
+ (struct CGSize { float x1; float x2; })minimumSize;

- (void)_actionSheetHidingAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_actionSheetRepresentingAnimationDidStop:(id)arg1 finished:(id)arg2;
- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2 buttonClass:(Class)arg3;
- (id)_addButtonWithTitle:(id)arg1;
- (void)_alertSheetAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_alertSheetTextFieldReturn:(id)arg1;
- (void)_appSuspended:(id)arg1;
- (float)_bottomVerticalInset;
- (void)_bubbleAnimationNormalDidStop:(id)arg1 finished:(id)arg2;
- (void)_bubbleAnimationShrinkDidStop:(id)arg1 finished:(id)arg2;
- (void)_buttonClicked:(id)arg1;
- (float)_buttonHeight;
- (BOOL)_canShowAlerts;
- (void)_cancelAnimated:(BOOL)arg1;
- (void)_cleanupAfterPopupAnimation;
- (void)_createBodyTextLabelIfNeeded;
- (void)_createSubtitleLabelIfNeeded;
- (void)_createTaglineTextLabelIfNeeded;
- (void)_createTitleLabelIfNeeded;
- (NSInteger)_currentOrientation;
- (id)_dimView;
- (id)_dimViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_dimsBackground;
- (void)_growAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_handleKeyEvent:(struct __GSEvent { }*)arg1;
- (void)_hideActionSheetInsidePopOverAnimated:(BOOL)arg1;
- (void)_hideHostingPopOverViewAnimated:(BOOL)arg1;
- (BOOL)_isAnimating;
- (BOOL)_isHostedByPopOver;
- (BOOL)_isInsidePopOverContent;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_layoutIfNeeded;
- (void)_layoutPopupAlertWithOrientation:(NSInteger)arg1 animated:(BOOL)arg2;
- (float)_maxHeight;
- (struct CGSize { float x1; float x2; })_maxSize;
- (BOOL)_needsKeyboard;
- (void)_performPopoutAnimationAnimated:(BOOL)arg1;
- (void)_performPopup:(BOOL)arg1;
- (void)_popoutAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_popoverHiddingAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_popoverRepresentationAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_presentFromBarButtonItem:(id)arg1 orFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inView:(id)arg3 direction:(NSInteger)arg4 allowInteractionWithViews:(id)arg5 backgroundStyle:(NSInteger)arg6 animated:(BOOL)arg7;
- (void)_presentPopoverInCenterOfWindowForView:(id)arg1;
- (void)_presentSheetFromView:(id)arg1 above:(BOOL)arg2;
- (void)_presentSheetStartingFromYCoordinate:(double)arg1 inView:(id)arg2;
- (void)_presentSheetStartingFromYCoordinate:(double)arg1;
- (id)_presentingViewForView:(id)arg1;
- (id)_relinquishPopoverController;
- (void)_removeAlertWindowOrShowAnOldAlert;
- (void)_repopup;
- (void)_repopupNoAnimation;
- (void)_representActionSheetInsidePopOverAnimated:(BOOL)arg1;
- (void)_representHostingPopOverViewAnimated:(BOOL)arg1;
- (void)_rotatingAnimationDidStop:(id)arg1;
- (void)_setAlertSheetStyleFromButtonBar:(id)arg1;
- (void)_setFirstOtherButtonIndex:(NSInteger)arg1;
- (void)_setupInitialFrame;
- (void)_setupTitleStyle;
- (BOOL)_shouldOrderInAutomaticKeyboard;
- (void)_slideSheetOut:(BOOL)arg1;
- (void)_temporarilyHideAnimated:(BOOL)arg1;
- (float)_titleHorizontalInset;
- (id)_titleLabel;
- (float)_titleVerticalBottomInset;
- (float)_titleVerticalTopInset;
- (void)_truncateViewHeight:(id)arg1 toFitInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withMinimumHeight:(float)arg3;
- (NSInteger)actionSheetStyle;
- (id)addButtonWithTitle:(id)arg1 buttonClass:(Class)arg2;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (NSInteger)addButtonWithTitle:(id)arg1 tag:(id)arg2;
- (NSInteger)addButtonWithTitle:(id)arg1;
- (id)addMediaButtonWithTitle:(id)arg1 iconView:(id)arg2 andTableIconView:(id)arg3;
- (id)addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (NSInteger)alertSheetStyle;
- (struct CGSize { float x1; float x2; })backgroundSize;
- (BOOL)becomeFirstResponder;
- (BOOL)blocksInteraction;
- (NSInteger)bodyMaxLineCount;
- (id)bodyText;
- (id)buttonAtIndex:(NSInteger)arg1;
- (NSInteger)buttonCount;
- (id)buttonTitleAtIndex:(NSInteger)arg1;
- (id)buttons;
- (BOOL)canBecomeFirstResponder;
- (NSInteger)cancelButtonIndex;
- (id)context;
- (void)dealloc;
- (id)defaultButton;
- (NSInteger)defaultButtonIndex;
- (id)delegate;
- (id)destructiveButton;
- (NSInteger)destructiveButtonIndex;
- (BOOL)dimsBackground;
- (void)dismiss;
- (void)dismissAnimated:(BOOL)arg1;
- (void)dismissWithClickedButtonIndex:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)firstOtherButtonIndex;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(NSInteger)arg3 delegate:(id)arg4 context:(id)arg5;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6;
- (BOOL)isBodyTextTruncated;
- (BOOL)isVisible;
- (id)keyboard;
- (void)layout;
- (void)layoutAnimated:(BOOL)arg1;
- (id)message;
- (struct CGSize { float x1; float x2; })minimumSize;
- (NSInteger)numberOfButtons;
- (NSInteger)numberOfLinesInTitle;
- (NSInteger)numberOfRows;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)popupAlertAnimated:(BOOL)arg1 atOffset:(float)arg2;
- (void)popupAlertAnimated:(BOOL)arg1;
- (void)presentFromBarButtonItem:(id)arg1 direction:(NSInteger)arg2 allowInteractionWithViews:(id)arg3 backgroundStyle:(NSInteger)arg4 animated:(BOOL)arg5;
- (void)presentFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 direction:(NSInteger)arg3 allowInteractionWithViews:(id)arg4 backgroundStyle:(NSInteger)arg5 animated:(BOOL)arg6;
- (void)presentSheetFromAboveView:(id)arg1;
- (void)presentSheetFromBehindView:(id)arg1;
- (void)presentSheetFromButtonBar:(id)arg1;
- (void)presentSheetInContentView:(id)arg1;
- (void)presentSheetInPopoverView:(id)arg1;
- (void)presentSheetInView:(id)arg1;
- (void)presentSheetToAboveView:(id)arg1;
- (BOOL)requiresPortraitOrientation;
- (BOOL)resignFirstResponder;
- (BOOL)runsModal;
- (void)setActionSheetStyle:(NSInteger)arg1;
- (void)setAlertSheetStyle:(NSInteger)arg1;
- (void)setBlocksInteraction:(BOOL)arg1;
- (void)setBodyText:(id)arg1;
- (void)setBodyTextMaxLineCount:(NSInteger)arg1;
- (void)setCancelButtonIndex:(NSInteger)arg1;
- (void)setContext:(id)arg1;
- (void)setDefaultButton:(id)arg1;
- (void)setDefaultButtonIndex:(NSInteger)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestructiveButton:(id)arg1;
- (void)setDestructiveButtonIndex:(NSInteger)arg1;
- (void)setDimView:(id)arg1;
- (void)setDimsBackground:(BOOL)arg1;
- (void)setInPopover:(BOOL)arg1;
- (void)setIndexOfSelectedButton:(NSInteger)arg1;
- (void)setMessage:(id)arg1;
- (void)setNumberOfRows:(NSInteger)arg1;
- (void)setRunsModal:(BOOL)arg1;
- (void)setSelectedButtonGlyphHighlightedImage:(id)arg1;
- (void)setSelectedButtonGlyphImage:(id)arg1;
- (void)setShowsOverSpringBoardAlerts:(BOOL)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSuspendTag:(NSInteger)arg1;
- (void)setTableShouldShowMinimumContent:(BOOL)arg1;
- (void)setTaglineText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleMaxLineCount:(NSInteger)arg1;
- (void)setTwoColumnsLayoutMode:(NSInteger)arg1;
- (void)setUseTwoColumnsButtonsLayout:(BOOL)arg1;
- (void)showFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)showFromBarButtonItem:(id)arg1;
- (void)showFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (void)showFromTabBar:(id)arg1;
- (void)showFromToolbar:(id)arg1;
- (void)showInView:(id)arg1;
- (BOOL)showsOverSpringBoardAlerts;
- (id)subtitle;
- (NSInteger)suspendTag;
- (id)table;
- (BOOL)tableShouldShowMinimumContent;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView;
- (id)tagForButtonIndex:(NSInteger)arg1;
- (id)textField;
- (id)textFieldAtIndex:(NSInteger)arg1;
- (NSInteger)textFieldCount;
- (id)title;
- (NSInteger)titleMaxLineCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRect;
- (NSInteger)twoColumnsLayoutMode;
- (BOOL)useTwoColumnsButtonsLayout;

@end
