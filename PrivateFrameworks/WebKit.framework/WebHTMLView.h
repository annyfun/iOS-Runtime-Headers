/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class WebHTMLViewPrivate;

@interface WebHTMLView : WAKView <WebDocumentSelection, WebDocumentIncrementalSearching, WebDocumentElement, WebMultipleTextMatches, WebDocumentView, WebDocumentSearching> {
     /* Encoded args for previous method: c12@0:4^{KeyboardEvent=^^?i{AtomicString={String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}}BBBBBBBS^{EventTarget}{RefPtr<WebCore::EventTarget>=^{EventTarget}}Q{RefPtr<WebCore::Event>=^{Event}}{RefPtr<WebCore::DOMWindow>=^{DOMWindow}}ib1b1b1b1{OwnPtr<WebCore::PlatformKeyboardEvent>=^{PlatformKeyboardEvent}}{String={RefPtr<WebCore::StringImpl>=^{StringImpl}}}Ib1{Vector<WebCore::KeypressCommand,0ul>=I{VectorBuffer<WebCore::KeypressCommand,0ul>=^{KeypressCommand}I}}}8 */
    WebHTMLViewPrivate *_private;
}

+ (void)_initializeSafeCategory;
+ (void)initialize;
+ (id)supportedImageMIMETypes;
+ (id)supportedMIMETypes;
+ (id)supportedNonImageMIMETypes;
+ (id)unsupportedTextMIMETypes;

- (id)_accessibilityParentForSubview:(id)arg1;
- (float)_adjustedBottomOfPageWithTop:(float)arg1 bottom:(float)arg2 limit:(float)arg3;
- (void)_applyParagraphStyleToSelection:(id)arg1 withUndoAction:(NSInteger)arg2;
- (void)_applyStyleToSelection:(id)arg1 withUndoAction:(NSInteger)arg2;
- (void)_autoscroll;
- (BOOL)_beginPrintModeWithMinimumPageWidth:(float)arg1 height:(float)arg2 maximumPageWidth:(float)arg3;
- (BOOL)_beginPrintModeWithPageWidth:(float)arg1 height:(float)arg2 shrinkToFit:(BOOL)arg3;
- (BOOL)_canAlterCurrentSelection;
- (BOOL)_canDecreaseSelectionListLevel;
- (BOOL)_canEdit;
- (BOOL)_canEditRichly;
- (BOOL)_canIncreaseSelectionListLevel;
- (BOOL)_canSmartCopyOrDelete;
- (void)_changeWordCaseWithSelector:(SEL)arg1;
- (void)_clearLastHitViewIfSelf;
- (id)_compositingLayersHostingView;
- (id)_dataSource;
- (void)_decreaseSelectionListLevel;
- (void)_destroyAllWebPlugins;
- (id)_documentRange;
- (id)_emptyStyle;
- (void)_endPrintMode;
- (id)_frame;
- (void)_frameOrBoundsChanged;
- (id)_frameView;
- (BOOL)_handleEditingKeyEvent:(struct KeyboardEvent { int (**x1)(); NSInteger x2; struct AtomicString { struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; unsigned short x11; struct EventTarget {} *x12; struct RefPtr<WebCore::EventTarget> { struct EventTarget {} *x_13_1_1; } x13; unsigned long long x14; struct RefPtr<WebCore::Event> { struct Event {} *x_15_1_1; } x15; struct RefPtr<WebCore::DOMWindow> { struct DOMWindow {} *x_16_1_1; } x16; NSInteger x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; struct OwnPtr<WebCore::PlatformKeyboardEvent> { struct PlatformKeyboardEvent {} *x_22_1_1; } x22; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_23_1_1; } x23; NSUInteger x24; unsigned int x25 : 1; struct Vector<WebCore::KeypressCommand,0ul> { NSUInteger x_26_1_1; struct VectorBuffer<WebCore::KeypressCommand,0ul> { struct KeypressCommand {} *x_2_2_1; NSUInteger x_2_2_2; } x_26_1_2; } x26; }*)arg1;
- (BOOL)_hasHTMLDocument;
- (BOOL)_hasInsertionPoint;
- (BOOL)_hasSelection;
- (BOOL)_hasSelectionOrInsertionPoint;
- (id)_highlighterForType:(id)arg1;
- (id)_increaseSelectionListLevel;
- (id)_increaseSelectionListLevelOrdered;
- (id)_increaseSelectionListLevelUnordered;
- (id)_insertOrderedList;
- (id)_insertUnorderedList;
- (BOOL)_insideAnotherHTMLView;
- (BOOL)_isEditable;
- (BOOL)_isInPrintMode;
- (BOOL)_isSelectionEvent:(id)arg1;
- (BOOL)_isTopHTMLView;
- (BOOL)_isUsingAcceleratedCompositing;
- (void)_layoutIfNeeded;
- (BOOL)_needsLayout;
- (id)_pluginController;
- (void)_removeHighlighterOfType:(id)arg1;
- (void)_restoreSubviews;
- (id)_selectedRange;
- (void)_selectionChanged;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_selectionRect;
- (void)_setAsideSubviews;
- (void)_setHighlighter:(id)arg1 ofType:(id)arg2;
- (void)_setMouseDownEvent:(id)arg1;
- (void)_setPrinting:(BOOL)arg1 minimumPageWidth:(float)arg2 height:(float)arg3 maximumPageWidth:(float)arg4 adjustViewSize:(BOOL)arg5;
- (void)_setToolTip:(id)arg1;
- (void)_setTransparentBackground:(BOOL)arg1;
- (BOOL)_shouldDeleteRange:(id)arg1;
- (BOOL)_shouldInsertFragment:(id)arg1 replacingDOMRange:(id)arg2 givenAction:(NSInteger)arg3;
- (BOOL)_shouldInsertText:(id)arg1 replacingDOMRange:(id)arg2 givenAction:(NSInteger)arg3;
- (BOOL)_shouldReplaceSelectionWithText:(id)arg1 givenAction:(NSInteger)arg2;
- (void)_startAutoscrollTimer:(id)arg1;
- (void)_stopAutoscrollTimer;
- (id)_topHTMLView;
- (BOOL)_transparentBackground;
- (void)_updateSelectionForInputManager;
- (BOOL)_wantsKeyDownForEvent:(id)arg1;
- (id)_webView;
- (void)_web_layoutIfNeededRecursive;
- (oneway void)_webcore_releaseOnWebThread;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityElementAtIndex:(NSInteger)arg1;
- (NSInteger)accessibilityElementCount;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1;
- (id)accessibilityRootElement;
- (void)addSubview:(id)arg1;
- (void)alignCenter:(id)arg1;
- (void)alignJustified:(id)arg1;
- (void)alignLeft:(id)arg1;
- (void)alignRight:(id)arg1;
- (void)attachRootLayer:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)callDelegateDoCommandBySelectorIfNeeded:(SEL)arg1;
- (void)capitalizeWord:(id)arg1;
- (void)centerSelectionInVisibleArea:(id)arg1;
- (NSUInteger)characterIndexForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)clearFocus;
- (void)clearText:(id)arg1;
- (void)close;
- (void)closeIfNotCurrentView;
- (NSInteger)conversationIdentifier;
- (void)copy:(id)arg1;
- (struct Command { struct RefPtr<WebCore::Frame> { struct Frame {} *x_1_1_1; } x1; struct EditorInternalCommand {} *x2; NSInteger x3; })coreCommandByName:(const char *)arg1;
- (struct Command { struct RefPtr<WebCore::Frame> { struct Frame {} *x_1_1_1; } x1; struct EditorInternalCommand {} *x2; NSInteger x3; })coreCommandBySelector:(SEL)arg1;
- (NSUInteger)countMatchesForText:(id)arg1 caseSensitive:(BOOL)arg2 limit:(NSUInteger)arg3 markMatches:(BOOL)arg4;
- (void)cut:(id)arg1;
- (void)dataSourceUpdated:(id)arg1;
- (void)dealloc;
- (void)delete:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteToBeginningOfLine:(id)arg1;
- (void)deleteToBeginningOfParagraph:(id)arg1;
- (void)deleteToEndOfLine:(id)arg1;
- (void)deleteToEndOfParagraph:(id)arg1;
- (void)deleteToMark:(id)arg1;
- (void)deleteWordBackward:(id)arg1;
- (void)deleteWordForward:(id)arg1;
- (void)deselectAll;
- (void)detachRootLayer;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawSingleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)elementAtPoint:(struct CGPoint { float x1; float x2; })arg1 allowShadowContent:(BOOL)arg2;
- (id)elementAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)executeCoreCommandByName:(const char *)arg1;
- (void)executeCoreCommandBySelector:(SEL)arg1;
- (void)finalize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForCharacterRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (BOOL)hasMarkedText;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1;
- (void)ignoreSpelling:(id)arg1;
- (void)indent:(id)arg1;
- (NSInteger)indexOfAccessibilityElement:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertLineBreak:(id)arg1;
- (void)insertNewline:(id)arg1;
- (void)insertNewlineIgnoringFieldEditor:(id)arg1;
- (void)insertParagraphSeparator:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)insertTabIgnoringFieldEditor:(id)arg1;
- (void)insertText:(id)arg1;
- (BOOL)isOpaque;
- (void)jumpToSelection:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)layout;
- (void)layoutIfNeeded;
- (void)layoutToMinimumPageWidth:(float)arg1 height:(float)arg2 maximumPageWidth:(float)arg3 adjustingViewSize:(BOOL)arg4;
- (void)lowercaseWord:(id)arg1;
- (BOOL)maintainsInactiveSelection;
- (void)makeBaseWritingDirectionNatural:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionNatural:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (NSUInteger)markAllMatchesForText:(id)arg1 caseSensitive:(BOOL)arg2 limit:(NSUInteger)arg3;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })markedRange;
- (BOOL)markedTextMatchesAreHighlighted;
- (void)markedTextUpdate:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)moveBackward:(id)arg1;
- (void)moveBackwardAndModifySelection:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveForward:(id)arg1;
- (void)moveForwardAndModifySelection:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveParagraphBackwardAndModifySelection:(id)arg1;
- (void)moveParagraphForwardAndModifySelection:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveToBeginningOfDocument:(id)arg1;
- (void)moveToBeginningOfDocumentAndModifySelection:(id)arg1;
- (void)moveToBeginningOfLine:(id)arg1;
- (void)moveToBeginningOfLineAndModifySelection:(id)arg1;
- (void)moveToBeginningOfParagraph:(id)arg1;
- (void)moveToBeginningOfParagraphAndModifySelection:(id)arg1;
- (void)moveToBeginningOfSentence:(id)arg1;
- (void)moveToBeginningOfSentenceAndModifySelection:(id)arg1;
- (void)moveToEndOfDocument:(id)arg1;
- (void)moveToEndOfDocumentAndModifySelection:(id)arg1;
- (void)moveToEndOfLine:(id)arg1;
- (void)moveToEndOfLineAndModifySelection:(id)arg1;
- (void)moveToEndOfParagraph:(id)arg1;
- (void)moveToEndOfParagraphAndModifySelection:(id)arg1;
- (void)moveToEndOfSentence:(id)arg1;
- (void)moveToEndOfSentenceAndModifySelection:(id)arg1;
- (void)moveToLeftEndOfLine:(id)arg1;
- (void)moveToLeftEndOfLineAndModifySelection:(id)arg1;
- (void)moveToRightEndOfLine:(id)arg1;
- (void)moveToRightEndOfLineAndModifySelection:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveWordBackward:(id)arg1;
- (void)moveWordBackwardAndModifySelection:(id)arg1;
- (void)moveWordForward:(id)arg1;
- (void)moveWordForwardAndModifySelection:(id)arg1;
- (void)moveWordLeft:(id)arg1;
- (void)moveWordLeftAndModifySelection:(id)arg1;
- (void)moveWordRight:(id)arg1;
- (void)moveWordRightAndModifySelection:(id)arg1;
- (void)outdent:(id)arg1;
- (void)pageDown:(id)arg1;
- (void)pageDownAndModifySelection:(id)arg1;
- (void)pageUp:(id)arg1;
- (void)pageUpAndModifySelection:(id)arg1;
- (void)pasteAsPlainText:(id)arg1;
- (void)reapplyStyles;
- (id)rectsForTextMatches;
- (oneway void)release;
- (BOOL)resignFirstResponder;
- (void)scrollWheel:(id)arg1;
- (BOOL)searchFor:(id)arg1 direction:(BOOL)arg2 caseSensitive:(BOOL)arg3 wrap:(BOOL)arg4 startInSelection:(BOOL)arg5;
- (BOOL)searchFor:(id)arg1 direction:(BOOL)arg2 caseSensitive:(BOOL)arg3 wrap:(BOOL)arg4;
- (void)selectAll:(id)arg1;
- (void)selectAll;
- (void)selectLine:(id)arg1;
- (void)selectParagraph:(id)arg1;
- (void)selectSentence:(id)arg1;
- (void)selectToMark:(id)arg1;
- (void)selectWord:(id)arg1;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })selectedRange;
- (id)selectedString;
- (struct CGImage { }*)selectionImageForcingBlackText:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionImageRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionRect;
- (id)selectionTextRects;
- (id)selectionView;
- (void)setDataSource:(id)arg1;
- (void)setMark:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)setMarkedTextMatchesAreHighlighted:(BOOL)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsLayout:(BOOL)arg1;
- (void)setNeedsToApplyStyles:(BOOL)arg1;
- (void)setScale:(float)arg1;
- (id)string;
- (void)subscript:(id)arg1;
- (void)superscript:(id)arg1;
- (BOOL)supportsTextEncoding;
- (void)swapWithMark:(id)arg1;
- (void)toggleBaseWritingDirection:(id)arg1;
- (void)touch:(id)arg1;
- (void)transpose:(id)arg1;
- (void)underline:(id)arg1;
- (void)unmarkAllTextMatches;
- (void)unmarkText;
- (void)unscript:(id)arg1;
- (void)uppercaseWord:(id)arg1;
- (void)viewDidMoveToHostWindow;
- (void)viewDidMoveToWindow;
- (void)viewWillDraw;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)yank:(id)arg1;
- (void)yankAndSelect:(id)arg1;

@end
