/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSData, NSString;

@interface MCMDMPayload : MCPayload {
    NSInteger _accessRights;
    NSString *_checkInURLString;
    NSData *_identityPersistentID;
    NSString *_identityUUID;
    NSString *_serverURLString;
    BOOL _signMessage;
    NSString *_topic;
    BOOL _useDevelopmentAPNS;
}

@property(readonly) NSString *checkInURLString;
@property(retain) NSData *identityPersistentID;
@property(readonly) NSString *identityUUID;
@property(readonly) NSArray *localizedAccessRightDescriptions;
@property(readonly) NSString *serverURLString;
@property(readonly) NSString *topic;
@property(readonly) NSInteger accessRights;
@property(readonly) BOOL signMessage;
@property(readonly) BOOL useDevelopmentAPNS;

+ (id)localizedDescriptionForPayloadCount:(NSUInteger)arg1;
+ (id)typeStrings;

- (id)_invalidRightsError;
- (id)_invalidTopicError;
- (NSInteger)accessRights;
- (id)checkInURLString;
- (void)dealloc;
- (id)description;
- (id)identityPersistentID;
- (id)identityUUID;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (id)localizedAccessRightDescriptions;
- (id)serverURLString;
- (void)setIdentityPersistentID:(id)arg1;
- (BOOL)signMessage;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;
- (id)topic;
- (BOOL)useDevelopmentAPNS;

@end
