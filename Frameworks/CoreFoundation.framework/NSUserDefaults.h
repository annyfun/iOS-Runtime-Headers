/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSUserDefaults : NSObject {
    id _private;
    void *_reserved[4];
}

@property BOOL _mapkit_enabledMapTilePathDrawing;
@property(getter=_mapkit_isHeadingRotationSticky,readonly) BOOL _mapkit_headingRotationSticky;
@property(readonly) NSUInteger _mapkit_throttleFlags;
@property(readonly) double _mapkit_throttleTimeInterval;

+ (id)CNFObjectForKey:(id)arg1;
+ (NSUInteger)CNFRegEmailValidationTimeout;
+ (void)_ensureAndLockPreferredLanguageLock;
+ (struct __CFString { }*)_targetDomainWithDomain:(id)arg1;
+ (void)_web_addDefaultsChangeObserver;
+ (void)_web_defaultsDidChange;
+ (id)_web_preferredLanguageCode;
+ (void)_webkit_addDefaultsChangeObserver;
+ (void)_webkit_defaultsDidChange;
+ (void)_webkit_ensureAndLockPreferredLanguageLock;
+ (id)_webkit_preferredLanguageCode;
+ (id)agentObjectForKey:(id)arg1;
+ (id)appObjectForKey:(id)arg1;
+ (id)objectForKey:(id)arg1 inDomain:(id)arg2;
+ (id)objectForKey:(id)arg1 inDomain:(id)arg2;
+ (void)resetStandardUserDefaults;
+ (void)setAgentObject:(id)arg1 forKey:(id)arg2;
+ (void)setAppObject:(id)arg1 forKey:(id)arg2;
+ (void)setCNFObject:(id)arg1 forKey:(id)arg2;
+ (void)setCNFRegEmailValidationTimeout:(NSUInteger)arg1;
+ (void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)setShouldShowCNFRegistrationServerLogs:(BOOL)arg1;
+ (void)setShouldShowCNFRegistrationSettingsUI:(BOOL)arg1;
+ (void)setStandardUserDefaults:(id)arg1;
+ (BOOL)shouldShowCNFRegistrationServerLogs;
+ (BOOL)shouldShowCNFRegistrationSettingsUI;
+ (id)standardUserDefaults;

- (id)URLForKey:(id)arg1;
- (void)_adjustTimer:(id)arg1;
- (void)_adjustTimerForAutosync;
- (BOOL)_mapkit_enabledMapTilePathDrawing;
- (BOOL)_mapkit_isHeadingRotationSticky;
- (void)_mapkit_setTrackingAnimationDuration:(double)arg1;
- (NSUInteger)_mapkit_throttleFlags;
- (double)_mapkit_throttleTimeInterval;
- (double)_mapkit_trackingAnimationDuration;
- (void)addSuiteNamed:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)dealloc;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (double)doubleForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (id)init;
- (id)initWithUser:(id)arg1;
- (NSInteger)integerForKey:(id)arg1;
- (long long)longForKey:(id)arg1;
- (id)objectForKey:(id)arg1 inDomain:(id)arg2;
- (id)objectForKey:(id)arg1;
- (BOOL)objectIsForcedForKey:(id)arg1 inDomain:(id)arg2;
- (BOOL)objectIsForcedForKey:(id)arg1;
- (id)persistentDomainForName:(id)arg1;
- (id)persistentDomainNames;
- (void)registerDefaults:(id)arg1;
- (void)removeObjectForKey:(id)arg1 inDomain:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)removePersistentDomainForName:(id)arg1;
- (void)removeSuiteNamed:(id)arg1;
- (void)removeVolatileDomainForName:(id)arg1;
- (id)searchList;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setInteger:(NSInteger)arg1 forKey:(id)arg2;
- (void)setLong:(long long)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setPersistentDomain:(id)arg1 forName:(id)arg2;
- (void)setSearchList:(id)arg1;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setVolatileDomain:(id)arg1 forName:(id)arg2;
- (void)set_mapkit_enabledMapTilePathDrawing:(BOOL)arg1;
- (id)stringArrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (BOOL)synchronize;
- (id)valueForKey:(id)arg1;
- (id)volatileDomainForName:(id)arg1;
- (id)volatileDomainNames;

@end
