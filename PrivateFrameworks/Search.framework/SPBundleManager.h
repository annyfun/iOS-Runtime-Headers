/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class NSArray, NSDictionary;

@interface SPBundleManager : NSObject {
    NSArray *_datastores;
    NSDictionary *_domainMap;
    NSArray *_searchBundles;
}

@property(readonly) NSArray *datastores;
@property(readonly) NSArray *searchBundles;

+ (id)sharedManager;

- (void)_loadSearchBundles;
- (id)datastoreForDomain:(NSUInteger)arg1;
- (id)datastores;
- (void)dealloc;
- (id)domainMap;
- (void)resetDatastores;
- (id)searchBundles;

@end
