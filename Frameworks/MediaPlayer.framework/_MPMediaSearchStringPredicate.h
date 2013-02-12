/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSSet, NSString;

@interface _MPMediaSearchStringPredicate : MPMediaPredicate {
    NSSet *_properties;
    NSString *_searchString;
}

@property(copy) NSSet *properties;
@property(copy) NSString *searchString;

+ (id)predicateWithSearchString:(id)arg1 forProperties:(id)arg2;

- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForEntityClass:(Class)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)properties;
- (id)searchString;
- (void)setProperties:(id)arg1;
- (void)setSearchString:(id)arg1;

@end
