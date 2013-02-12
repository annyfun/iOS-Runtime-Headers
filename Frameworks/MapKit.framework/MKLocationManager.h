/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class CLHeading, CLLocation, CLLocationManager, GMMLocationShiftRequester, MKLocationShiftFunction, MKRouteStep, MKTripRecorder, NSHashTable, NSMutableArray, NSString, NSTimer, RadiosPreferences;

@interface MKLocationManager : NSObject <CLLocationManagerDelegateInternal, PBRequesterDelegate, RadiosPreferencesDelegate> {
    double _GPSStartTime;
    double _applicationResumeTime;
    double _applicationSuspendTime;
    double _calculatingLocationStartTime;
    BOOL _chinaShiftEnabled;
    CLLocationManager *_clLocationManager;
    NSTimer *_coalesceTimer;
    NSTimer *_delayedDeliveryTimer;
    double _expectedTimeTillNextUpdate;
    CLHeading *_heading;
    id _headingObserver;
    double _headingUpdateTime;
    BOOL _isLastLocationRouteCorrected;
    BOOL _isLastLocationStale;
    BOOL _isWiFiEnabled;
    CLLocation *_lastLocation;
    double _lastLocationReportTime;
    double _lastLocationUpdateTime;
    double _locationAccuracyUpdateTime;
    NSHashTable *_locationObservers;
    RadiosPreferences *_radiosPreferences;
    MKTripRecorder *_recorder;
    MKRouteStep *_routeStep;
    MKLocationShiftFunction *_shiftFunction;
    GMMLocationShiftRequester *_shiftFunctionRequester;
    BOOL _shouldThrottleHeading;
    CLHeading *_throttledHeading;
    BOOL _trackingHeading;
    BOOL _trackingLocation;
    NSString *_tripPath;
    NSMutableArray *_tripPaths;
    double _userLocationCacheDuration;
    BOOL _usesRouteCorrection;
}

@property(readonly) CLHeading *heading;
@property(readonly) CLLocation *lastLocation;
@property(retain) MKRouteStep *routeStep;
@property(retain) MKLocationShiftFunction *shiftFunction;
@property(retain) GMMLocationShiftRequester *shiftFunctionRequester;
@property(retain) CLHeading *throttledHeading;
@property(retain) NSString *tripPath;
@property(retain) NSMutableArray *tripPaths;
@property(readonly) double accuracy;
@property BOOL chinaShiftEnabled;
@property double expectedTimeTillNextUpdate;
@property(readonly) BOOL hasHiFiCapability;
@property(readonly) BOOL hasLocation;
@property id headingObserver;
@property NSInteger headingOrientation;
@property(readonly) double headingUpdateTimeInterval;
@property(readonly) BOOL isAirplaneModeBlockingLocation;
@property(readonly) BOOL isHeadingServicesAvailable;
@property(readonly) BOOL isLastLocationRouteCorrected;
@property(readonly) BOOL isLastLocationStale;
@property(readonly) BOOL isLocationServicesApproved;
@property(readonly) BOOL isLocationServicesAvailable;
@property(readonly) BOOL isLocationServicesDenied;
@property(readonly) BOOL isLocationServicesEnabled;
@property(readonly) BOOL isLocationServicesPossiblyAvailable;
@property(readonly) BOOL isLocationServicesRestricted;
@property(readonly) NSInteger lastLocationSource;
@property(readonly) CGPoint longLat;
@property BOOL shouldThrottleHeading;
@property double userLocationCacheDuration;
@property BOOL usesRouteCorrection;

+ (id)sharedLocationManager;

- (id)_applyChinaLocationShift:(id)arg1;
- (BOOL)_isTimeToResetOnResume;
- (id)_radiosPreferences;
- (void)_reportHeadingFailureWithError:(id)arg1;
- (void)_reportHeadingSuccess;
- (void)_reportLocationFailureWithError:(id)arg1;
- (void)_reportLocationReset;
- (void)_reportLocationStatus:(SEL)arg1;
- (void)_reportLocationSuccess;
- (id)_routeCorrectedLocationForLocation:(id)arg1 routeStep:(id*)arg2;
- (void)_setDelayedDeliveryTimer:(id)arg1;
- (void)_setTrackingHeading:(BOOL)arg1;
- (void)_setTrackingLocation:(BOOL)arg1;
- (void)_startCoalescingUpdates:(NSInteger)arg1;
- (void)_stopCoalescingUpdates;
- (double)accuracy;
- (void)airplaneModeChanged;
- (void)applicationResumed:(id)arg1;
- (void)applicationSuspended:(id)arg1;
- (BOOL)chinaShiftEnabled;
- (id)clLocationManager;
- (void)dampenGPSLocationAccuracy:(id*)arg1 oldLocationSource:(NSInteger)arg2;
- (void)dismissHeadingCalibrationDisplay;
- (BOOL)displayCoreLocationStats;
- (double)expectedTimeTillNextUpdate;
- (BOOL)hasHiFiCapability;
- (BOOL)hasLocation;
- (id)heading;
- (id)headingObserver;
- (NSInteger)headingOrientation;
- (double)headingUpdateTimeInterval;
- (id)init;
- (BOOL)isAirplaneModeBlockingLocation;
- (BOOL)isGPSWarmingUp;
- (BOOL)isHeadingServicesAvailable;
- (BOOL)isLastLocationRouteCorrected;
- (BOOL)isLastLocationStale;
- (BOOL)isLocationServicesApproved;
- (BOOL)isLocationServicesAvailable;
- (BOOL)isLocationServicesDenied;
- (BOOL)isLocationServicesEnabled;
- (BOOL)isLocationServicesPossiblyAvailable;
- (BOOL)isLocationServicesRestricted;
- (id)lastLocation;
- (NSInteger)lastLocationSource;
- (void)loadRecording:(id)arg1;
- (void)loadRecordings:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(NSInteger)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (BOOL)locationManagerShouldDisplayHeadingCalibration:(id)arg1;
- (struct CGPoint { float x1; float x2; })longLat;
- (void)reportCoalescedUpdated;
- (void)repostLastKnownLocation;
- (void)requestShiftFunctionForLocation:(id)arg1 wrap:(BOOL)arg2;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requester:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)reset;
- (id)routeStep;
- (void)setChinaShiftEnabled:(BOOL)arg1;
- (void)setClLocationManager:(id)arg1;
- (void)setCoalesceTimer:(id)arg1;
- (void)setExpectedTimeTillNextUpdate:(double)arg1;
- (void)setHeading:(id)arg1;
- (void)setHeadingObserver:(id)arg1;
- (void)setHeadingOrientation:(NSInteger)arg1;
- (void)setLastLocation:(id)arg1;
- (void)setRouteStep:(id)arg1;
- (void)setShiftFunction:(id)arg1;
- (void)setShiftFunctionRequester:(id)arg1;
- (void)setShouldThrottleHeading:(BOOL)arg1;
- (void)setThrottledHeading:(id)arg1;
- (void)setTripPath:(id)arg1;
- (void)setTripPaths:(id)arg1;
- (void)setUserLocationCacheDuration:(double)arg1;
- (void)setUsesRouteCorrection:(BOOL)arg1;
- (id)shiftFunction;
- (id)shiftFunctionRequester;
- (BOOL)shouldCoalesceUpdates;
- (BOOL)shouldStartCoalescingLocation:(id)arg1;
- (BOOL)shouldStopCoalescingLocation:(id)arg1;
- (BOOL)shouldThrottleHeading;
- (void)startHeadingUpdateWithObserver:(id)arg1;
- (void)startLocationUpdateWithObserver:(id)arg1;
- (void)startRecording;
- (void)stopHeadingUpdateWithObserver:(id)arg1;
- (void)stopLocationUpdateWithObserver:(id)arg1;
- (void)stopRecording;
- (id)throttledHeading;
- (id)tripPath;
- (id)tripPaths;
- (void)tripPlayerDidEnd:(id)arg1;
- (void)unloadRecording;
- (double)userLocationCacheDuration;
- (BOOL)usesRouteCorrection;
- (void)wiFiStatusChanged:(id)arg1;
- (void)writeCoreLocationLog;
- (void)writeRecording;
- (void)writeRecordingToPath:(id)arg1;

@end
