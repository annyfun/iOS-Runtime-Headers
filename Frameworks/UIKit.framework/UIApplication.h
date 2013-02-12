/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIApplicationDelegate>, NSArray, NSMutableSet, NSTimer, UIEvent, UIStatusBar, UIStatusBarWindow;

@interface UIApplication : UIResponder <UIActionSheetDelegate> {
    struct { 
        unsigned int isActive : 1; 
        unsigned int isSuspended : 1; 
        unsigned int isSuspendedEventsOnly : 1; 
        unsigned int isLaunchedSuspended : 1; 
        unsigned int calledNonSuspendedLaunchDelegate : 1; 
        unsigned int isHandlingURL : 1; 
        unsigned int isHandlingRemoteNotification : 1; 
        unsigned int isHandlingLocalNotification : 1; 
        unsigned int statusBarShowsProgress : 1; 
        unsigned int statusBarRequestedStyle : 4; 
        unsigned int statusBarHidden : 1; 
        unsigned int blockInteractionEvents : 4; 
        unsigned int receivesMemoryWarnings : 1; 
        unsigned int showingProgress : 1; 
        unsigned int receivesPowerMessages : 1; 
        unsigned int launchEventReceived : 1; 
        unsigned int isAnimatingSuspensionOrResumption : 1; 
        unsigned int isResuming : 1; 
        unsigned int isSuspendedUnderLock : 1; 
        unsigned int isRunningInTaskSwitcher : 1; 
        unsigned int shouldExitAfterSendSuspend : 1; 
        unsigned int shouldExitAfterTaskCompletion : 1; 
        unsigned int terminating : 1; 
        unsigned int isHandlingShortCutURL : 1; 
        unsigned int idleTimerDisabled : 1; 
        unsigned int deviceOrientation : 3; 
        unsigned int delegateShouldBeReleasedUponSet : 1; 
        unsigned int delegateHandleOpenURL : 1; 
        unsigned int delegateOpenURL : 1; 
        unsigned int delegateDidReceiveMemoryWarning : 1; 
        unsigned int delegateWillTerminate : 1; 
        unsigned int delegateSignificantTimeChange : 1; 
        unsigned int delegateWillChangeInterfaceOrientation : 1; 
        unsigned int delegateDidChangeInterfaceOrientation : 1; 
        unsigned int delegateWillChangeStatusBarFrame : 1; 
        unsigned int delegateDidChangeStatusBarFrame : 1; 
        unsigned int delegateDeviceAccelerated : 1; 
        unsigned int delegateDeviceChangedOrientation : 1; 
        unsigned int delegateDidBecomeActive : 1; 
        unsigned int delegateWillResignActive : 1; 
        unsigned int delegateDidEnterBackground : 1; 
        unsigned int delegateWillEnterForeground : 1; 
        unsigned int delegateWillSuspend : 1; 
        unsigned int delegateDidResume : 1; 
        unsigned int userDefaultsSyncDisabled : 1; 
        unsigned int headsetButtonClickCount : 4; 
        unsigned int isHeadsetButtonDown : 1; 
        unsigned int isFastForwardActive : 1; 
        unsigned int isRewindActive : 1; 
        unsigned int disableViewGroupOpacity : 1; 
        unsigned int disableViewEdgeAntialiasing : 1; 
        unsigned int shakeToEdit : 1; 
        unsigned int isClassic : 1; 
        unsigned int zoomInClassicMode : 1; 
        unsigned int ignoreHeadsetClicks : 1; 
        unsigned int touchRotationDisabled : 1; 
        unsigned int taskSuspendingUnsupported : 1; 
        unsigned int isUnitTests : 1; 
        unsigned int requiresHighResolution : 1; 
        unsigned int disableViewContentScaling : 1; 
        unsigned int singleUseLaunchOrientation : 3; 
        unsigned int defaultInterfaceOrientation : 3; 
    } _applicationFlags;
    <UIApplicationDelegate> *_delegate;
    id _editAlertView;
    UIEvent *_event;
    NSMutableSet *_exclusiveTouchWindows;
    NSTimer *_hideNetworkActivityIndicatorTimer;
    UIEvent *_motionEvent;
    NSInteger _networkResourcesCurrentlyLoadingCount;
    UIEvent *_remoteControlEvent;
    NSInteger _remoteControlEventObservers;
    UIStatusBar *_statusBar;
    UIStatusBarWindow *_statusBarWindow;
    NSArray *_topLevelNibObjects;
    struct __CFDictionary { } *_touchMap;
    UIEvent *_touchesEvent;
}

@property <UIApplicationDelegate> *delegate;
@property(readonly) UIWindow *keyWindow;
@property(readonly) NSArray *windows;
@property NSInteger applicationIconBadgeNumber;
@property(readonly) NSInteger applicationState;
@property BOOL applicationSupportsShakeToEdit;
@property(readonly) double backgroundTimeRemaining;
@property(getter=isIdleTimerDisabled) BOOL idleTimerDisabled;
@property(getter=isNetworkActivityIndicatorVisible) BOOL networkActivityIndicatorVisible;
@property(getter=isProtectedDataAvailable,readonly) BOOL protectedDataAvailable;
@property(getter=isProximitySensingEnabled) BOOL proximitySensingEnabled;
@property(readonly) CGRect statusBarFrame;
@property(getter=isStatusBarHidden) BOOL statusBarHidden;
@property NSInteger statusBarOrientation;
@property(readonly) double statusBarOrientationAnimationDuration;
@property NSInteger statusBarStyle;

+ (void)_initializeSafeCategory;
+ (void)_startWindowServerIfNecessary;
+ (NSInteger)interfaceOrientationForString:(id)arg1;
+ (BOOL)isRunningEventPump;
+ (BOOL)isRunningInStoreDemoMode;
+ (BOOL)registerForSystemEvents;
+ (BOOL)rendersLocally;
+ (id)sharedApplication;
+ (BOOL)shouldMakeUIForDefaultPNG;
+ (NSInteger)statusBarStyleForString:(id)arg1;
+ (id)stringForInterfaceOrientation:(NSInteger)arg1;
+ (id)stringForStatusBarStyle:(NSInteger)arg1;

- (BOOL)_accessibilityAllowsNotificationsDuringSuspension;
- (NSInteger)_accessibilityApplicationForPosition:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_accessibilityApplicationIsSystemWideServer;
- (id)_accessibilityBundleIdentifier;
- (Class)_accessibilityBundlePrincipalClass;
- (BOOL)_accessibilityCaptureSimulatorEvent:(struct __GSEvent { }*)arg1;
- (id)_accessibilityElementFirst:(BOOL)arg1 last:(BOOL)arg2;
- (BOOL)_accessibilityEscape;
- (id)_accessibilityFirstElement;
- (BOOL)_accessibilityHardwareKeyboardActive;
- (void)_accessibilityInit;
- (void)_accessibilityInitialize;
- (BOOL)_accessibilityIsSystemWideServer;
- (BOOL)_accessibilityIsSystemWideServer;
- (void)_accessibilityKeyboardDidHide:(id)arg1;
- (void)_accessibilityKeyboardDidShow:(id)arg1;
- (id)_accessibilityLastElement;
- (id)_accessibilityMainWindow;
- (id)_accessibilityNextElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (id)_accessibilityResponderElement;
- (id)_accessibilitySettingsBundle;
- (BOOL)_accessibilitySettingsLoaderPresent;
- (BOOL)_accessibilitySoftwareKeyboardActive;
- (void)_accessibilityStatusChanged:(id)arg1;
- (id)_accessibilitySummaryElement;
- (id)_accessibilityTitleBarElement;
- (id)_accessibilityTypingCandidates;
- (id)_accessibilityUIWindowFindWithGlobalPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_accessibilityUserTestingChildren;
- (void)_addRecorder:(id)arg1;
- (void)_alertSheetStackChanged;
- (BOOL)_alertWindowShouldRotate;
- (void)_applicationOpenURL:(id)arg1 event:(struct __GSEvent { }*)arg2;
- (void)_applicationOpenURL:(id)arg1 payload:(id)arg2;
- (id)_backgroundModes;
- (void)_beginShowingNetworkActivityIndicator;
- (void)_callApplicationResumeHandlersForURL:(id)arg1 payload:(id)arg2;
- (void)_callInitializationDelegatesForURL:(id)arg1 payload:(id)arg2 suspended:(BOOL)arg3;
- (BOOL)_canOpenURL:(id)arg1 publicURLsOnly:(BOOL)arg2;
- (void)_cancelAllTouches;
- (void)_cancelCurrentTouchEvent;
- (void)_cancelEvent:(id)arg1 forWindow:(id)arg2;
- (void)_cancelEvent:(id)arg1;
- (void)_cancelGestureRecognizers:(id)arg1;
- (void)_cancelGestureRecognizersForView:(id)arg1;
- (void)_cancelTouches:(id)arg1 withEvent:(id)arg2 sendingTouchesCancelled:(BOOL)arg3 includingGestures:(BOOL)arg4;
- (void)_clearTouchesForView:(id)arg1;
- (id)_createCurrentSnapshot;
- (struct CGImage { }*)_createDefaultImageSnapshot;
- (void)_createStatusBarWithRequestedStyle:(NSInteger)arg1 orientation:(NSInteger)arg2 hidden:(BOOL)arg3;
- (NSInteger)_currentExpectedInterfaceOrientation;
- (id)_currentTests;
- (void)_dumpScreenContents:(struct __GSEvent { }*)arg1;
- (void)_dumpUIHierarchy:(struct __GSEvent { }*)arg1;
- (void)_endShowingNetworkActivityIndicator;
- (id)_event;
- (id)_exclusiveTouchWindows;
- (BOOL)_executableWasLinkedWithUIKit;
- (id)_extendLaunchTest;
- (void)_fetchInfoPlistFlags;
- (id)_findContainerAccessibleElement:(id)arg1 first:(BOOL)arg2;
- (id)_firstStatusBarElement;
- (NSInteger)_frontMostAppOrientation;
- (NSUInteger)_frontmostApplicationPort;
- (NSInteger)_getSpringBoardOrientation;
- (void*)_getSymbol:(id)arg1 forFramework:(id)arg2;
- (void)_handleAccessoryKeyStateChanged:(struct __GSEvent { }*)arg1;
- (void)_handleApplicationResumeEvent:(struct __GSEvent { }*)arg1;
- (void)_handleApplicationSuspend:(struct __GSEvent { }*)arg1 eventInfo:(void*)arg2;
- (void)_handleHeadsetButtonClick;
- (void)_handleHeadsetButtonDoubleClick;
- (void)_handleHeadsetButtonDown:(struct __GSEvent { }*)arg1;
- (void)_handleHeadsetButtonTripleClick;
- (void)_handleHeadsetButtonUp:(struct __GSEvent { }*)arg1;
- (void)_handleKeyEvent:(struct __GSEvent { }*)arg1;
- (void)_handleUserDefaultsDidChange:(id)arg1;
- (void)_hideNetworkActivityIndicator;
- (void)_installAutoreleasePoolsIfNecessaryForMode:(struct __CFString { }*)arg1;
- (BOOL)_isActivated;
- (BOOL)_isClassic;
- (BOOL)_isInteractionEvent:(struct __GSEvent { }*)arg1;
- (BOOL)_isLaunchedSuspended;
- (BOOL)_isMotionEvent:(struct __GSEvent { }*)arg1;
- (BOOL)_isResuming;
- (BOOL)_isTouchEvent:(struct __GSEvent { }*)arg1;
- (BOOL)_isTrackingAnyTouch;
- (BOOL)_isViewContentScalingDisabled;
- (BOOL)_isViewEdgeAntialiasingDisabled;
- (BOOL)_isViewGroupOpacityDisabled;
- (BOOL)_isWindowServerHostingManaged;
- (id)_lastStatusBarElement;
- (id)_launchTestName;
- (void)_leak;
- (void)_loadMainNibFile;
- (id)_localCachesDirectory;
- (void)_mapkit_refreshSharedAddressBookIfNeeded;
- (void)_mapkit_resetSharedAddressBookNeedsRefresh;
- (void*)_mapkit_sharedAddressBook;
- (id)_motionEvent;
- (void)_noteAnimationFinished:(id)arg1;
- (void)_noteAnimationStarted:(id)arg1;
- (void)_notifyDidChangeStatusBarFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_notifySpringBoardOfStatusBarOrientationChangeAndFenceWithAnimationDuration:(double)arg1;
- (void)_notifyWillChangeStatusBarFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_pathForFrameworkName:(id)arg1 inPrivate:(BOOL)arg2;
- (void)_performMemoryWarning;
- (void)_playbackEvents:(id)arg1 atPlaybackRate:(float)arg2 messageWhenDone:(id)arg3 withSelector:(SEL)arg4;
- (void)_playbackTimerCallback:(id)arg1;
- (void)_postSimpleRemoteNotificationForAction:(NSInteger)arg1 andContext:(NSInteger)arg2;
- (void)_processScriptEvent:(struct __GSEvent { }*)arg1;
- (void)_purgeSharedInstances;
- (struct __CFMessagePort { }*)_purplePPTServerPort;
- (void)_receivedMemoryNotification;
- (void)_registerForAlertItemStateChangeNotification;
- (void)_registerForKeyBagLockStatusNotification;
- (void)_registerForLanguageChangedNotification;
- (void)_registerForLocaleChangedNotification;
- (void)_registerForLocaleWillChangeNotification;
- (void)_registerForSignificantTimeChangeNotification;
- (void)_registerForUserDefaultsChanges;
- (id)_remoteControlEvent;
- (void)_removeRecorder:(id)arg1;
- (void)_removeSnapshotImage;
- (void)_reportAppLaunchFinished;
- (void)_reportResults:(id)arg1;
- (BOOL)_requiresHighResolution;
- (BOOL)_rotationDisabledDuringTouch;
- (void)_run;
- (void)_runWithURL:(id)arg1 payload:(id)arg2 launchOrientation:(NSInteger)arg3 statusBarStyle:(NSInteger)arg4 statusBarHidden:(BOOL)arg5;
- (BOOL)_saveSnapshotToPath:(id)arg1;
- (void)_sendMotionBegan:(NSInteger)arg1;
- (void)_sendMotionCancelled:(NSInteger)arg1;
- (void)_sendMotionEnded:(NSInteger)arg1;
- (void)_sendOrderedOutContexts;
- (void)_sendRemoteControlEvent:(NSInteger)arg1;
- (void)_setActivated:(BOOL)arg1;
- (void)_setDelegate:(id)arg1 assumeOwnership:(BOOL)arg2;
- (void)_setHandlingURL:(BOOL)arg1 url:(id)arg2;
- (void)_setIgnoreHeadsetClicks:(BOOL)arg1;
- (void)_setIsClassic:(BOOL)arg1;
- (void)_setRotationDisabledDuringTouch:(BOOL)arg1;
- (void)_setShouldZoom:(BOOL)arg1;
- (void)_setStatusBarMode:(NSInteger)arg1;
- (void)_setStatusBarShowsProgress:(BOOL)arg1;
- (void)_setSuspended:(BOOL)arg1;
- (void)_setSuspendedEventsOnly:(BOOL)arg1;
- (void)_setSuspendedUnderLock:(BOOL)arg1;
- (void)_setTouchMap:(struct __CFDictionary { }*)arg1;
- (void)_setUserDefaultsSyncEnabled:(BOOL)arg1;
- (void)_sheetWithRemoteIdentifierDidDismiss:(id)arg1;
- (BOOL)_shouldHandleTestURL:(id)arg1;
- (BOOL)_shouldIgnoreHeadsetClicks;
- (BOOL)_shouldUseDefaultFirstResponder;
- (BOOL)_shouldUseKeyWindowStack;
- (BOOL)_shouldUseNextFirstResponder;
- (BOOL)_shouldZoom;
- (void)_showEditAlertView;
- (void)_startPlaybackTimer;
- (void)_stopPlayback;
- (BOOL)_supportsShakesWhenNotActive;
- (void)_terminateWithStatus:(NSInteger)arg1;
- (struct __CFDictionary { }*)_touchMap;
- (id)_touchesEvent;
- (void)_unregisterForLanguageChangedNotification;
- (void)_unregisterForLocaleChangedNotification;
- (void)_unregisterForSignificantTimeChangeNotification;
- (void)_unregisterForTimeChangedNotification;
- (void)_unregisterForUserDefaultsChanges;
- (void)_updateAccessibilityItunesSettings;
- (void)_updateAccessibilitySettingsLoader;
- (void)_updateApplicationAccessibility;
- (BOOL)_updateDefaultImage;
- (void)_updateLargeTextNotification;
- (void)_updateOrientation;
- (BOOL)_usesEmoji;
- (BOOL)_usesPreMTAlertBehavior;
- (NSInteger)_validateStatusBarStyle:(NSInteger)arg1;
- (void)_wakeTimerFired;
- (void)_writeApplicationDefaultPNGSnapshot;
- (void)acceleratedInX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (id)accessibilityAttributeValue:(NSInteger)arg1;
- (void)accessibilityDisable;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;
- (void)accessibilityStartStopToggle;
- (void)accessoryKeyStateChanged:(struct __GSEvent { }*)arg1;
- (NSInteger)activeInterfaceOrientation;
- (void)addStatusBarImageNamed:(id)arg1 removeOnExit:(BOOL)arg2;
- (void)addStatusBarImageNamed:(id)arg1;
- (void)addStatusBarItem:(NSInteger)arg1 removeOnExit:(BOOL)arg2;
- (void)addStatusBarItem:(NSInteger)arg1;
- (void)addStatusBarStyleOverrides:(NSInteger)arg1;
- (void)addWebClipToHomeScreen:(id)arg1;
- (NSInteger)alertOrientation;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)anotherApplicationFinishedLaunching:(struct __GSEvent { }*)arg1;
- (void)applicationDidBeginSuspendAnimation;
- (void)applicationDidEndResumeAnimation;
- (void)applicationDidOrderOutContext:(NSUInteger)arg1;
- (void)applicationDidResume;
- (void)applicationDidResumeForEventsOnly;
- (void)applicationDidResumeFromUnderLock;
- (void)applicationExited:(struct __GSEvent { }*)arg1;
- (NSInteger)applicationIconBadgeNumber;
- (void)applicationOpenToShortCut:(id)arg1;
- (void)applicationOpenURL:(id)arg1;
- (void)applicationResume:(struct __GSEvent { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })applicationSnapshotRectForOrientation:(NSInteger)arg1;
- (NSInteger)applicationState;
- (BOOL)applicationSupportsShakeToEdit;
- (void)applicationSuspend:(struct __GSEvent { }*)arg1;
- (void)applicationSuspended:(struct __GSEvent { }*)arg1;
- (void)applicationSuspendedSettingsUpdated:(struct __GSEvent { }*)arg1;
- (void)applicationWillOrderInContext:(NSUInteger)arg1 windowLevel:(float)arg2 windowOutput:(NSInteger)arg3;
- (void)applicationWillSuspend;
- (void)applicationWillSuspendForEventsOnly;
- (void)applicationWillSuspendUnderLock;
- (void)applicationWillTerminate;
- (double)backgroundTimeRemaining;
- (float)backlightLevel;
- (void)batteryStatusDidChange:(id)arg1;
- (NSUInteger)beginBackgroundTaskWithExpirationHandler:(id)arg1;
- (void)beginIgnoringInteractionEvents;
- (void)beginPPTWithName:(id)arg1;
- (void)beginReceivingRemoteControlEvents;
- (void)beginRemoteSheet:(id)arg1 delegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void*)arg4 requireTopApplication:(BOOL)arg5 opaque:(BOOL)arg6 presentAnimated:(BOOL)arg7;
- (void)beginRemoteSheet:(id)arg1 delegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void*)arg4 requireTopApplication:(BOOL)arg5 presentAnimated:(BOOL)arg6;
- (void)beginRemoteSheet:(id)arg1 delegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void*)arg4 requireTopApplication:(BOOL)arg5;
- (void)beginRemoteSheet:(id)arg1 delegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void*)arg4;
- (NSUInteger)blockInteractionEventsCount;
- (BOOL)canOpenURL:(id)arg1;
- (BOOL)canShowAlerts;
- (void)cancelAllLocalNotifications;
- (void)cancelLocalNotification:(id)arg1;
- (void)clearKeepAliveTimeout;
- (void)dealloc;
- (id)defaultFirstResponder;
- (double)defaultImageSnapshotExpiration;
- (id)delegate;
- (void)didDismissMiniAlert;
- (void)didReceiveMemoryWarning;
- (void)didReceiveUrgentMemoryWarningSuspendedAndWillTerminate;
- (id)displayIDForURLScheme:(id)arg1 isPublic:(BOOL)arg2;
- (id)displayIdentifier;
- (NSInteger)doubleHeightMode;
- (void)enableFramebufferStatisticsGathering;
- (NSInteger)enabledRemoteNotificationTypes;
- (void)endBackgroundTask:(NSUInteger)arg1;
- (void)endCurrentPPT;
- (void)endIgnoringInteractionEvents;
- (void)endReceivingRemoteControlEvents;
- (void)endRemoteSheet:(id)arg1 returnCode:(NSInteger)arg2 dismissAnimated:(BOOL)arg3;
- (void)endRemoteSheet:(id)arg1 returnCode:(NSInteger)arg2;
- (void)endRemoteSheet:(id)arg1;
- (void)failedTest:(id)arg1;
- (void)finishedSubTest:(id)arg1 forTest:(id)arg2;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2;
- (void)finishedTest:(id)arg1;
- (BOOL)firstLaunchAfterBoot;
- (BOOL)handleDoubleHeightStatusBarTap:(NSInteger)arg1;
- (BOOL)handleEvent:(struct __GSEvent { }*)arg1 withNewEvent:(id)arg2;
- (BOOL)handleEvent:(struct __GSEvent { }*)arg1;
- (void)handleKeyEvent:(struct __GSEvent { }*)arg1;
- (BOOL)handleTestURL:(id)arg1;
- (void)headsetAvailabilityChanged:(struct __GSEvent { }*)arg1;
- (void)headsetButtonDown:(struct __GSEvent { }*)arg1;
- (void)headsetButtonUp:(struct __GSEvent { }*)arg1;
- (BOOL)homeScreenCanAddIcons;
- (BOOL)ignoresInteractionEvents;
- (id)init;
- (NSInteger)interfaceOrientation;
- (BOOL)isAnimatingSuspensionOrResumption;
- (BOOL)isHandlingOpenShortCut;
- (BOOL)isHandlingURL;
- (BOOL)isIdleTimerDisabled;
- (BOOL)isIgnoringInteractionEvents;
- (BOOL)isLocked;
- (BOOL)isNetworkActivityIndicatorVisible;
- (BOOL)isPasscodeRequiredToUnlock;
- (BOOL)isProtectedDataAvailable;
- (BOOL)isProximitySensingEnabled;
- (BOOL)isRunningInTaskSwitcher;
- (BOOL)isRunningQuitTest;
- (BOOL)isRunningSuspendTest;
- (BOOL)isRunningTest:(id)arg1;
- (BOOL)isRunningTest;
- (BOOL)isStatusBarHidden;
- (BOOL)isSuspended;
- (BOOL)isSuspendedEventsOnly;
- (BOOL)isSuspendedForAnyReason;
- (BOOL)isSuspendedUnderLock;
- (id)keyWindow;
- (BOOL)launchApplicationWithIdentifier:(id)arg1 suspended:(BOOL)arg2;
- (BOOL)launchedToTest;
- (void)lockButtonDown:(struct __GSEvent { }*)arg1;
- (void)lockButtonUp:(struct __GSEvent { }*)arg1;
- (void)lockDevice:(struct __GSEvent { }*)arg1;
- (void)mediaKeyDown:(struct __GSEvent { }*)arg1;
- (void)mediaKeyUp:(struct __GSEvent { }*)arg1;
- (void)menuButtonDown:(struct __GSEvent { }*)arg1;
- (void)menuButtonUp:(struct __GSEvent { }*)arg1;
- (void)motionEnded:(NSInteger)arg1 withEvent:(id)arg2;
- (id)nameOfDefaultImageToUpdateAtSuspension;
- (void)openStoreURL:(id)arg1 forContext:(id)arg2;
- (BOOL)openURL:(id)arg1;
- (NSInteger)orientation;
- (id)pathToDefaultImageNamed:(id)arg1;
- (void)performDisablingStatusBarStyleValidation:(id)arg1;
- (void)popRunLoopMode:(id)arg1;
- (void)prepareForDefaultImageSnapshot;
- (void)presentLocalNotificationNow:(id)arg1;
- (void)proximityStateChanged:(BOOL)arg1;
- (void)pushRunLoopMode:(id)arg1;
- (void)quitTopApplication:(struct __GSEvent { }*)arg1;
- (void)registerForRemoteNotificationTypes:(NSInteger)arg1;
- (void)removeDefaultImage:(id)arg1;
- (void)removeStatusBarImageNamed:(id)arg1;
- (void)removeStatusBarItem:(NSInteger)arg1;
- (void)removeStatusBarStyleOverrides:(NSInteger)arg1;
- (BOOL)reportApplicationSuspended;
- (void)requestDeviceUnlock;
- (void)resetIdleTimerAndUndim;
- (id)resultsForTest:(id)arg1;
- (void)ringerChanged:(NSInteger)arg1;
- (id)roleID;
- (BOOL)rotateIfNeeded:(NSInteger)arg1;
- (void)runModal:(id)arg1;
- (void)runTest:(id)arg1 forAnimation:(id)arg2;
- (BOOL)runTest:(id)arg1 options:(id)arg2;
- (void)runTest:(id)arg1 startingBeforeAnimation:(id)arg2 stoppingAfterAnimation:(id)arg3;
- (void)scheduleLocalNotification:(id)arg1;
- (id)scheduledLocalNotifications;
- (void)sendAction:(SEL)arg1 fromSender:(id)arg2 toTarget:(id)arg3 forEvent:(struct __GSEvent { }*)arg4;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
- (BOOL)sendAction:(SEL)arg1 toTarget:(id)arg2 fromSender:(id)arg3 forEvent:(id)arg4;
- (void)sendEvent:(id)arg1;
- (void)setApplicationBadgeString:(id)arg1;
- (void)setApplicationIconBadgeNumber:(NSInteger)arg1;
- (void)setApplicationSupportsShakeToEdit:(BOOL)arg1;
- (void)setBacklightLevel:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceOrientation:(NSInteger)arg1;
- (void)setDoubleHeightMode:(NSInteger)arg1 glowAnimationEnabled:(BOOL)arg2;
- (void)setDoubleHeightMode:(NSInteger)arg1;
- (void)setDoubleHeightPrefixText:(id)arg1;
- (void)setDoubleHeightStatusText:(id)arg1 forStyle:(NSInteger)arg2;
- (void)setDoubleHeightStatusText:(id)arg1;
- (void)setExpectsFaceContact:(BOOL)arg1;
- (void)setGlowAnimationEnabled:(BOOL)arg1 forStyle:(NSInteger)arg2;
- (void)setHardwareKeyboardLayoutName:(id)arg1;
- (void)setHardwareVolumeControlEnabled:(BOOL)arg1;
- (void)setHasMiniAlerts:(BOOL)arg1;
- (void)setIdleTimerDisabled:(BOOL)arg1;
- (void)setIgnoresInteractionEvents:(BOOL)arg1;
- (BOOL)setKeepAliveTimeout:(double)arg1 handler:(id)arg2;
- (void)setNetworkActivityIndicatorVisible:(BOOL)arg1;
- (void)setProximitySensingEnabled:(BOOL)arg1;
- (void)setProximitySensorEnabled:(BOOL)arg1;
- (void)setReceivesMemoryWarnings:(BOOL)arg1;
- (void)setRunningInTaskSwitcher:(BOOL)arg1;
- (void)setScheduledLocalNotifications:(id)arg1;
- (void)setSimpleRemoteRoutingPriority:(NSUInteger)arg1;
- (void)setStatusBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setStatusBarHidden:(BOOL)arg1 animationParameters:(id)arg2 changeApplicationFlag:(BOOL)arg3;
- (void)setStatusBarHidden:(BOOL)arg1 animationParameters:(id)arg2;
- (void)setStatusBarHidden:(BOOL)arg1 duration:(double)arg2 changeApplicationFlag:(BOOL)arg3;
- (void)setStatusBarHidden:(BOOL)arg1 duration:(double)arg2;
- (void)setStatusBarHidden:(BOOL)arg1 withAnimation:(NSInteger)arg2;
- (void)setStatusBarHidden:(BOOL)arg1;
- (void)setStatusBarMode:(NSInteger)arg1 duration:(float)arg2;
- (void)setStatusBarMode:(NSInteger)arg1 orientation:(NSInteger)arg2 duration:(float)arg3 fenceID:(NSInteger)arg4 animation:(NSInteger)arg5 startTime:(double)arg6;
- (void)setStatusBarMode:(NSInteger)arg1 orientation:(NSInteger)arg2 duration:(float)arg3 fenceID:(NSInteger)arg4 animation:(NSInteger)arg5;
- (void)setStatusBarMode:(NSInteger)arg1 orientation:(NSInteger)arg2 duration:(float)arg3 fenceID:(NSInteger)arg4;
- (void)setStatusBarMode:(NSInteger)arg1 orientation:(NSInteger)arg2 duration:(float)arg3;
- (void)setStatusBarOrientation:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)setStatusBarOrientation:(NSInteger)arg1 animation:(NSInteger)arg2 duration:(double)arg3;
- (void)setStatusBarOrientation:(NSInteger)arg1 animationParameters:(id)arg2;
- (void)setStatusBarOrientation:(NSInteger)arg1;
- (void)setStatusBarShowsProgress:(BOOL)arg1;
- (void)setStatusBarStyle:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)setStatusBarStyle:(NSInteger)arg1 animation:(NSInteger)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(NSInteger)arg5;
- (void)setStatusBarStyle:(NSInteger)arg1 animation:(NSInteger)arg2;
- (void)setStatusBarStyle:(NSInteger)arg1 animationParameters:(id)arg2;
- (void)setStatusBarStyle:(NSInteger)arg1 duration:(double)arg2;
- (void)setStatusBarStyle:(NSInteger)arg1;
- (void)setSuspensionAnimationDelay:(double)arg1;
- (void)setSystemVolumeHUDEnabled:(BOOL)arg1 forAudioCategory:(id)arg2;
- (void)setSystemVolumeHUDEnabled:(BOOL)arg1;
- (void)setUsesBackgroundNetwork:(BOOL)arg1;
- (BOOL)shouldFenceStatusBarRotation;
- (BOOL)shouldLaunchSafe;
- (void)showNetworkPromptsIfNecessary:(BOOL)arg1;
- (void)showTTYPromptForNumber:(id)arg1 withID:(NSInteger)arg2;
- (void)significantTimeChange;
- (NSUInteger)simpleRemoteRoutingPriority;
- (void)startCHUDRecording:(id)arg1;
- (void)startLeaking;
- (void)startedSubTest:(id)arg1 forTest:(id)arg2;
- (void)startedTest:(id)arg1;
- (void)statusBar:(id)arg1 didAnimateFromHeight:(float)arg2 toHeight:(float)arg3 animation:(NSInteger)arg4;
- (NSInteger)statusBar:(id)arg1 styleForRequestedStyle:(NSInteger)arg2 overrides:(NSInteger)arg3;
- (void)statusBar:(id)arg1 willAnimateFromHeight:(float)arg2 toHeight:(float)arg3 duration:(double)arg4 animation:(NSInteger)arg5;
- (id)statusBar;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })statusBarFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })statusBarFrameForOrientation:(NSInteger)arg1;
- (float)statusBarHeight;
- (float)statusBarHeightForOrientation:(NSInteger)arg1 ignoreHidden:(BOOL)arg2;
- (float)statusBarHeightForOrientation:(NSInteger)arg1;
- (NSInteger)statusBarMode;
- (void)statusBarMouseDown:(struct __GSEvent { }*)arg1;
- (void)statusBarMouseUp:(struct __GSEvent { }*)arg1;
- (NSInteger)statusBarOrientation;
- (double)statusBarOrientationAnimationDuration;
- (void)statusBarReturnActionTap:(struct __GSEvent { }*)arg1;
- (NSInteger)statusBarStyle;
- (id)statusBarWindow;
- (void)stopCHUDRecording;
- (void)stopLeaking;
- (void)stopModal;
- (void)suspend;
- (void)suspendReturningToLastApp:(BOOL)arg1;
- (void)terminateWithSuccess;
- (void)testPrep:(id)arg1 options:(id)arg2;
- (void)unregisterForRemoteNotifications;
- (void)updateSuspendedSettings:(id)arg1;
- (id)userCachesDirectory;
- (void)userDefaultsDidChange:(id)arg1;
- (id)userHomeDirectory;
- (id)userLibraryDirectory;
- (BOOL)usesBackgroundNetwork;
- (void)vibrateForDuration:(NSInteger)arg1;
- (void)volumeChanged:(struct __GSEvent { }*)arg1;
- (void)willDismissMiniAlert:(NSInteger*)arg1 andShowAnother:(BOOL)arg2;
- (void)willDisplayMiniAlert:(NSInteger*)arg1;
- (double)windowRotationDuration;
- (id)windows;

@end
