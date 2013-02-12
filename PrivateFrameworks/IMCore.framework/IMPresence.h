/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMHandle, NSMutableArray, NSMutableSet, NSString;

@interface IMPresence : IMDirectlyObservableObject <IMDirectlyObservableObjectObserver> {
    NSMutableArray *_imHandles;
    NSMutableSet *_imHandlesSet;
    IMHandle *_mostAvailableIMHandle;
    NSUInteger _previousStatus;
    BOOL _quiet;
    NSUInteger _status;
    NSString *_statusMessage;
}

@property(readonly) NSString *displayName;
@property(readonly) NSString *firstName;
@property(readonly) NSString *fullName;
@property(readonly) NSSet *groups;
@property(readonly) NSSet *imHandleSet;
@property(readonly) NSArray *imHandles;
@property(readonly) NSString *lastName;
@property(readonly) NSString *mobileDeviceName;
@property(readonly) IMHandle *mostAvailableIMHandle;
@property(readonly) NSString *nameAndEmail;
@property(readonly) NSString *nameOfStatus;
@property(readonly) NSString *previousStatusMessage;
@property(readonly) NSString *shortName;
@property(readonly) NSString *statusMessage;
@property(readonly) BOOL isMobile;
@property BOOL isQuiet;
@property(readonly) NSInteger numberOfIMHandles;
@property(readonly) NSUInteger previousStatus;
@property(readonly) NSUInteger status;
@property(readonly) double timeSinceStatusChanged;
@property(readonly) double timeSinceWentOffline;

+ (id)notifications;
+ (id)selectors;

- (BOOL)_fullRecache;
- (void)_imHandleCapabilitiesChanged:(id)arg1;
- (void)_imHandleCertsChanged:(id)arg1;
- (void)_imHandleExtraPropsChanged:(id)arg1;
- (void)_imHandleGroupsChanged:(id)arg1;
- (void)_imHandleInfoChanged:(id)arg1;
- (void)_imHandleMobileChanged:(id)arg1;
- (void)_imHandlePictureChanged:(id)arg1;
- (void)_imHandleSortOrderChanged:(id)arg1;
- (void)_imHandleStatusChanged:(id)arg1;
- (void)_observeIMHandle:(id)arg1;
- (void)_setMostAvailableIMHandle:(id)arg1;
- (void)_unobserveIMHandle:(id)arg1;
- (BOOL)addIMHandle:(id)arg1;
- (BOOL)canAddIMHandle:(id)arg1;
- (BOOL)containsIMHandle:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)firstName;
- (id)fullName;
- (id)groups;
- (id)imHandleSet;
- (id)imHandles;
- (id)init;
- (BOOL)isMobile;
- (BOOL)isQuiet;
- (id)lastName;
- (id)mobileDeviceName;
- (id)mostAvailableIMHandle;
- (id)nameAndEmail;
- (id)nameOfStatus;
- (NSInteger)numberOfIMHandles;
- (void)objectDidPostDirectNotification:(id)arg1;
- (void)postNotificationNamed:(id)arg1 forIMHandle:(id)arg2;
- (NSUInteger)previousStatus;
- (id)previousStatusMessage;
- (void)removeIMHandle:(id)arg1;
- (void)setIsQuiet:(BOOL)arg1;
- (id)shortName;
- (NSUInteger)status;
- (id)statusMessage;
- (double)timeSinceStatusChanged;
- (double)timeSinceWentOffline;

@end
