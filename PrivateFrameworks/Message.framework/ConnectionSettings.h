/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString;

@interface ConnectionSettings : NSObject <NSCopying> {
    NSString *_certUIService;
    struct __CFString { } *_connectionServiceType;
    NSString *_hostname;
    NSUInteger _portNumber;
    NSString *_serviceName;
    BOOL _tryDirectSSLConnection;
    BOOL _usesSSL;
}

@property(copy) NSString *certUIService;
@property(copy) NSString *hostname;
@property(copy) NSString *serviceName;
@property NSUInteger portNumber;
@property BOOL tryDirectSSL;
@property BOOL usesSSL;

- (id)certUIService;
- (struct __CFString { }*)connectionServiceType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)hostname;
- (NSUInteger)portNumber;
- (id)serviceName;
- (void)setCertUIService:(id)arg1;
- (void)setConnectionServiceType:(struct __CFString { }*)arg1;
- (void)setHostname:(id)arg1;
- (void)setPortNumber:(NSUInteger)arg1;
- (void)setServiceName:(id)arg1;
- (void)setTryDirectSSL:(BOOL)arg1;
- (void)setUsesSSL:(BOOL)arg1;
- (BOOL)tryDirectSSL;
- (BOOL)usesSSL;

@end
