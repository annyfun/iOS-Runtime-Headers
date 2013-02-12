/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMAdInfo, GMMGeometry, GMMKmlInfo, GMMRating, GMMStructuredAddress, NSMutableArray, NSString;

@interface GMMSearchResult : PBCodable {
    GMMAdInfo *_adInfo;
    NSMutableArray *_addressLines;
    NSString *_attributionText;
    NSString *_attributionUrl;
    unsigned long long _cid;
    BOOL _closedListing;
    NSString *_directionsPlacemarkToken;
    NSMutableArray *_enhancedContents;
    GMMGeometry *_geometry;
    BOOL _hasCid;
    BOOL _hasClosedListing;
    BOOL _hasInexactPosition;
    BOOL _hasLocationSource;
    BOOL _hasSesameDetailsEditable;
    BOOL _hasSesameEditable;
    BOOL _hasShowIcon;
    BOOL _hasUnverifiedListing;
    NSMutableArray *_images;
    BOOL _inexactPosition;
    GMMKmlInfo *_kmlInfo;
    NSInteger _locationSource;
    NSString *_mapsUrl;
    NSString *_name;
    NSString *_phone;
    NSString *_queryRefinementString;
    GMMRating *_rating;
    NSMutableArray *_references;
    BOOL _sesameDetailsEditable;
    BOOL _sesameEditable;
    NSString *_sesameFeatureId;
    BOOL _showIcon;
    NSString *_streetViewPanoId;
    GMMStructuredAddress *_structuredAddress;
    NSInteger _type;
    BOOL _unverifiedListing;
}

@property(retain) GMMAdInfo *adInfo;
@property(retain) NSMutableArray *addressLines;
@property(retain) NSString *attributionText;
@property(retain) NSString *attributionUrl;
@property(retain) NSString *directionsPlacemarkToken;
@property(retain) NSMutableArray *enhancedContents;
@property(retain) GMMGeometry *geometry;
@property(retain) NSMutableArray *images;
@property(retain) GMMKmlInfo *kmlInfo;
@property(retain) NSString *mapsUrl;
@property(retain) NSString *name;
@property(retain) NSString *phone;
@property(retain) NSString *queryRefinementString;
@property(retain) GMMRating *rating;
@property(retain) NSMutableArray *references;
@property(retain) NSString *sesameFeatureId;
@property(retain) NSString *streetViewPanoId;
@property(retain) GMMStructuredAddress *structuredAddress;
@property(readonly) NSInteger addressLinesCount;
@property unsigned long long cid;
@property BOOL closedListing;
@property(readonly) NSInteger enhancedContentsCount;
@property(readonly) BOOL hasAdInfo;
@property(readonly) BOOL hasAttributionText;
@property(readonly) BOOL hasAttributionUrl;
@property(readonly) BOOL hasCid;
@property(readonly) BOOL hasClosedListing;
@property(readonly) BOOL hasDirectionsPlacemarkToken;
@property(readonly) BOOL hasGeometry;
@property(readonly) BOOL hasInexactPosition;
@property(readonly) BOOL hasKmlInfo;
@property(readonly) BOOL hasLocationSource;
@property(readonly) BOOL hasMapsUrl;
@property(readonly) BOOL hasName;
@property(readonly) BOOL hasPhone;
@property(readonly) BOOL hasQueryRefinementString;
@property(readonly) BOOL hasRating;
@property(readonly) BOOL hasSesameDetailsEditable;
@property(readonly) BOOL hasSesameEditable;
@property(readonly) BOOL hasSesameFeatureId;
@property(readonly) BOOL hasShowIcon;
@property(readonly) BOOL hasStreetViewPanoId;
@property(readonly) BOOL hasStructuredAddress;
@property(readonly) BOOL hasUnverifiedListing;
@property(readonly) NSInteger imagesCount;
@property BOOL inexactPosition;
@property NSInteger locationSource;
@property(readonly) NSInteger referencesCount;
@property BOOL sesameDetailsEditable;
@property BOOL sesameEditable;
@property BOOL showIcon;
@property NSInteger type;
@property BOOL unverifiedListing;

- (id)adInfo;
- (void)addAddressLine:(id)arg1;
- (void)addEnhancedContent:(id)arg1;
- (void)addImage:(id)arg1;
- (void)addReference:(id)arg1;
- (id)addressLineAtIndex:(NSUInteger)arg1;
- (id)addressLines;
- (NSInteger)addressLinesCount;
- (id)attributionText;
- (id)attributionUrl;
- (unsigned long long)cid;
- (BOOL)closedListing;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsPlacemarkToken;
- (id)enhancedContentAtIndex:(NSUInteger)arg1;
- (id)enhancedContents;
- (NSInteger)enhancedContentsCount;
- (id)geometry;
- (BOOL)hasAdInfo;
- (BOOL)hasAttributionText;
- (BOOL)hasAttributionUrl;
- (BOOL)hasCid;
- (BOOL)hasClosedListing;
- (BOOL)hasDirectionsPlacemarkToken;
- (BOOL)hasGeometry;
- (BOOL)hasInexactPosition;
- (BOOL)hasKmlInfo;
- (BOOL)hasLocationSource;
- (BOOL)hasMapsUrl;
- (BOOL)hasName;
- (BOOL)hasPhone;
- (BOOL)hasQueryRefinementString;
- (BOOL)hasRating;
- (BOOL)hasSesameDetailsEditable;
- (BOOL)hasSesameEditable;
- (BOOL)hasSesameFeatureId;
- (BOOL)hasShowIcon;
- (BOOL)hasStreetViewPanoId;
- (BOOL)hasStructuredAddress;
- (BOOL)hasUnverifiedListing;
- (id)imageAtIndex:(NSUInteger)arg1;
- (id)images;
- (NSInteger)imagesCount;
- (BOOL)inexactPosition;
- (id)init;
- (id)kmlInfo;
- (NSInteger)locationSource;
- (id)mapsUrl;
- (id)name;
- (id)phone;
- (id)queryRefinementString;
- (id)rating;
- (BOOL)readFrom:(id)arg1;
- (id)referenceAtIndex:(NSUInteger)arg1;
- (id)references;
- (NSInteger)referencesCount;
- (BOOL)sesameDetailsEditable;
- (BOOL)sesameEditable;
- (id)sesameFeatureId;
- (void)setAdInfo:(id)arg1;
- (void)setAddressLine:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setAddressLines:(id)arg1;
- (void)setAttributionText:(id)arg1;
- (void)setAttributionUrl:(id)arg1;
- (void)setCid:(unsigned long long)arg1;
- (void)setClosedListing:(BOOL)arg1;
- (void)setDirectionsPlacemarkToken:(id)arg1;
- (void)setEnhancedContent:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setEnhancedContents:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setImage:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setImages:(id)arg1;
- (void)setInexactPosition:(BOOL)arg1;
- (void)setKmlInfo:(id)arg1;
- (void)setLocationSource:(NSInteger)arg1;
- (void)setMapsUrl:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhone:(id)arg1;
- (void)setQueryRefinementString:(id)arg1;
- (void)setRating:(id)arg1;
- (void)setReference:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setReferences:(id)arg1;
- (void)setSesameDetailsEditable:(BOOL)arg1;
- (void)setSesameEditable:(BOOL)arg1;
- (void)setSesameFeatureId:(id)arg1;
- (void)setShowIcon:(BOOL)arg1;
- (void)setStreetViewPanoId:(id)arg1;
- (void)setStructuredAddress:(id)arg1;
- (void)setType:(NSInteger)arg1;
- (void)setUnverifiedListing:(BOOL)arg1;
- (BOOL)showIcon;
- (id)streetViewPanoId;
- (id)structuredAddress;
- (NSInteger)type;
- (BOOL)unverifiedListing;
- (void)writeTo:(id)arg1;

@end
