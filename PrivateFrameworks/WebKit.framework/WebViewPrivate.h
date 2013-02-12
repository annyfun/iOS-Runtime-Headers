/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class <WebCaretChangeListener>, <WebFormDelegate>, <WebGeolocationProvider>, NSMutableSet, NSString, NSTimer, NSURL, WAKWindow, WebEvent, WebInspector, WebNodeHighlight, WebPreferences, WebVideoFullscreenController;

@interface WebViewPrivate : NSObject {
    struct String { 
        struct RefPtr<WebCore::StringImpl> { 
            struct StringImpl {} *m_ptr; 
        } m_impl; 
    struct WebResourceDelegateImplementationCache { 
        int (*didCancelAuthenticationChallengeFunc)(); 
        int (*didReceiveAuthenticationChallengeFunc)(); 
        int (*canAuthenticateAgainstProtectionSpaceFunc)(); 
        int (*connectionPropertiesFunc)(); 
        int (*webThreadDidFinishLoadingFromDataSourceFunc)(); 
        int (*webThreadDidFailLoadingWithErrorFromDataSourceFunc)(); 
        int (*webThreadIdentifierForRequestFunc)(); 
        int (*identifierForRequestFunc)(); 
        int (*willSendRequestFunc)(); 
        int (*didReceiveResponseFunc)(); 
        int (*didReceiveContentLengthFunc)(); 
        int (*didFinishLoadingFromDataSourceFunc)(); 
        int (*didFailLoadingWithErrorFromDataSourceFunc)(); 
        int (*didLoadResourceFromMemoryCacheFunc)(); 
        int (*willCacheResponseFunc)(); 
        int (*plugInFailedWithErrorFunc)(); 
        int (*shouldUseCredentialStorageFunc)(); 
    struct WebFrameLoadDelegateImplementationCache { 
        int (*didClearWindowObjectForFrameFunc)(); 
        int (*didClearWindowObjectForFrameInScriptWorldFunc)(); 
        int (*didClearInspectorWindowObjectForFrameFunc)(); 
        int (*windowScriptObjectAvailableFunc)(); 
        int (*didHandleOnloadEventsForFrameFunc)(); 
        int (*didReceiveServerRedirectForProvisionalLoadForFrameFunc)(); 
        int (*didCancelClientRedirectForFrameFunc)(); 
        int (*willPerformClientRedirectToURLDelayFireDateForFrameFunc)(); 
        int (*didChangeLocationWithinPageForFrameFunc)(); 
        int (*didPushStateWithinPageForFrameFunc)(); 
        int (*didReplaceStateWithinPageForFrameFunc)(); 
        int (*didPopStateWithinPageForFrameFunc)(); 
        int (*willCloseFrameFunc)(); 
        int (*didStartProvisionalLoadForFrameFunc)(); 
        int (*didReceiveTitleForFrameFunc)(); 
        int (*didCommitLoadForFrameFunc)(); 
        int (*didFailProvisionalLoadWithErrorForFrameFunc)(); 
        int (*didFailLoadWithErrorForFrameFunc)(); 
        int (*didFinishLoadForFrameFunc)(); 
        int (*didFirstLayoutInFrameFunc)(); 
        int (*didFirstVisuallyNonEmptyLayoutInFrameFunc)(); 
        int (*didFinishDocumentLoadForFrameFunc)(); 
        int (*didDisplayInsecureContentFunc)(); 
        int (*didRunInsecureContentFunc)(); 
    struct WebScriptDebugDelegateImplementationCache { 
        BOOL didParseSourceExpectsBaseLineNumber; 
        int (*didParseSourceFunc)(); 
        int (*failedToParseSourceFunc)(); 
        int (*didEnterCallFrameFunc)(); 
        int (*willExecuteStatementFunc)(); 
        int (*willLeaveCallFrameFunc)(); 
        int (*exceptionWasRaisedFunc)(); 
    struct WebHistoryDelegateImplementationCache { 
        int (*navigatedFunc)(); 
        int (*clientRedirectFunc)(); 
        int (*serverRedirectFunc)(); 
        int (*setTitleFunc)(); 
        int (*populateVisitedLinksFunc)(); 
    struct CGSize { 
        float width; 
        float height; 
    struct HashMap<long unsigned int,WTF::RetainPtr<objc_object*>,WTF::IntHash<long unsigned int>,WTF::HashTraits<long unsigned int>,WTF::HashTraits<WTF::RetainPtr<objc_object*> > > { 
        struct HashTable<long unsigned int,std::pair<long unsigned int, WTF::RetainPtr<objc_object*> >,WTF::PairFirstExtractor<std::pair<long unsigned int, WTF::RetainPtr<objc_object*> > >,WTF::IntHash<long unsigned int>,WTF::PairHashTraits<WTF::HashTraits<long unsigned int>, WTF::HashTraits<WTF::RetainPtr<objc_object*> > >,WTF::HashTraits<long unsigned int> > { 
            struct pair<long unsigned int,WTF::RetainPtr<objc_object*> > {} *m_table; 
            NSInteger m_tableSize; 
            NSInteger m_tableSizeMask; 
            NSInteger m_keyCount; 
            NSInteger m_deletedCount; 
        } m_impl; 
    struct CGSize { 
        float width; 
        float height; 
    id UIDelegate;
    id UIDelegateForwarder;
    id UIKitDelegate;
    id UIKitDelegateForwarder;
    id WebMailDelegate;
    <WebCaretChangeListener> *_caretChangeListener;
    NSMutableSet *_caretChangeListeners;
    <WebGeolocationProvider> *_geolocationProvider;
    NSInteger _keyboardUIMode;
    BOOL _keyboardUIModeAccessed;
    BOOL allowsMessaging;
    BOOL allowsUndo;
    NSString *applicationNameForUserAgent;
    NSTimer *autoscrollTimer;
    WebEvent *autoscrollTriggerEvent;
    struct CGColor { } *backgroundColor;
    BOOL becomingFirstResponder;
    BOOL becomingFirstResponderFromOutside;
    BOOL catchesDelegateExceptions;
    BOOL closed;
    BOOL closing;
    BOOL cssAnimationsSuspended;
    WebNodeHighlight *currentNodeHighlight;
    id downloadDelegate;
    BOOL drawsBackground;
    BOOL editable;
    id editingDelegate;
    id editingDelegateForwarder;
    } fixedLayoutSize;
    <WebFormDelegate> *formDelegate;
    id formDelegateForwarder;
    id frameLoadDelegate;
    id frameLoadDelegateForwarder;
    } frameLoadDelegateImplementations;
    WebVideoFullscreenController *fullscreenController;
    BOOL handlingMouseDownEvent;
    BOOL hasSpellCheckerDocumentTag;
    id historyDelegate;
    } historyDelegateImplementations;
    WAKWindow *hostWindow;
    BOOL hoverFeedbackSuspended;
    } identifierMap;
    BOOL ignoringMouseDraggedEvents;
    BOOL includesFlattenedCompositingLayersWhenDrawingToBitmap;
    WebInspector *inspector;
    BOOL isStopping;
    WebEvent *keyDownEvent;
    } lastLayoutSize;
    struct __CFRunLoopObserver { } *layerSyncRunLoopObserver;
    BOOL mainFrameDocumentReady;
    BOOL mainViewIsScrollingOrZooming;
    NSString *mediaStyle;
    WebEvent *mouseDownEvent;
    BOOL needsOneShotDrawingSynchronization;
    void *observationInfo;
    struct Page { } *page;
    id policyDelegate;
    id policyDelegateForwarder;
    BOOL postsAcceleratedCompositingNotifications;
    WebPreferences *preferences;
    NSInteger programmaticFocusCount;
    } resourceLoadDelegateImplementations;
    id resourceProgressDelegate;
    id resourceProgressDelegateForwarder;
    id scriptDebugDelegate;
    } scriptDebugDelegateImplementations;
    BOOL selectTrailingWhitespaceEnabled;
    BOOL shouldCacheFileURLs;
    BOOL shouldCloseWithWindow;
    BOOL shouldUpdateWhileOffscreen;
    BOOL smartInsertDeleteEnabled;
    NSInteger spellCheckerDocumentTag;
    BOOL tabKeyCyclesThroughElementsChanged;
    BOOL useSiteSpecificSpoofing;
    } userAgent;
    BOOL userAgentOverridden;
    NSURL *userStyleSheetLocation;
    BOOL usesDocumentViews;
    BOOL usesLoaderCache;
    BOOL usesPageCache;
    float zoomMultiplier;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)finalize;
- (id)init;

@end
