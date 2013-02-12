/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MLCompoundPredicate, MLQueryImpl, NSMutableArray;

@interface MLQuery : NSObject <NSCoding, NSCopying> {
    unsigned int _indexMappingIsShort : 1;
    unsigned int _needsEvaluation : 1;
    unsigned int _isEvaluating : 1;
    unsigned int _disableAutoInvalidatesForDatabaseChanges : 1;
    unsigned int _filterChanged : 1;
    unsigned int _groupingChanged : 1;
    unsigned int _preserveIndexMappingForNextEvaluate : 1;
    unsigned int _tracksGroupMembers : 1;
    unsigned int _disableEvaluation : 1;
    unsigned int _forceSectionsOff : 1;
    unsigned int _backgroundLoadingForcedOff : 1;
    unsigned int _entityType : 2;
    unsigned int _effectiveEntityType : 2;
    unsigned int _evaluationType : 2;
    unsigned int _entityOrderType : 4;
    unsigned int _unshuffledEntityOrder : 4;
    void *_cachedPrefixOccurrenceInfo;
    MLCompoundPredicate *_cpred;
    NSUInteger _customSortingProperty;
    NSMutableArray *_filterPredicates;
    NSUInteger _groupingProperty;
    NSUInteger _groupingThreshold;
    NSUInteger *_indexMapping;
    NSUInteger _lastGroupTrackSearchMatchIndex;
    NSUInteger _lastGroupTrackSearchUID;
    NSUInteger _numberOfEntities;
    MLQueryImpl *_queryImpl;
}

+ (void)initialize;

- (void)_addExplicitContentSystemPredicateToArray:(id)arg1;
- (void)_calculateFirstFrequentLongPrefixInfo:(struct __MLPrefixOccurrenceInfo { NSUInteger x1; id x2; NSUInteger x3; }*)arg1;
- (void)_commonInit_MLQuery;
- (NSUInteger*)_copyIndexMappingByInsertingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (NSUInteger*)_copyIndexMappingByMovingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 toIndex:(NSUInteger)arg2;
- (NSUInteger*)_copyIndexMappingByRemovingRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)_cpred;
- (void)_debugLogAllEntitiesWithMessage:(id)arg1;
- (void)_evaluateIfNecessary;
- (void)_filterPredicatesChanged;
- (BOOL)_needsEvaluationForAnyReason;
- (void)_normailizeFilterPredicates;
- (void)_noteIndexMappingTypeForEntityCount:(NSUInteger)arg1 oldEntityCount:(NSUInteger)arg2 anchorIndex:(NSUInteger*)arg3 currentIndex:(NSUInteger*)arg4;
- (id)_queryImpl;
- (NSUInteger)_queryImplEntityIndexForQueryIndex:(NSUInteger)arg1;
- (void)_removeSystemPredicateWithProperty:(unsigned long)arg1;
- (void)_setupDefaultFilterPredicates;
- (BOOL)backgroundLoadingForcedOff;
- (unsigned long)coalescingProperty;
- (unsigned long)containedMediaTypes;
- (unsigned long)containedMediaTypesForEntityAtIndex:(NSUInteger)arg1;
- (id)containingPlaylist;
- (id)copy;
- (id)copyByInsertingUnshuffledRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)copyByMovingUnshuffledRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 toIndex:(NSUInteger)arg2;
- (id)copyByRemovingUnshuffledRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)copyForReevaluation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)countOfEntities;
- (NSUInteger)countOfEntitiesGroupedByEntityAtIndex:(NSUInteger)arg1;
- (BOOL)countOfEntitiesIsNonZero;
- (NSUInteger)countOfEntitiesNoLoad;
- (unsigned long)customEntitySortOrderProperty;
- (void)dealloc;
- (id)description;
- (NSInteger)effectiveEntityType;
- (void)encodeWithCoder:(id)arg1;
- (id)entityAtIndex:(NSUInteger)arg1;
- (id)entityIndicesForUnshuffledRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (BOOL)entityMatchesPredicate:(id)arg1 entityIndex:(NSUInteger)arg2;
- (BOOL)entityMatchesPredicates:(id)arg1 entityIndex:(NSUInteger)arg2;
- (NSInteger)entityOrder;
- (NSInteger)entityType;
- (NSInteger)entityTypeOfEntityAtIndex:(NSUInteger)arg1;
- (void)filterByAppendingPredicate:(id)arg1;
- (id)filterPredicates;
- (id)firstFrequentLongPrefixForStringProperty:(unsigned long)arg1 occurrenceCount:(NSUInteger*)arg2;
- (void)getValues:(id*)arg1 forProperties:(NSUInteger*)arg2 count:(NSUInteger)arg3 ofEntityAtIndex:(NSUInteger)arg4;
- (unsigned long)groupingProperty;
- (NSUInteger)groupingThreshold;
- (NSUInteger)hash;
- (id)indexMappingDescription;
- (NSUInteger)indexOfEntity:(id)arg1;
- (NSUInteger)indexOfFirstEntityMatchingPredicate:(id)arg1;
- (NSUInteger)indexOfFirstEntityMatchingPredicates:(id)arg1;
- (NSUInteger)indexOfFirstGroupContainingTrack:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntities:(id)arg1;
- (BOOL)isEqual:(id)arg1 compareUnshuffledEquivalence:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFilteredByAnyPropertyExcluding:(NSUInteger*)arg1 count:(NSInteger)arg2;
- (BOOL)isFilteredByProperty:(unsigned long)arg1;
- (void)loadAllEntities;
- (NSUInteger)querySearchCriteriaHash;
- (BOOL)querySearchCriteriaIsEqualTo:(id)arg1;
- (void)replaceFirstFilterForProperty:(unsigned long)arg1 withPredicate:(id)arg2;
- (void)replaceSystemPredicatesWithDefaultValues;
- (id)representativeTrackForEntityAtIndex:(NSUInteger)arg1;
- (id)representativeTracksForAlbumsGetTrackCount:(NSUInteger*)arg1;
- (id)sectionDataForStringProperty:(unsigned long)arg1;
- (BOOL)sectionsAreForcedOff;
- (void)setAutoInvalidatesForDatabaseChanges:(BOOL)arg1;
- (void)setBackgroundLoadingForcedOff:(BOOL)arg1;
- (void)setCustomEntitySortOrderProperty:(unsigned long)arg1;
- (void)setEntityOrder:(NSInteger)arg1;
- (void)setEntityType:(NSInteger)arg1;
- (void)setFilterPredicates:(id)arg1;
- (void)setGroupingProperty:(unsigned long)arg1;
- (void)setGroupingThreshold:(NSUInteger)arg1;
- (void)setSectionsAreForcedOff:(BOOL)arg1;
- (void)setTracksGroupMembers:(BOOL)arg1;
- (NSUInteger)shuffleTrackOrderByAlbumWithAnchorIndex:(NSUInteger)arg1;
- (NSUInteger)shuffleTrackOrderWithAnchorIndex:(NSUInteger)arg1 currentIndex:(NSUInteger*)arg2;
- (NSUInteger)shuffleTrackOrderWithAnchorIndex:(NSUInteger)arg1;
- (id)stringValueForPredicateFilterProperty:(unsigned long)arg1;
- (id)stringValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (id)stringValuesForProperty:(unsigned long)arg1 ofEntitiesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (double)timeValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (BOOL)tracksGroupMembers;
- (NSInteger)unshuffledEntityOrder;
- (id)unshuffledIndicesForEntityRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (unsigned long long)unsignedValueForPredicateFilterProperty:(unsigned long)arg1;
- (unsigned long long)unsignedValueForProperty:(unsigned long)arg1 ofEntityAtIndex:(NSUInteger)arg2;
- (id)unsignedValuesForProperty:(unsigned long)arg1 ofEntitiesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (void)visitGroupMembersOfEntityAtIndex:(NSUInteger)arg1 visitor:(int (*)())arg2 context:(void*)arg3;
- (BOOL)wasSortedAlphabetically;

@end
