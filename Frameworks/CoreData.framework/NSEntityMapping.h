/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSExpression, NSMutableArray, NSString, NSDictionary, NSData;



@interface NSEntityMapping : NSObject 
{
    void *_reserved;
    void *_reserved1;
    void *_reserved2;
    NSString *_name;
    NSUInteger _mappingType;
    NSString *_sourceEntityName;
    NSData *_sourceEntityVersionHash;
    NSString *_destinationEntityName;
    NSData *_destinationEntityVersionHash;
    NSExpression *_sourceExpression;
    NSDictionary *_userInfo;
    NSString *_entityMigrationPolicyClassName;
    NSMutableArray *_attributeMappings;
    NSMutableArray *_relationshipMappings;
    struct __entityMappingFlags { 
        unsigned int _isInUse : 1; 
        unsigned int _reservedEntityMapping : 31; 
    } _entityMappingFlags;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)name;
- (void)setName:(id)arg1;
- (NSUInteger)mappingType;
- (void)setMappingType:(NSUInteger)arg1;
- (id)sourceEntityName;
- (void)setSourceEntityName:(id)arg1;
- (id)sourceEntityVersionHash;
- (void)setSourceEntityVersionHash:(id)arg1;
- (id)destinationEntityName;
- (void)setDestinationEntityName:(id)arg1;
- (id)destinationEntityVersionHash;
- (void)setDestinationEntityVersionHash:(id)arg1;
- (id)attributeMappings;
- (void)setAttributeMappings:(id)arg1;
- (id)relationshipMappings;
- (void)setRelationshipMappings:(id)arg1;
- (id)sourceExpression;
- (void)setSourceExpression:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)entityMigrationPolicyClassName;
- (void)setEntityMigrationPolicyClassName:(id)arg1;
- (id)_migrationPolicy;
- (id)_initWithSourceEntityDescription:(id)arg1 destinationEntityDescription:(id)arg2;
- (BOOL)isEditable;
- (void)_createCachesAndOptimizeState;
- (void)_setIsEditable:(BOOL)arg1;
- (void)_throwIfNotEditable;
- (void)_addAttributeMapping:(id)arg1;
- (void)_addRelationshipMapping:(id)arg1;

@end