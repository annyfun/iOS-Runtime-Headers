/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class <CNFRegRegionChooserDelegate>, NSArray, NSString, PSRootController, PSSpecifier, UISearchDisplayController, UIViewController<PSController>;

@interface CNFRegRegionChooserController : UITableViewController <CNFRegRegionChooserDelegate, PSController> {
    <CNFRegRegionChooserDelegate> *_delegate;
    NSArray *_filteredRegionList;
    UIViewController<PSController> *_parentController;
    NSArray *_regionList;
    PSRootController *_rootController;
    UISearchDisplayController *_sdc;
    NSString *_selectedRegionID;
    PSSpecifier *_specifier;
}

@property <CNFRegRegionChooserDelegate> *delegate;
@property(retain) NSArray *filteredRegionList;
@property(retain) NSArray *regionList;
@property(retain) UISearchDisplayController *sdc;
@property(retain) NSString *selectedRegionID;

- (void)_drillDownControllersWithArray:(id)arg1;
- (void)_selectRegionID:(id)arg1;
- (void)_selectRegionList:(id)arg1;
- (BOOL)canBeShownFromSuspendedState;
- (void)dealloc;
- (id)delegate;
- (void)didLock;
- (void)didUnlock;
- (void)didWake;
- (id)drillDownControllerList;
- (id)filteredRegionList;
- (void)handleURL:(id)arg1;
- (id)initWithRegionList:(id)arg1 selectedRegionID:(id)arg2;
- (id)initWithStyle:(NSInteger)arg1;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (id)parentController;
- (void)pushController:(id)arg1;
- (id)readPreferenceValue:(id)arg1;
- (void)regionChooser:(id)arg1 selectedRegionID:(id)arg2;
- (id)regionList;
- (id)rootController;
- (id)sdc;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (id)selectedRegionID;
- (void)setDelegate:(id)arg1;
- (void)setFilteredRegionList:(id)arg1;
- (void)setParentController:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)setRegionList:(id)arg1;
- (void)setRootController:(id)arg1;
- (void)setSdc:(id)arg1;
- (void)setSelectedRegionID:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (id)specifier;
- (void)statusBarWillAnimateByHeight:(float)arg1;
- (void)suspend;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)willUnlock;

@end
