/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class <GKLeaderboardViewControllerDelegate>, <GKLeaderboardViewControllerPrivateDelegate>, GKGame, GKLeaderboardViewController, GKPlayer, GKSparseLeaderboard, GKTableViewCell, GKUITheme, NSMutableDictionary, NSString, UISegmentedControl, UIView;

@interface GKLeaderboardViewControllerPrivate : GKTableViewController <GKRibbonSegmentedControlDelegate> {
    struct { 
        unsigned int allowFriendSelection : 1; 
        unsigned int translucentNavBar : 1; 
        unsigned int reserved : 26; 
    NSString *_categoryID;
    GKLeaderboardViewController *_controllerForDelegate;
    <GKLeaderboardViewControllerPrivateDelegate> *_delegate;
    GKTableViewCell *_detailHeaderCell;
    } _flags;
    GKSparseLeaderboard *_friendLeaderboard;
    GKGame *_game;
    GKSparseLeaderboard *_globalLeaderboard;
    BOOL _isInFormSheet;
    UISegmentedControl *_landscapeTimeScopeControl;
    NSMutableDictionary *_leaderboardCache;
    <GKLeaderboardViewControllerDelegate> *_leaderboardDelegate;
    NSInteger _navbarStyle;
    GKPlayer *_player;
    NSMutableDictionary *_players;
    UISegmentedControl *_portraitTimeScopeControl;
    GKUITheme *_theme;
    NSInteger _timeScope;
    UIView *_timeScopeContainer;
}

@property(retain) NSString *categoryID;
@property GKLeaderboardViewController *controllerForDelegate;
@property <GKLeaderboardViewControllerPrivateDelegate> *delegate;
@property(retain) GKTableViewCell *detailHeaderCell;
@property(retain) GKSparseLeaderboard *friendLeaderboard;
@property(retain) GKGame *game;
@property(retain) GKSparseLeaderboard *globalLeaderboard;
@property <GKLeaderboardViewControllerDelegate> *leaderboardDelegate;
@property(retain) GKPlayer *player;
@property(retain) NSMutableDictionary *players;
@property(retain) GKUITheme *theme;
@property(retain) UIView *timeScopeContainer;
@property BOOL allowsFriendSelection;
@property BOOL isInFormSheet;
@property NSInteger navbarStyle;
@property NSInteger timeScope;

- (void)_gkRefreshContents;
- (void)_loadScoresForLeaderboard:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)_reloadScores;
- (void)_reloadSection:(NSUInteger)arg1 forVisibleRows:(id)arg2;
- (void)_timeFilterChanged:(NSUInteger)arg1;
- (void)_timeFilterSegmentedControlChanged:(id)arg1;
- (BOOL)allowsFriendSelection;
- (void)authenticatedStatusChanged;
- (BOOL)canSelectPlayer:(id)arg1;
- (id)categoryID;
- (id)controllerForDelegate;
- (void)dealloc;
- (id)delegate;
- (id)detailHeaderCell;
- (void)donePressed:(id)arg1;
- (id)friendLeaderboard;
- (id)game;
- (id)globalLeaderboard;
- (id)headerTextForLeaderboard:(id)arg1;
- (id)indexPathsForLeaderboardRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 inSection:(NSUInteger)arg2;
- (id)initWithGame:(id)arg1;
- (BOOL)isInFormSheet;
- (void)layoutSubviewsForOrientation:(NSInteger)arg1;
- (id)leaderboardDelegate;
- (id)leaderboardForCategoryID:(id)arg1 timeScope:(NSInteger)arg2 playerScope:(NSInteger)arg3;
- (id)leaderboardForSection:(NSUInteger)arg1;
- (void)loadPlayersForScores:(id)arg1 withCompletionHandler:(id)arg2;
- (void)loadView;
- (float)marginForTableView:(id)arg1;
- (NSInteger)navbarStyle;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (void)playTapped;
- (id)player;
- (id)playerForScore:(id)arg1;
- (id)players;
- (void)ribbonSegmentedControlChanged:(id)arg1;
- (void)setAllowsFriendSelection:(BOOL)arg1;
- (void)setCategoryID:(id)arg1 timeScope:(NSInteger)arg2;
- (void)setCategoryID:(id)arg1;
- (void)setControllerForDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailHeaderCell:(id)arg1;
- (void)setFriendLeaderboard:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setGlobalLeaderboard:(id)arg1;
- (void)setIsInFormSheet:(BOOL)arg1;
- (void)setLeaderboardDelegate:(id)arg1;
- (void)setNavbarStyle:(NSInteger)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayers:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setTimeScope:(NSInteger)arg1;
- (void)setTimeScopeContainer:(id)arg1;
- (void)setupTableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(NSInteger)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(NSInteger)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(NSInteger)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)theme;
- (NSInteger)timeScope;
- (id)timeScopeContainer;
- (void)updateNavbarButtons;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end
