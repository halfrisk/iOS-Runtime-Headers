/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaQuery : NSObject <MPPProtobufferCoding, NSCopying, NSSecureCoding> {
    MPMediaQueryCriteria * _criteria;
    int  _isFilteringDisabled;
    MPMediaLibrary * _mediaLibrary;
    NSArray * _staticEntities;
    int  _staticEntityType;
}

@property (nonatomic, readonly) unsigned int _countOfCollections;
@property (nonatomic, readonly) unsigned int _countOfItems;
@property (nonatomic, readonly) BOOL _hasCollections;
@property (nonatomic, readonly) BOOL _hasItems;
@property (nonatomic, readonly) BOOL _hasStaticEntities;
@property (nonatomic, readonly) MPMediaItemCollection *_representativeCollection;
@property (nonatomic, readonly) int _representativeCollectionGroupingType;
@property (nonatomic, readonly) MPMediaItemCollection *collectionByJoiningCollections;
@property (nonatomic, readonly) NSArray *collectionPersistentIdentifiers;
@property (nonatomic, copy) NSSet *collectionPropertiesToFetch;
@property (nonatomic, readonly) MPMediaQuerySectionInfo *collectionSectionInfo;
@property (nonatomic, readonly) NSArray *collectionSections;
@property (nonatomic, readonly) NSArray *collections;
@property (nonatomic, readonly) MPMediaPlaylist *containingPlaylist;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int entityLimit;
@property (nonatomic, readonly) BOOL excludesEntitiesWithBlankNames;
@property (nonatomic, retain) NSSet *filterPredicates;
@property (nonatomic) int groupingType;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL ignoreRestrictionsPredicates;
@property (nonatomic) BOOL ignoreSystemFilterPredicates;
@property (nonatomic) BOOL includeEntitiesWithBlankNames;
@property (nonatomic, readonly) NSArray *itemPersistentIdentifiers;
@property (nonatomic, copy) NSSet *itemPropertiesToFetch;
@property (nonatomic, readonly) MPMediaQuerySectionInfo *itemSectionInfo;
@property (nonatomic, readonly) NSArray *itemSections;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, retain) MPMediaLibrary *mediaLibrary;
@property (getter=_orderingDirectionMappings, setter=_setOrderingDirectionMappings:, nonatomic, copy) NSDictionary *orderingDirectionMappings;
@property (getter=_orderingProperties, setter=_setOrderingProperties:, nonatomic, copy) NSArray *orderingProperties;
@property (nonatomic) BOOL shouldIncludeNonLibraryEntities;
@property (nonatomic) BOOL sortItems;
@property (nonatomic, readonly) BOOL specifiesPlaylistItems;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useSections;
@property (nonatomic, readonly) BOOL willGroupEntities;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)ITunesUAudioQuery;
+ (id)ITunesUQuery;
+ (id)activeGeniusPlaylist;
+ (id)albumArtistsQuery;
+ (id)albumsQuery;
+ (id)artistsQuery;
+ (id)audibleAudiobooksQuery;
+ (id)audioPodcastsQuery;
+ (id)audiobooksQuery;
+ (id)compilationsQuery;
+ (id)composersQuery;
+ (id)currentDevicePurchasesPlaylist;
+ (id)geniusMixesQuery;
+ (id)genresQuery;
+ (id)homeVideosQuery;
+ (void)initFilteringDisabled;
+ (void)initialize;
+ (BOOL)isFilteringDisabled;
+ (id)movieRentalsQuery;
+ (id)moviesQuery;
+ (id)musicVideosQuery;
+ (id)playbackHistoryPlaylist;
+ (id)playlistsQuery;
+ (id)playlistsRecentlyAddedQuery;
+ (id)podcastsQuery;
+ (void)setFilteringDisabled:(BOOL)arg1;
+ (id)songsQuery;
+ (BOOL)supportsSecureCoding;
+ (id)tvShowsQuery;
+ (id)videoITunesUQuery;
+ (id)videoPodcastsQuery;
+ (id)videosQuery;

- (void).cxx_destruct;
- (BOOL)MPSD_hasDownloadableEntities;
- (BOOL)MPSD_hasDownloadingEntities;
- (id)MPSD_mediaQueryForDownloadableEntities;
- (id)MPSD_mediaQueryForDownloadingEntities;
- (unsigned int)_countOfCollections;
- (unsigned int)_countOfItems;
- (void)_enumerateCollectionPersistentIDsInOrder:(BOOL)arg1 usingBlock:(id /* block */)arg2;
- (void)_enumerateCollectionPersistentIDsUsingBlock:(id /* block */)arg1;
- (void)_enumerateCollectionsInOrder:(BOOL)arg1 usingBlock:(id /* block */)arg2;
- (void)_enumerateCollectionsUsingBlock:(id /* block */)arg1;
- (void)_enumerateItemPersistentIDsInOrder:(BOOL)arg1 usingBlock:(id /* block */)arg2;
- (void)_enumerateItemPersistentIDsUsingBlock:(id /* block */)arg1;
- (void)_enumerateItemsInOrder:(BOOL)arg1 usingBlock:(id /* block */)arg2;
- (void)_enumerateItemsUsingBlock:(id /* block */)arg1;
- (void)_enumerateUnorderedCollectionPersistentIDsUsingBlock:(id /* block */)arg1;
- (void)_enumerateUnorderedCollectionsUsingBlock:(id /* block */)arg1;
- (void)_enumerateUnorderedItemPersistentIDsUsingBlock:(id /* block */)arg1;
- (void)_enumerateUnorderedItemsUsingBlock:(id /* block */)arg1;
- (void)_getRepresentativeCollectionGrouping:(int*)arg1 propertyPredicate:(id*)arg2;
- (BOOL)_hasCollections;
- (BOOL)_hasItems;
- (BOOL)_hasStaticEntities;
- (BOOL)_isFilteringDisabled;
- (id)_orderingDirectionMappings;
- (id)_orderingProperties;
- (id)_representativeCollection;
- (int)_representativeCollectionGroupingType;
- (void)_setOrderingDirectionMappings:(id)arg1;
- (void)_setOrderingProperties:(id)arg1;
- (BOOL)_updatePredicateForProperty:(id)arg1 withPropertyPredicate:(id)arg2;
- (id)_valueForAggregateFunction:(id)arg1 onProperty:(id)arg2 entityType:(int)arg3;
- (void)addFilterPredicate:(id)arg1;
- (id)collectionByJoiningCollections;
- (id)collectionPersistentIdentifiers;
- (id)collectionPropertiesToFetch;
- (id)collectionSectionInfo;
- (id)collectionSections;
- (id)collections;
- (id)containingPlaylist;
- (id)copyByRemovingStaticEntities;
- (id)copyBySanitizingStaticEntities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)criteria;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)entityLimit;
- (BOOL)excludesEntitiesWithBlankNames;
- (id)filterPredicates;
- (unsigned int)groupingThreshold;
- (int)groupingType;
- (unsigned int)hash;
- (BOOL)ignoreRestrictionsPredicates;
- (BOOL)ignoreSystemFilterPredicates;
- (BOOL)includeEntitiesWithBlankNames;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCriteria:(id)arg1 library:(id)arg2;
- (id)initWithEntities:(id)arg1 entityType:(int)arg2;
- (id)initWithFilterPredicates:(id)arg1;
- (id)initWithProtobufferDecodableObject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)itemPersistentIdentifiers;
- (id)itemPropertiesToFetch;
- (id)itemSectionInfo;
- (id)itemSections;
- (id)items;
- (id)mediaLibrary;
- (id)predicateForProperty:(id)arg1;
- (id)protobufferEncodableObject;
- (void)removeFilterPredicate:(id)arg1;
- (void)removePredicatesForProperty:(id)arg1;
- (void)setCollectionPropertiesToFetch:(id)arg1;
- (void)setCriteria:(id)arg1;
- (void)setEntityLimit:(unsigned int)arg1;
- (void)setFilterPredicate:(id)arg1 forProperty:(id)arg2;
- (void)setFilterPredicates:(id)arg1;
- (void)setFilterPropertyPredicate:(id)arg1;
- (void)setGroupingType:(int)arg1;
- (void)setIgnoreRestrictionsPredicates:(BOOL)arg1;
- (void)setIgnoreSystemFilterPredicates:(BOOL)arg1;
- (void)setIncludeEntitiesWithBlankNames:(BOOL)arg1;
- (void)setItemPropertiesToFetch:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setShouldIncludeNonLibraryEntities:(BOOL)arg1;
- (void)setSortItems:(BOOL)arg1;
- (void)setStaticEntities:(id)arg1 entityType:(int)arg2;
- (void)setUseSections:(BOOL)arg1;
- (BOOL)shouldIncludeNonLibraryEntities;
- (BOOL)sortItems;
- (BOOL)specifiesPlaylistItems;
- (BOOL)useSections;
- (id)valueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2;
- (id)valueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2;
- (BOOL)willGroupEntities;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)_MPUSDS_searchPredicate;

@end
