/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMPeopleListItem, NSDictionary, NSMutableArray, NSRecursiveLock, NSString;

@interface IMPeopleListGroup : NSObject {
    BOOL _expanded;
    IMPeopleListItem *_item;
    NSString *_localizableName;
    NSRecursiveLock *_lock;
    NSInteger _maxMembers;
    NSMutableArray *_members;
    NSString *_name;
    NSDictionary *_properties;
    BOOL _supportsAdding;
    BOOL _supportsMemberReordering;
    BOOL _supportsOfflineMembers;
    BOOL _supportsRemoving;
    BOOL _supportsRename;
    BOOL _supportsReordering;
}

@property BOOL isExpanded; /* unknown property attribute: SsetExpanded: */
@property(retain,readonly) NSString *displayName;
@property(retain) NSString *localizableName;
@property(retain) NSArray *members;
@property(retain) NSString *name;
@property(retain) IMPeopleListItem *peopleListItem;
@property(retain) NSDictionary *properties;
@property(retain,readonly) NSArray *visibleMembers;
@property(readonly) NSInteger actualNumberOfOnlineItems;
@property NSInteger maxMembers;
@property(readonly) NSInteger numberOfItems;
@property(readonly) NSInteger numberOfOnlineItems;
@property BOOL supportsAdding;
@property BOOL supportsMemberReordering;
@property BOOL supportsOfflineMembers;
@property BOOL supportsRemoving;
@property BOOL supportsRename;
@property BOOL supportsReordering;

- (NSInteger)actualNumberOfOnlineItems;
- (void)addPeopleListItem:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; })filterForIMHandle:(id)arg1;
- (id)init;
- (BOOL)isExpanded;
- (id)localizableName;
- (NSInteger)maxMembers;
- (id)members;
- (id)name;
- (NSInteger)numberOfItems;
- (NSInteger)numberOfOnlineItems;
- (id)peopleListItem;
- (id)properties;
- (void)removeAllItems;
- (void)removePeopleListItem:(id)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)setLocalizableName:(id)arg1;
- (void)setMaxMembers:(NSInteger)arg1;
- (void)setMembers:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPeopleListItem:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setSupportsAdding:(BOOL)arg1;
- (void)setSupportsMemberReordering:(BOOL)arg1;
- (void)setSupportsOfflineMembers:(BOOL)arg1;
- (void)setSupportsRemoving:(BOOL)arg1;
- (void)setSupportsRename:(BOOL)arg1;
- (void)setSupportsReordering:(BOOL)arg1;
- (BOOL)shouldConsumeIMHandle:(id)arg1;
- (BOOL)shouldContainIMHandle:(id)arg1;
- (BOOL)supportsAdding;
- (BOOL)supportsMemberReordering;
- (BOOL)supportsOfflineMembers;
- (BOOL)supportsRemoving;
- (BOOL)supportsRename;
- (BOOL)supportsReordering;
- (id)visibleMembers;

@end
