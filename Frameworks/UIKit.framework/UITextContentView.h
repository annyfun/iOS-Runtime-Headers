/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMHTMLElement, UIColor, UIDelayedAction, UIFont, UITextInteractionAssistant, UITextSelectionView, UIWebDocumentView, WebFrame;

@interface UITextContentView : UIView <UITextSelectingContainer, UITextInputTraits> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    BOOL m_becomesEditableWithGestures;
    BOOL m_becomingFirstResponder;
    DOMHTMLElement *m_body;
    float m_bottomBufferHeight;
    id m_delegate;
    BOOL m_editable;
    BOOL m_editing;
    UIFont *m_font;
    WebFrame *m_frame;
    BOOL m_hasExplicitTextAlignment;
    UITextInteractionAssistant *m_interactionAssistant;
    NSInteger m_marginTop;
    BOOL m_reentrancyGuard;
    UIDelayedAction *m_scrollToVisibleTimer;
    BOOL m_scrollsSelectionOnWebDocumentChanges;
    } m_selectionInset;
    UITextSelectionView *m_selectionView;
    NSInteger m_textAlignment;
    UIColor *m_textColor;
    UIWebDocumentView *m_webView;
}

@property(readonly) UIView<UITextSelectingContent> *content;
@property <UITextContentViewDelegate> *delegate;
@property(retain) UIFont *font;
@property(readonly) UITextInteractionAssistant *interactionAssistant;
@property(readonly) UITextSelectionView *selectionView;
@property(copy) NSString *text;
@property(retain) UIColor *textColor;
@property NSInteger autocapitalizationType;
@property NSInteger autocorrectionType;
@property(getter=isEditable) BOOL editable;
@property(getter=isEditing) BOOL editing;
@property BOOL enablesReturnKeyAutomatically;
@property NSInteger keyboardAppearance;
@property NSInteger keyboardType;
@property NSInteger returnKeyType;
@property BOOL scrollsSelectionOnWebDocumentChanges;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property _NSRange selectedRange;
@property UIEdgeInsets selectionInset;
@property NSInteger textAlignment;

+ (void)_initializeSafeCategory;

- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_accessibilityCurrentSelectionRange;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)_accessibilitySetValue:(id)arg1;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_automationValue;
- (void)_didScroll;
- (void)_hideSelectionCommands;
- (id)_keyboardResponder;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_scrollViewDidEndDecelerating;
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1;
- (void)_scrollViewWillBeginDragging;
- (void)_setLtoRTextDirection:(id)arg1;
- (void)_setRtoLTextDirection:(id)arg1;
- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)automaticallySelectedOverlay;
- (BOOL)becomeFirstResponder;
- (BOOL)becomesEditableWithGestures;
- (void)beginSelectionChange;
- (float)bottomBufferHeight;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canResignFirstResponder;
- (void)cancelAutoscroll;
- (void)cancelDataDetectorsWithWebLock;
- (void)cancelInteractionWithLink;
- (BOOL)caretBlinks;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForVisiblePosition:(id)arg1;
- (unsigned short)characterBeforeCaretSelection;
- (void)clearScrollToVisibleTimer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)commonInitWithWebDocumentView:(id)arg1 isDecoding:(BOOL)arg2;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)content;
- (id)contentAsHTMLString;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (NSUInteger)dataDetectorTypes;
- (void)dealloc;
- (id)delegate;
- (void)detachInteractionAssistant;
- (void)detachSelectionView;
- (void)didMoveToSuperview;
- (void)displayScrollerIndicators;
- (id)documentFragmentForPasteboardItemAtIndex:(NSInteger)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endSelectionChange;
- (void)ensureSelection;
- (id)font;
- (id)fontForCaretSelection;
- (void)forwardInvocation:(id)arg1;
- (BOOL)hasMarkedText;
- (BOOL)hasSelection;
- (BOOL)hasText;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 webView:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (BOOL)isAccessibilityElement;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (BOOL)isFirstResponder;
- (BOOL)isInteractingWithLink;
- (BOOL)isSMSTextView;
- (void)keyboardDidShow:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 replacementText:(id)arg3;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (NSInteger)marginTop;
- (id)markedText;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)mightHaveLinks;
- (struct CGPoint { float x1; float x2; })offset;
- (NSUInteger)offsetInMarkedTextForSelection:(id)arg1;
- (void)paste:(id)arg1;
- (void)performBecomeEditableTasks;
- (void)performScrollSelectionToVisible:(BOOL)arg1;
- (void)promptForReplace:(id)arg1;
- (void)recalculateStyle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectContainingCaretSelection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForScrollToVisible;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForSelection:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)registerForEditingDelegateNotification:(id)arg1 selector:(SEL)arg2;
- (void)removeFromSuperview;
- (void)replace:(id)arg1;
- (void)resetDataDetectorsResultsWithWebLock;
- (BOOL)resignFirstResponder;
- (void)scrollRangeToVisible:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)scrollSelectionToVisible:(BOOL)arg1;
- (void)scrollToVisibleTimerAction;
- (id)scrollView;
- (BOOL)scrollingEnabled;
- (BOOL)scrollsSelectionOnWebDocumentChanges;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)selectAll;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })selectedRange;
- (id)selectedText;
- (void)selectionChanged;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionClipRect;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })selectionInset;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })selectionRange;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionView;
- (BOOL)selectionVisible;
- (void)setAllowsFourWayRubberBanding:(BOOL)arg1;
- (void)setAllowsRubberBanding:(BOOL)arg1;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (void)setBottomBufferHeight:(float)arg1;
- (void)setCaretBlinks:(BOOL)arg1;
- (void)setContentToHTMLString:(id)arg1;
- (void)setDataDetectorTypes:(NSUInteger)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setEmbeddedEditingMode:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMarginTop:(NSInteger)arg1;
- (void)setOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setScrollerIndicatorSubrect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setScrollingEnabled:(BOOL)arg1;
- (void)setScrollsSelectionOnWebDocumentChanges:(BOOL)arg1;
- (void)setSelectedRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)setSelectionInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setSelectionToEnd;
- (void)setSelectionToStart;
- (void)setSelectionVisible:(BOOL)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setShowScrollerIndicators:(BOOL)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(NSInteger)arg1;
- (void)setTextColor:(id)arg1;
- (BOOL)shouldStartDataDetectors;
- (BOOL)showScrollerIndicators;
- (void)startAutoscroll:(struct CGPoint { float x1; float x2; })arg1;
- (void)startDataDetectorsWithWebLock;
- (void)startInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)startLongInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)styleString;
- (id)supportedPasteboardTypesForCurrentSelection;
- (void)tapLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)text;
- (NSInteger)textAlignment;
- (id)textColor;
- (id)textInputTraits;
- (struct CGSize { float x1; float x2; })tileSizeForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)touchScrollToVisibleTimer;
- (void)touchScrollToVisibleTimerWithDelay:(double)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)undoManager;
- (id)undoManagerForWebView:(id)arg1;
- (void)updateInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateSelection;
- (void)updateWebViewObjects;
- (void)validateInteractionWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleTextRect;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (id)webView;
- (void)webViewDidChange:(id)arg1;
- (BOOL)willInteractWithLinkAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)wordContainingCaretSelection;
- (id)wordInRange:(id)arg1;
- (id)wordRangeContainingCaretSelection;

@end
