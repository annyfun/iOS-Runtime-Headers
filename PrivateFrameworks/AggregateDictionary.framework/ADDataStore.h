/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AggregateDictionary.framework/AggregateDictionary
 */

@class NSString;

@interface ADDataStore : NSObject {
    struct sqlite3 { } *_db;
    struct sqlite3_stmt { } *_deleteDistributionStatement;
    struct sqlite3_stmt { } *_deleteScalarStatement;
    struct sqlite3_stmt { } *_insertDistributionStatement;
    struct sqlite3_stmt { } *_insertScalarStatement;
    NSString *_path;
    struct sqlite3_stmt { } *_selectDistributionStatement;
    struct sqlite3_stmt { } *_selectDistributionsWithPrefixInTimePeriodStatement;
    struct sqlite3_stmt { } *_selectScalarStatement;
    struct sqlite3_stmt { } *_selectScalarsWithPrefixInTimePeriodStatement;
    struct sqlite3_stmt { } *_updateDistributionStatement;
    struct sqlite3_stmt { } *_updateScalarStatement;
}

@property(readonly) NSString *path;

- (BOOL)_createTables;
- (NSInteger)_schemaVersion;
- (NSInteger)beginTransaction;
- (NSInteger)commitTransaction;
- (void)dealloc;
- (void)deleteAllValuesOnOrBeforeDate:(NSInteger)arg1;
- (void)deleteDistributionForKey:(id)arg1 withDaysSince1970:(NSInteger)arg2;
- (void)deleteScalarForKey:(id)arg1 withDaysSince1970:(NSInteger)arg2;
- (NSInteger)distribution:(struct { double x1; double x2; double x3; double x4; NSInteger x5; }*)arg1 forKey:(id)arg2 withDaysSince1970:(NSInteger)arg3;
- (BOOL)distributionsForKeyPrefix:(id)arg1 minDaysSince1970:(NSInteger)arg2 maxDaysSince1970:(NSInteger)arg3 rowHandler:(id)arg4;
- (BOOL)distributionsForKeyPrefix:(id)arg1 minDaysSince1970:(NSInteger)arg2 maxDaysSince1970:(NSInteger)arg3 withConsumer:(id)arg4;
- (void)incrementalVacuum;
- (id)initWithDefaultPath;
- (id)initWithPath:(id)arg1;
- (void)insertDistribution:(struct { double x1; double x2; double x3; double x4; NSInteger x5; }*)arg1 forKey:(id)arg2 withDaysSince1970:(NSInteger)arg3;
- (void)insertScalar:(long long)arg1 forKey:(id)arg2 withDaysSince1970:(NSInteger)arg3;
- (id)path;
- (NSInteger)scalar:(long long*)arg1 forKey:(id)arg2 withDaysSince1970:(NSInteger)arg3;
- (BOOL)scalarsForKeyPrefix:(id)arg1 minDaysSince1970:(NSInteger)arg2 maxDaysSince1970:(NSInteger)arg3 rowHandler:(id)arg4;
- (BOOL)scalarsForKeyPrefix:(id)arg1 minDaysSince1970:(NSInteger)arg2 maxDaysSince1970:(NSInteger)arg3 withConsumer:(id)arg4;
- (void)updateDistribution:(struct { double x1; double x2; double x3; double x4; NSInteger x5; }*)arg1 forID:(NSInteger)arg2;
- (void)updateScalar:(long long)arg1 forID:(NSInteger)arg2;

@end
