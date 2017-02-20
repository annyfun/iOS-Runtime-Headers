/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDRxPhyErrors : PBCodable <NSCopying> {
    unsigned long long  _bphyBadplcp;
    unsigned long long  _bphyRxcrsglitch;
    struct { 
        unsigned int bphyBadplcp : 1; 
        unsigned int bphyRxcrsglitch : 1; 
        unsigned int rfdisable : 1; 
    }  _has;
    unsigned long long  _rfdisable;
}

@property (nonatomic) unsigned long long bphyBadplcp;
@property (nonatomic) unsigned long long bphyRxcrsglitch;
@property (nonatomic) BOOL hasBphyBadplcp;
@property (nonatomic) BOOL hasBphyRxcrsglitch;
@property (nonatomic) BOOL hasRfdisable;
@property (nonatomic) unsigned long long rfdisable;

- (unsigned long long)bphyBadplcp;
- (unsigned long long)bphyRxcrsglitch;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBphyBadplcp;
- (BOOL)hasBphyRxcrsglitch;
- (BOOL)hasRfdisable;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned long long)rfdisable;
- (void)setBphyBadplcp:(unsigned long long)arg1;
- (void)setBphyRxcrsglitch:(unsigned long long)arg1;
- (void)setHasBphyBadplcp:(BOOL)arg1;
- (void)setHasBphyRxcrsglitch:(BOOL)arg1;
- (void)setHasRfdisable:(BOOL)arg1;
- (void)setRfdisable:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end