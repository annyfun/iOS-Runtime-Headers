/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMyMusicViewController : SKUIScrollingSegmentedController <MusicClientContextConsuming, SKUIProxyScrollViewDelegate, SKUITabBarItemRootViewController> {
    SKUIProxyScrollView * _proxyScrollView;
    MusicLibraryTopBarController * _topBarController;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didChangeLibrary:(id)arg1;
- (void)_updatePrompt;
- (id)contentScrollView;
- (void)dealloc;
- (id)initWithTabBarItem:(id)arg1;
- (BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end