/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectContext, NSManagedObjectID;

@interface NSManagedObject : NSObject {
    id _cd_entity;
    id _cd_faultHandler;
    NSUInteger _cd_lockingInfo;
    NSManagedObjectContext *_cd_managedObjectContext;
    NSManagedObjectID *_cd_objectID;
    id _cd_observationInfo;
    id _cd_queueReference;
    id _cd_rawData;
    NSInteger _cd_rc;
    id *_cd_snapshots;
    NSUInteger _cd_stateFlags;
}

+ (struct { NSInteger x1; void *x2; unsigned long x3; unsigned char x4; NSUInteger x5; void *x6; id x7; char *x8; struct _moFactoryClassFlags { unsigned int x_9_1_1 : 1; unsigned int x_9_1_2 : 1; unsigned int x_9_1_3 : 1; unsigned int x_9_1_4 : 1; unsigned int x_9_1_5 : 1; unsigned int x_9_1_6 : 1; unsigned int x_9_1_7 : 26; } x9; }*)_PFMOClassFactoryData;
+ (id)_PFPlaceHolderSingleton;
+ (id)_PFPlaceHolderSingleton_core;
+ (void)_entityDeallocated;
+ (BOOL)_hasOverriddenAwake;
+ (void)_initializeAccessorStubs;
+ (void)_initializePrimitiveAccessorStubs;
+ (BOOL)_isGeneratedClass;
+ (BOOL)_isGeneratedClass_1;
+ (void)_release_1;
+ (id)_retain_1;
+ (char *)_transientPropertiesChangesMask__;
+ (BOOL)_useFastValidationMethod;
+ (id)alloc;
+ (NSUInteger)allocBatch:(id*)arg1 withEntity:(id)arg2 count:(NSUInteger)arg3;
+ (id)allocWithEntity:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)allocWithZone_10_4:(struct _NSZone { }*)arg1;
+ (id)alloc_10_4;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)batchAllocateWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 count:(NSUInteger)arg3;
+ (Class)classForEntity:(id)arg1;
+ (BOOL)contextShouldIgnoreUnmodeledPropertyChanges;
+ (void)initialize;
+ (void)release;
+ (BOOL)resolveClassMethod:(SEL)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)retain;

- (int (*)())methodForSelector:(SEL)arg1;
- (id)_allProperties__;
- (NSInteger)_batch_release__;
- (void)_chainNewError:(id)arg1 toOriginalErrorDoublePointer:(id*)arg2;
- (id)_changedTransientProperties__;
- (void)_clearAllChanges__;
- (void)_clearPendingChanges__;
- (void)_clearRawPropertiesWithHint:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)_clearUnprocessedChanges__;
- (void)_commitPhotoshoperyForRelationshipAtIndex:(NSUInteger)arg1 newValue:(id)arg2;
- (BOOL)_defaultValidation:(id*)arg1 error:(id*)arg2;
- (id)_descriptionValues;
- (void)_didChangeValue:(id)arg1 forRelationship:(id)arg2 named:(id)arg3 withInverse:(id)arg4;
- (void)_excludeObject:(id)arg1 fromPropertyWithKey:(id)arg2 andIndex:(NSUInteger)arg3;
- (id)_faultHandler__;
- (id)_generateErrorDetailForKey:(id)arg1 withValue:(id)arg2;
- (id)_generateErrorWithCode:(NSInteger)arg1 andMessage:(id)arg2 forKey:(id)arg3 andValue:(id)arg4 additionalDetail:(id)arg5;
- (id)_genericMutableSetValueForKey:(id)arg1 withIndex:(long)arg2 flags:(long)arg3;
- (void)_genericUpdateFromSnapshot:(id)arg1;
- (id)_genericValueForKey:(id)arg1 withIndex:(long)arg2 flags:(long)arg3;
- (BOOL)_hasAnyChanges;
- (BOOL)_hasAnyObservers__;
- (BOOL)_hasPendingChanges;
- (BOOL)_hasRetainedStoreResources__;
- (BOOL)_hasUnprocessedChanges__;
- (id)_implicitObservationInfo;
- (void)_includeObject:(id)arg1 intoPropertyWithKey:(id)arg2 andIndex:(NSUInteger)arg3;
- (id)_initWithEntity:(id)arg1 withID:(id)arg2 withHandler:(id)arg3 withContext:(id)arg4;
- (BOOL)_isKindOfEntity:(id)arg1;
- (BOOL)_isPendingDeletion__;
- (BOOL)_isPendingInsertion__;
- (BOOL)_isPendingUpdate__;
- (BOOL)_isReadOnly__;
- (BOOL)_isSuppressingChangeNotifications__;
- (BOOL)_isSuppressingKVO__;
- (BOOL)_isUnprocessedDeletion__;
- (BOOL)_isUnprocessedInsertion__;
- (BOOL)_isUnprocessedUpdate__;
- (BOOL)_isValidRelationshipDestination__;
- (id)_lastSnapshot__;
- (void)_maintainInverseRelationship:(id)arg1 forProperty:(id)arg2 forChange:(NSUInteger)arg3 onSet:(id)arg4;
- (void)_maintainInverseRelationship:(id)arg1 forProperty:(id)arg2 oldDestination:(id)arg3 newDestination:(id)arg4;
- (id)_newAllPropertiesWithRelationshipFaultsIntact__;
- (id)_newChangedValuesForRefresh__;
- (id)_newCommittedSnapshotValues;
- (id)_newPersistentPropertiesForConflictRecordFaultsIntact__;
- (id)_newPersistentPropertiesWithRelationshipFaultsIntact__;
- (id)_newPropertiesForRetainedTypes:(NSUInteger*)arg1 andCopiedTypes:(NSUInteger*)arg2 preserveFaults:(BOOL)arg3;
- (id)_newSnapshotForUndo__;
- (void)_nilOutReservedCurrentEventSnapshot__;
- (id)_originalSnapshot__;
- (id)_persistentProperties__;
- (void)_prepropagateDeleteForMerge;
- (void)_propagateDelete:(BOOL)arg1;
- (void)_propagateDelete;
- (id)_referenceQueue__;
- (id)_reservedCurrentEventSnapshot;
- (void)_setFaultHandler__:(id)arg1;
- (void)_setGenericValue:(id)arg1 forKey:(id)arg2 withIndex:(long)arg3 flags:(long)arg4;
- (void)_setHasRetainedStoreResources__:(BOOL)arg1;
- (void)_setLastSnapshot__:(id)arg1;
- (void)_setManagedObjectContext__:(id)arg1;
- (void)_setObjectID__:(id)arg1;
- (void)_setOriginalSnapshot__:(id)arg1;
- (void)_setPendingDeletion__:(BOOL)arg1;
- (void)_setPendingInsertion__:(BOOL)arg1;
- (void)_setPendingUpdate__:(BOOL)arg1;
- (void)_setReadOnly__:(BOOL)arg1;
- (void)_setSuppressingChangeNotifications__:(BOOL)arg1;
- (void)_setSuppressingKVO__:(BOOL)arg1;
- (void)_setUnprocessedDeletion__:(BOOL)arg1;
- (void)_setUnprocessedInsertion__:(BOOL)arg1;
- (void)_setUnprocessedUpdate__:(BOOL)arg1;
- (void)_setVersionReference__:(NSUInteger)arg1;
- (NSUInteger)_stateFlags;
- (id)_substituteEntityAndProperty:(id)arg1 inString:(id)arg2;
- (id)_transientProperties__;
- (void)_updateFromRefreshSnapshot:(id)arg1;
- (void)_updateFromSnapshot:(id)arg1;
- (void)_updateFromToManyAwareSnapshot:(id)arg1 forUndo:(BOOL)arg2;
- (void)_updateFromUndoSnapshot:(id)arg1;
- (void)_updateToManyRelationship:(id)arg1 from:(id)arg2 to:(id)arg3 with:(id)arg4;
- (BOOL)_validateForSave:(id*)arg1;
- (BOOL)_validatePropertiesWithError:(id*)arg1;
- (BOOL)_validateValue:(id*)arg1 forProperty:(id)arg2 andKey:(id)arg3 withIndex:(NSUInteger)arg4 error:(id*)arg5;
- (NSUInteger)_versionReference__;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)awakeFromSnapshotEvents:(NSUInteger)arg1;
- (id)changedValues;
- (id)changedValuesForCurrentEvent;
- (id)committedValuesForKeys:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (void)didAccessValueForKey:(id)arg1;
- (void)didChange:(NSUInteger)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)didChangeValueForKey:(id)arg1 withSetMutation:(NSUInteger)arg2 usingObjects:(id)arg3;
- (void)didChangeValueForKey:(id)arg1;
- (void)didFireFault;
- (void)didRefresh:(BOOL)arg1;
- (void)didSave;
- (void)didTurnIntoFault;
- (id)entity;
- (NSUInteger)faultingState;
- (void)finalize;
- (BOOL)hasFaultForRelationshipNamed:(id)arg1;
- (NSUInteger)hash;
- (BOOL)implementsSelector:(SEL)arg1;
- (id)init;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (BOOL)isDeleted;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFault;
- (BOOL)isInserted;
- (BOOL)isUpdated;
- (id)managedObjectContext;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)mutableArrayValueForKey:(id)arg1;
- (id)mutableSetValueForKey:(id)arg1;
- (id)objectID;
- (id)observationInfo;
- (void)prepareForDeletion;
- (id)primitiveValueForKey:(id)arg1;
- (void)release;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)retain;
- (NSUInteger)retainCount;
- (void)setNilValueForKey:(id)arg1;
- (void)setObservationInfo:(id)arg1;
- (void)setPrimitiveValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (BOOL)validateForDelete:(id*)arg1;
- (BOOL)validateForInsert:(id*)arg1;
- (BOOL)validateForUpdate:(id*)arg1;
- (BOOL)validateValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)valueForKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)willAccessValueForKey:(id)arg1;
- (void)willChange:(NSUInteger)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)willChangeValueForKey:(id)arg1 withSetMutation:(NSUInteger)arg2 usingObjects:(id)arg3;
- (void)willChangeValueForKey:(id)arg1;
- (void)willFireFault;
- (void)willRefresh:(BOOL)arg1;
- (void)willSave;
- (void)willTurnIntoFault;

@end
