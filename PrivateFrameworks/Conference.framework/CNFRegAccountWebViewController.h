/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class NSTimer;

@interface CNFRegAccountWebViewController : CNFRegServerWebViewController <UIAlertViewDelegate> {
    NSTimer *_bagLoadTimer;
    BOOL _failedBagLoad;
    BOOL _listeningForBagLoad;
}

@property BOOL failedBagLoad;

- (void)_bagLoadTimeout:(id)arg1;
- (void)_handleFTServerBagFinishedLoading;
- (BOOL)_loadURLFromBag;
- (void)_reload;
- (void)_reloadDelayed;
- (void)_showGenericErrorWithHandler:(id)arg1;
- (void)_showURLDidNotLoadAlert;
- (void)_startBagLoadTimer;
- (void)_startListeningForBagLoad;
- (void)_stopBagLoadTimer;
- (void)_stopCurrentReload;
- (void)_stopListeningForBagLoad;
- (id)authIdHeaderValue;
- (id)authTokenHeaderValue;
- (id)bagKey;
- (void)cancelTapped;
- (void)dealloc;
- (void)doHandoffWithStatus:(NSInteger)arg1 appleId:(id)arg2 password:(id)arg3;
- (BOOL)failedBagLoad;
- (void)handleLeftButtonError:(id)arg1;
- (void)handleRightButtonError:(id)arg1;
- (id)init;
- (void)loadView;
- (id)logName;
- (void)parseHandoffUrl:(id)arg1;
- (void)setFailedBagLoad:(BOOL)arg1;
- (void)setHeadersForRequest:(id)arg1;
- (void)setupUrlHandlers;
- (BOOL)shouldSetHeadersForRequest:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end
