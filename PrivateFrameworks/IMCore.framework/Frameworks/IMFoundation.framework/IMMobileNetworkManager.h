/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSLock, NSMutableSet;

@interface IMMobileNetworkManager : IMNetworkManager {
    NSMutableSet *_autoAssociationTokens;
    BOOL _dataContextActive;
    NSLock *_lock;
    BOOL _registered;
    BOOL _shouldBringUpDataContext;
    void *_wifiManager;
}

@property BOOL isDataConnectionActive; /* unknown property attribute: SsetDataConnectionActive: */
@property(retain,readonly) NSNumber *wiFiScaledRSSI;
@property(retain,readonly) NSNumber *wiFiScaledRate;
@property(retain,readonly) NSNumber *wiFiSignalStrength;
@property(readonly) BOOL autoAssociateWiFi;
@property(readonly) BOOL dataConnectionExists;
@property(readonly) BOOL isWiFiAssociated;
@property(readonly) BOOL isWiFiEnabled;
@property(readonly) BOOL willTryToAutoAssociateWiFiNetwork;
@property(readonly) BOOL willTryToSearchForWiFiNetwork;

- (void)_adjustWiFiAutoAssociation;
- (void)_adjustWiFiAutoAssociationLocked;
- (void)_createCTServerConnection;
- (void)_createWiFiManager;
- (void)_ctServerCallBack:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (BOOL)_isDataConnectionAvailable;
- (void)_makeDataConnectionAvailable:(BOOL)arg1;
- (void)_releaseCTServerConnection;
- (void)addWiFiAutoAssociationClientToken:(id)arg1;
- (BOOL)autoAssociateWiFi;
- (BOOL)dataConnectionExists;
- (void)dealloc;
- (id)init;
- (BOOL)isDataConnectionActive;
- (BOOL)isWiFiAssociated;
- (BOOL)isWiFiEnabled;
- (void)removeWiFiAutoAssociationClientToken:(id)arg1;
- (void)setDataConnectionActive:(BOOL)arg1;
- (id)wiFiScaledRSSI;
- (id)wiFiScaledRate;
- (id)wiFiSignalStrength;
- (BOOL)willTryToAutoAssociateWiFiNetwork;
- (BOOL)willTryToSearchForWiFiNetwork;

@end
