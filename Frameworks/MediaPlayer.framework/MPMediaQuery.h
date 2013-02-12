/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaQuery : NSObject <NSCoding, NSCopying> {
    void *_internal;
}

@property(readonly) NSArray *collectionSections;
@property(readonly) NSArray *collections;
@property(retain) NSSet *filterPredicates;
@property(readonly) NSArray *itemSections;
@property(readonly) NSArray *items;
@property NSInteger groupingType;

+ (void)_clearCachedDynamicPropertiesForMediaLibrary:(id)arg1;
+ (void)_clearCachedItemsAndCollections;
+ (void)_clearCachedItemsAndCollectionsForMediaLibrary:(id)arg1;
+ (void)_didReceiveMemoryWarning;
+ (void)_executeMediaCacheSyncedBlock:(id)arg1;
+ (void)_libraryContentsDidChange:(id)arg1;
+ (void)_libraryDynamicPropertiesDidChange:(id)arg1;
+ (id)albumsQuery;
+ (id)artistsQuery;
+ (id)audiobooksQuery;
+ (id)compilationsQuery;
+ (id)composersQuery;
+ (id)geniusMixesQuery;
+ (id)genresQuery;
+ (void)initialize;
+ (id)playlistsQuery;
+ (id)podcastsQuery;
+ (void)setFilteringDisabled:(BOOL)arg1;
+ (id)songsQuery;
+ (id)videosQuery;

- (id)ML3CollectionsQueryInLibrary:(id)arg1;
- (id)ML3ItemsQueryInLibrary:(id)arg1 orderingProperties:(id)arg2 nameBlankProperty:(id)arg3;
- (id)ML3ItemsQueryInLibrary:(id)arg1;
- (id)ML3OrderingPropertiesForGroupingType:(NSInteger)arg1;
- (void)_clearCachedItemsAndCollectionsForMediaLibrary:(id)arg1;
- (void)_executeMediaCacheSafeBlock:(id)arg1;
- (void)_executeMediaCacheSyncedBlock:(id)arg1;
- (void)_onQueue_addFilterPredicate:(id)arg1;
- (void)_onQueue_clearCachedItemsAndCollections;
- (void)_onQueue_clearCachedItemsAndCollectionsForMediaLibrary:(id)arg1;
- (void)_onQueue_clearCollections;
- (void)_onQueue_clearItems;
- (id)_onQueue_collections;
- (NSInteger)_onQueue_groupingType;
- (id)_onQueue_items;
- (id)_onQueue_predicateForProperty:(id)arg1;
- (void)_onQueue_removeFilterPredicate:(id)arg1;
- (void)_onQueue_removePredicatesForProperty:(id)arg1;
- (id)_onQueue_sanitizedQuery;
- (id)_sanitizedQuery;
- (void)addFilterPredicate:(id)arg1;
- (id)collectionPropertiesToFetch;
- (id)collectionSectionInfo;
- (id)collectionSections;
- (id)collections;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)countOfCollections;
- (NSUInteger)countOfItems;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)excludesEntitiesWithBlankNames;
- (id)filterPredicates;
- (NSUInteger)groupingThreshold;
- (NSInteger)groupingType;
- (NSUInteger)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntities:(id)arg1 entityType:(NSInteger)arg2;
- (id)initWithFilterPredicates:(id)arg1;
- (id)initWithFilterPredicatesInternal:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)itemPropertiesToFetch;
- (id)itemSectionInfo;
- (id)itemSections;
- (id)items;
- (id)mediaLibrary;
- (void)moveItemFromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2;
- (id)mutableItems;
- (id)predicateForProperty:(id)arg1;
- (BOOL)prefetchProperties;
- (void)removeFilterPredicate:(id)arg1;
- (void)removeItemAtIndex:(NSUInteger)arg1;
- (void)removePredicatesForProperty:(id)arg1;
- (void)setCollectionPropertiesToFetch:(id)arg1;
- (void)setFilterPredicates:(id)arg1;
- (void)setGroupingType:(NSInteger)arg1;
- (void)setItemPropertiesToFetch:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setPrefetchProperties:(BOOL)arg1;
- (void)setSortItems:(BOOL)arg1;
- (BOOL)sortItems;
- (BOOL)specifiesPlaylistItems;
- (BOOL)willGroupEntities;

@end
